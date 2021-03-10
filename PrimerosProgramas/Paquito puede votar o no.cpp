#include <iostream>
using namespace std;

int main(){
	
	string nombre;
	int edad;
	
	cout <<"Introduce el nombre y apellido todo junto: ";
	cin >> nombre;
	cout <<"Introduce su edad: ";
	cin >> edad;
	
	     if(edad>=18){
	     	cout <<"Puede votar y debe votar como ciudadano que es" <<nombre<<endl;
	    }else {
	    	cout <<"Al ser menor de edad, se debe quedar en su casa..." <<nombre<<endl;
		}
    return 0;
}

