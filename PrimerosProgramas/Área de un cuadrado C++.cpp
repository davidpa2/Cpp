#include <iostream> //librerias
using namespace std;

int main(){
    float area;
    float lado=1;
    
    while(lado>0){
    	
    	cout<<"Escribe la medida del lado de un cuadrado";
    	cin>>lado;
    	
    	area=lado*lado;
    	
    	if (lado>0){
    		cout<<"El area del cuadrado es"<<area<<endl;
    		
    	}else{
    		cout<<"Reflexiona sobre tu vida por favor, eso es matematicamente imposible";
		}
	}
    return 0;
}
