#include <iostream>
using namespace std;

int main()
{
	struct
	{
		string nombre;
		char grupo;
		short nota1, nota2, nota3, notaf;
	}alumno
	
	cout<<"?Cual es el nombre del alumno?";
	cin>> alumno.nombre;
	
	cout<<"?A que grupo pertenece?";
	cin>> alumno.grupo;
	
	cout<<"?Cual es la su nota en el primer trimestre?";
	cin>> alumno.nota1;
	
	cout<<"?Cual es la su nota en el segundo trimestre?";
	cin>> alumno.nota2;
	
	cout<<"?Cual es la su nota en el tercer trimestre?";
	cin>> alumno.nota3;

		notaf=(nota1+nota2+nota3)*3;
		
}

