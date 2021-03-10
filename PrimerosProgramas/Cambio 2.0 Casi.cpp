#include <iostream>
using namespace std;

int main()
{
	int precio=1, pago, cambio, productos=1, suma=0;

while(productos!=0){

cout<<"Introduzca el precio de un producto 0 para acabar: ";
cin>>productos;		
suma=suma+productos;
}
cout<<"La cuenta es de: "<<suma<<endl;

cout<<"Introduzca ahora lo que va a pagar: ";
cin>>pago;

	cambio=pago-suma;
	if (pago<precio){
		cout<<"Has introducido un pago menor al precio que cuesta.";
	}else{
		cout<<"El cambio es de: "<<cambio<<endl;

		int billetes[5] =
		{50, 20, 10, 5, 1};
		billetes[0]=cambio/50;
		cambio=cambio%50;
			if(billetes[0]>0){
				cout<<"Recibes "<<billetes[0]<<" billetes de 50"<<endl;
		}
		billetes[1]=cambio/20;
		cambio=cambio%20;
			if(billetes[1]>0){
				cout<<"Recibes "<<billetes[1]<<" billetes de 20"<<endl;
		}
		billetes[2]=cambio/10;
		cambio=cambio%10;
			if(billetes[2]>0){
				cout<<"Recibes "<<billetes[2]<<" billetes de 10"<<endl;
		}
		billetes[3]=cambio/5;
		cambio=cambio%5;
			if(billetes[3]>0){
				cout<<"Recibes "<<billetes[3]<<" billetes de 5"<<endl;
		}
		billetes[4]=cambio/1;
		cambio=cambio%1;
			if(billetes[4]>0){
				cout<<"Recibes "<<billetes[4]<<" monedas de 1"<<endl;
		}
	cout<<"Gracias por confiar en `La Caisha´";
	}
return 0;
}	
