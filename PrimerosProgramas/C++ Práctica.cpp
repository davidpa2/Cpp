#include <iostream> //librerias
using namespace std;

int main(){
	float radio=1;
	float area;
	float pi=3.14;
	
	while(radio>0){
		
		cout<<"Escribe un radio";
		cin>>radio;
		
		area=pi*radio*radio;
		
		if (radio>0){
			cout<<"El radio es"<<area<<endl;	
		
		}else{
		cout<<"Eso no es posible JODER TUS CARBRAS YAAAA!";
     	}
	}
    return 0;
}

