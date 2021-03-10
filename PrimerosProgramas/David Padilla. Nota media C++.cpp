#include <iostream>
using namespace std;

int main(){
	int nota1, nota2, nota3, media;
	
	cout<<"Introduce la nota del primer trimestre";
	cin>> nota1;
	
	cout<<"Introduce la nota del segundo trimestre";
	cin>> nota2;
	
	cout<<"Introduce la nota del tercer trimestre";
	cin>> nota3;
	
	media= (nota1+nota2+nota3)/3;
	cout<<"La nota media es: "<<media<<endl;
	
	if (media >=5){
	
	cout<<"Este alumno ha aprobado";
	
	switch (media)
		{
		case 5: cout<<" y tiene una calificacion de suficiente";
		break;
		case 6: cout<<" y tiene una calificacion de bien";
		break;
		case 7: cout<<" y tiene una calificacion de notable";
		break;
		case 8: cout<<" y tiene una calificacion de notable";
		break;
		case 9: cout<<" y tiene una calificacion de sobresaliente";
		break;
		case 10: cout<<" y tiene una calificacion de sobresaliente";		
	}	
	}
	else {
		cout<< "El alumno a suspendido";
	}
	return 0;
}
