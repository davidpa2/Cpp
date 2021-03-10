
#include <iostream>
#include<stdlib.h>
#include <ctime>

using namespace std;

int main(){

int intentos1,maxintentos,numero,objetivo,resultado,repeticion,jugadores;

cout<<"Cuantos jugadores van a participar";
cin>>jugadores;

for(repeticion=1;repeticion<=jugadores;repeticion++){


srand (time (NULL));
    objetivo=rand()%100;

cout<<"¿Cuantos intentos crees necesitar, maximo 10, cuantos menos intentos mayor sera la puntuacion si aciertas"<<endl;
cin>>maxintentos;

for(intentos1=1;intentos1<=maxintentos;intentos1++){
	cout<<"¿Que numero crees que es?, Introducce un numero del 1 al 100"<<endl;
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

resultado=100-maxintentos*intentos1;

if(intentos1>=maxintentos){
cout<<"Has perdido el numero era "<<objetivo<<endl;
}else{
	cout<<"Enhorabuena, has gando eres un maquina, tienes"<<resultado<<"puntos"<<endl;
}
}

return 0;
}
