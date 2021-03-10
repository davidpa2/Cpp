#include <iostream>
using namespace std;

int main()
{
	int trimestre=0, alumno=0, maxalumnos;
	
	cout<<"¿Cuantos alumnos quieres registrar? ";
	cin>>maxalumnos;
	
	int notas[maxalumnos][3];
	float media[maxalumnos][3];
	
	for (alumno=0;alumno<=maxalumnos-1;alumno++)
		{
		for (trimestre=0;trimestre<=2;trimestre++)
		{
			cout<<"Introduce la nota del alumno"<<alumno+1<<" del trimestre"<<trimestre+1<<": ";
			cin>>notas[alumno][trimestre];
		
	}
	}
	for (alumno=0;alumno<=notas[maxalumnos][trimestre];alumno++)
	{
		media=((notas[0][0]+notas[0][1]+notas[0][2])/3);
		}		
		cout<<"La nota media de los trimestres del alumno "<<alumno+1<<"es "<<media[maxalumnos][3]<<endl;

	return 0;	
}
