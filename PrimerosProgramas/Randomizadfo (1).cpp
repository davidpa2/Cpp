#include <iostream>
#include<stdlib.h>
#include <ctime>

using namespace std;

int main(){

int intentos1,maxintentos,numero,objetivo;

srand (time (NULL));
    objetivo=rand()%101;

cout<<"¿Cuantos intentos crees necesitar";
cin>>maxintentos;

for(intentos1=1;intentos1<=maxintentos;intentos1++){
	cout<<"¿Que numero crees que es?, Introducce un numero del 1 al 100";
	cin>>numero;
		if(numero==objetivo){
			cout<<"Enhorabuena has ganado";
			break;
		}else{
			cout<<"intentalo de nuevo"<<endl;
				if(numero<objetivo){
						cout<<"La solucion es MAYOR"<<endl;
				}else{
						cout<<"La solucion es menor"<<endl;
						
						
}}
cout<<"Llevas"<<intentos1<<"intentos"<<endl;
}



if(intentos1>=maxintentos){
cout<<"Has perdido el numero era "<<objetivo<<endl;
}


return 0;
}
