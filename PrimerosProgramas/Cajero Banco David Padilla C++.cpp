#include <iostream>
#include <fstream>

using namespace std;

void cuantodinero(int &consultar, int &e){
	cout<<endl
		<<"Ahora posee "<<e<<" euros en la cuenta "<<consultar<<"."<<endl;
} 

int main() {
	int cuentas[3], cuenta ,respuesta1, respuesta2, ingresar, extraer, password, intentos, codigo=0;
	string usuario, olvido;

	ifstream ficherobanco("fichero");
	ficherobanco>>cuentas[0];
	ficherobanco>>cuentas[1];
	ficherobanco>>cuentas[2];
	ficherobanco.close();

cout<<"Bienvenido al cajero inteligente,  para acceder a sus cuentas debe introducir   sus datos de registro."<<endl;
	do {
		cout<<endl
			<<"Por favor introduzca el nombre de identificacion:"<<endl;
		cin>>usuario;
		cout<<"Introduzca la PASSWORD por favor:"<<endl;
		cin>>password;

			if (usuario!="maestro_apruebame") {
				cout<<"El nombre de usuario es incorrecto."<<endl;
			}
			if (password!=666) {
				cout<<"La PASSWORD es incorrecta."<<endl;
			}		
			if ((usuario!="maestro_apruebame")||(password!=666))
			intentos++;
			
			if(intentos==3){
		
cout<<endl
	<<"¿Ha olvidado su nombre de usuario o contraseña? Responda si o no."<<endl;
cin>>olvido;
intentos=0;
	if (olvido=="si") {
	
		cout<<"Le mandaremos un codigo de identificacion a su correo para poder acceder a su cuenta:"<<endl;
		do{	
				cout<<"-Introduzca el codigo por favor: ";
				cin>>codigo;
					if (codigo!=1234){
						cout<<"Ha introducido un codigo incorrecto."<<endl;
					}
							
			}while (codigo!=1234);
						
	}		
			}
				if(codigo==1234)
					break;				
	}while ((usuario!="maestro_apruebame")||(password!=666));
		cout<<endl
			<<"Ha accedido correctamente a sus datos. Usted posee 3 cuentas:"<<endl;
			
			do {
				cout<<endl
					<<"-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-"<<endl
					<<"-Si desea cancelar la operacion pulse 0."<<endl
					<<"-Si desea ver el saldo de cada una de las cuentas introduzca 1."<<endl
				    <<"-Si desea gestionar cualquiera de sus cuentas pulse 2."<<endl
				    <<"_._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._"<<endl;
				    
				cin>>respuesta1;
	
				if(respuesta1==1) {
					cout<<"En la cuenta 1 posee "<<cuentas[0]<<" euros."<<endl
					    <<"En la cuenta 2 posee "<<cuentas[1]<<" euros."<<endl
					    <<"En la cuenta 3 posee "<<cuentas[2]<<" euros."<<endl;
				}
			
				if(respuesta1==2) {
					cout<<"¿Con que cuenta le gustaria tramitar?"<<endl;
					cin>>respuesta1;
					cout<<endl
						<<"La cuenta que ha seleccionado posee "<<cuentas[respuesta1-1]<<" euros."<<endl;
											
					do {
	
						cout<<"-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-"<<endl
							<<"-Introduzca 0 para salir."<<endl
						    <<"-Introduzca 1 para ingresar dinero en la cuenta "<<respuesta1<<"."<<endl
						    <<"-Introduzca 2 para extraer dinero en la cuenta "<<respuesta1<<"."<<endl
							<<"_._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._"<<endl;
						cin>>respuesta2;
	
						if(respuesta2==1) {
							cout<<"¿Cuanto dinero le gustaria ingresar?"<<endl;
							cin>>ingresar;
							cuentas[respuesta1-1]=cuentas[respuesta1-1]+ingresar;
							cuantodinero(respuesta1,cuentas[respuesta1-1]);
						}
	
						if(respuesta2==2) {
							do {
								cout<<"¿Cuanto dinero le gustaria extraer?"<<endl;
								cin>>extraer;
								if(extraer>cuentas[respuesta1-1]) {
									cout<<"No dispones del suficiente dinero para extraer."<<endl;
								}
							} while(extraer>cuentas[respuesta1-1]);
							cuentas[respuesta1-1]=cuentas[respuesta1-1]-extraer;
							cuantodinero(respuesta1,cuentas[respuesta1-1]);
	
							int billetes[5] =
							{50, 20, 10, 5, 1};
	
							billetes[0]=extraer/50;
							extraer=extraer%50;
								if (billetes[0]>0) {
								cout<<"Recibes "<<billetes[0]<<" billetes de 50."<<endl;
								}
							billetes[1]=extraer/20;
							extraer=extraer%20;
								if(billetes[1]>0) {
								cout<<"Recibes "<<billetes[1]<<" billetes de 20."<<endl;
								}
							billetes[2]=extraer/10;
							extraer=extraer%10;
								if(billetes[2]>0) {
								cout<<"Recibes "<<billetes[2]<<" billetes de 10"<<endl;
								}
							billetes[3]=extraer/5;
							extraer=extraer%5;
								if(billetes[3]>0) {
								cout<<"Recibes "<<billetes[3]<<" billetes de 5"<<endl;
								}
							billetes[4]=extraer/1;
							extraer=extraer%1;
								if(billetes[4]>0) {
								cout<<"Recibes "<<billetes[4]<<" monedas de 1"<<endl;
								}
						}
					} while(respuesta2!=0);
				}
			} while(respuesta1!=0);
			cout<<"Muchas gracias por utilizar nuestros cajeros de ultima tecnologia.";
		
	ofstream ficherobanco0("fichero");
	ficherobanco0<<cuentas[0]<<endl;
	ficherobanco0<<cuentas[1]<<endl;
	ficherobanco0<<cuentas[2]<<endl;
	ficherobanco0.close();
		
	return 0;
}
