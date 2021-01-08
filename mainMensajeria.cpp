#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char** argv) {
	int caja[1000],j,p,i,suma,op;
	p=0;
	i=0;
	for(j=1;i<=1;j=j+1){
		cout <<"Por favor ingrese datos de la caja " << j <<endl;
		cin >>p;	
		caja[j]=p;
		suma=suma+p;
		cout <<"Desea ingresar otra caja  1=si / 0=no "<<endl;
		cin >>op;
      switch(op){
		case 0:i=2;
		break;
		case 1:i=1;
		break;
		default:i=3;
		cout <<"Opcion incorrecta ";
		}
		}
		cout <<"\n" <<"La suma del total de producto de todas las cajas es " << suma;

	return 0;
}
