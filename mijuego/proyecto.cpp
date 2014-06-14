
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <ncurses.h>
#include <time.h>

#define N 0x100
#define MAX 0x100
#define ESC 27
#define L0 1 /* Longitud inicial */
#define WIDTH 60
#define HEIGHT 16
#define AVAIL_WIDTH (WIDTH - 4)
#define AVAIL_HEIGHT (HEIGHT - 2)


struct TCoordenada{
    double x;
    double y;
};

struct TAnillo{
    double x;
    double y;
};

typedef struct {
    struct TAnillo anillo[N];
    int longitud;
} Nave;

void rellena(Nave *nave){

    int posicion_inicial_x = rand() % AVAIL_WIDTH + 1;
    int posicion_inicial_y = rand() % AVAIL_HEIGHT + 1;
    for (int i=0; i<nave->longitud; i++){
        nave->anillo[i].x = posicion_inicial_x + i;
        nave->anillo[i].y = posicion_inicial_y;
    }
}

void bordes(){
    FILE *pf;

    /* Si no se abre el fichero pf vale NULL (falso) */
    /* Si pf es falso, xq !pf es verdadero hacemos return */
    if ( !(pf = fopen("pantalla.txt", "r") ))
            return;

    int pixel;
    while( (pixel = fgetc(pf)) != EOF )
        printw("%c", (char) pixel);

    refresh();
    fclose(pf);

}

void muestra(Nave *nave){
    clear();
    bordes();
    for (int i=0; i<nave->longitud; i++)
        mvprintw( nave->anillo[i].y, nave->anillo[i].x, "<#>");
                  
    refresh();
}

void mover(struct TCoordenada incremento, Nave *nave){
	nave->anillo[0].x += incremento.x;
    nave->anillo[0].y += incremento.y;

}
int main(int argc, char *argv[]){

    Nave nave;
    nave.longitud = L0;
    struct TCoordenada movimiento = {0, -1};
    int user_input;

    srand(time(NULL));

    rellena(&nave);

    initscr(); // Crea una matriz para pintar
    halfdelay(300); // Hace que getch espere 3 decimas de segundo
    keypad(stdscr, TRUE); // Vale para leer las flechas
    noecho(); // Para que no se vea el caracter pulsado.
    curs_set(0); // No se ve el cursor.
    while((user_input = getch()) != ESC){

        switch(tolower(user_input)){
           if(struct TCoordenada.x[] != struct Tcoordenada.x[1])
	    case 'q':
            case KEY_UP:
                movimiento.x = 0;
                movimiento.y = -1;
                break;
            case 'a':
            case KEY_DOWN:
                movimiento.x = 0;
                movimiento.y = 1;
                break;
            case 'o':
            case KEY_LEFT:
                movimiento.x = -1;
                movimiento.y = 0;
                break;
            case 'p':
            case KEY_RIGHT:
                movimiento.x = 1;
                movimiento.y = 0;
                break;

        }
        mover( movimiento, &nave);
        muestra(&nave);
    }
    endwin(); // Libera la matriz.

    return EXIT_SUCCESS;
}
