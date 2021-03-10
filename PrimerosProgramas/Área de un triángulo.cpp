#include <iostream> //librerias
using namespace std;

int main(){
	float base=1;
	float altura=1;
	float area;
	
	while(base>0 && altura>0){
		cout<<"Introduce medida de la base del triangulo";
		cin>>base;
		cout<<"Introduce medida de la altura del triangulo";
		cin>>altura;
		
		area=(base*altura)/2;
		
		if (base>0 && altura>0){
			cout<<"EL area del triángulo es "<<area<<endl;
			
		}else{
			cout<<"No es posible realizar el cálculo de un area si uno de los valores (base o altura) son negativos";
		} 
	}
    return 0;
}

