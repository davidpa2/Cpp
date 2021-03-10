#include <iostream>
using namespace std;

int main()
{
	int numero=25, intentos;
	
	cout<<"Introduce el numero maximo de intentos";
	cin>>intentos;
	
	for (numero=1; intentos; numero++)
	{
		cout<<"Introduce el numero que creas";
		cin>>numero;
		
		if (numero<25){
		    cout "El numero es menor";
		}
	    else
	        cout "El numero es mayor";

		
	}
}
