#include <iostream> //librerias
using namespace std;

int main(){
	float base=1;
	float altura=1;
	float area;
	
	while(base>0 && altura>0){
		cout<<"Introduce la altura de un rectangulo";
		cin>>altura;
		cout<<"Introduce la base de un rectangulo";
		cin>>base;
		
		area=base*altura;
		
		if (base>0 && altura>0){
			cout<<"El area del rectangulo es"<<area<<endl;
			
		}else{
			cout<<"Para calcular el area ambos numeros deben ser positivos";
		}
	}
    return 0;	
}
