#include <iostream>
using namespace std;

void mat_en_cero(int mat[][10]);
void mat_en_x(int mat[][10]);
void parte1(int mat[][10]);
void parte2(int mat[][10]);
void parte3(int mat[][10]);
void parte4(int mat[][10]);
void batalla(int tir,int &j,int h[],int a[]);

int main(int argc, char *argv[]) {
	int cant;
	char jug[10][10];
	cout<<"Ingrese cantidad de jugadores: ";
	cin>>cant;
	for(int i=0;i<cant;i++){
		cout<<"Ingrese nombre jugador "<<i+1<<" : ";
		cin>>jug[i];
		cout<<endl;
	}
	int tir;
	
	cout<<endl<<"A cuantos tiros juegan?"<<endl;
	cin>>tir;
	int h[4],a[4];
	int i=1,gan=0,seg=0;
	for(int f=0;f<cant;f++){
	batalla(tir,i,h,a);
	i++;
	cout<<endl<<endl<<"Turno seguiente jugador"<<endl;}
	for(int j=0;j<cant;j++){
		if(h[j+1]>seg){
		if(seg>gan){
		seg=gan;gan=h[j+1];}
		else
			seg=h[j+1];
		}
		
	}
	cout<<"Ganador: "<<jug[gan]<<". Barcos Hundidos: "<<h[gan]<<endl;
}
