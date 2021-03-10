#include <iostream>
#include <fstream>
using namespace std;
   
int main()
{
	int menu, identify_cancion=0, buscar1, buscar2, buscar3, coincidencias1=0, coincidencias2=0, limite_canciones=10, premium1=0, premium2=0;
	string buscar_titulo, buscar_artista;
	
		struct musica
	{
		string titulo, artista;
		int duracion, tamanio;
	};
	musica canciones[100];
		
cout<<"Bienvenido a WorldDoMusic, la gran plataforma musical donde puede crear su lista de reproduccion con todos los artistas del planeta."<<endl<<endl
	<<".-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-"<<endl
	<<"Recuerde que solo puede almacenar 10 canciones, para disfrutar de un almacenamiento de 100 canciones puede hacerse con la version de WorldDoMusic Premium:"<<endl;



cout<<"?Le gustaria obtener la version Premium por solo 10 euros/mes? Pulse 1 si quiere o 2 si no:"<<endl;
cin>>premium1;
	
	if (premium1==1){
		cout<<"Han sido retirados de su cuenta 10 euros."<<endl
			<<"Muchas gracias, ahora dispone de WorldDoMusic Premium."<<endl
			<<".-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-."<<endl;
			limite_canciones=100;
	
	}
	if (premium1==2){
		cout<<"De acuerdo, no dispondra de WorldDoMusic Premium, puede pagar la version Premium siempre que quiera desde el menu o una vez llegue al limite de 10 canciones registradas."<<endl;
			limite_canciones=10;
	}

	do{		
		cout<<endl
			<<".-.-.-.-.-.-.-.-.-.-.-.-.MENU.-.-.-.-.-.-.-.-.-.-.-.-."<<endl
			<<"-Si desea añadir una cancion a su Playlist introduzca 1."<<endl
			<<"-Si desea ver todas las canciones registradas introduza 2."<<endl
			<<"-Si desea buscar cualquiera de las canciones de su Playlist introduzca 3."<<endl
			<<"-Si desea  realizar  una  busqueda  de  las  canciones  de  un  artista concreto introduzca 4."<<endl
			<<"-Para hacerse con WorldDoMusic PREMIUM pulse 5."<<endl
			<<"-Para salir puede introducir 0."<<endl
			<<".-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-."<<endl;
		cin>>menu;
		
		if (menu==1){
			
				if (identify_cancion>=limite_canciones){
					cout<<"Ha introducido el maximo de canciones, para añadir mas canciones debe pagar la version de WorldDoMusic Premium."<<endl
						<<"Por solo 10 euros/mes podra disfurtar de un almacenamiento de 100 canciones"<<endl
						<<"?Le gustaria obtener la version Premium? Pulse 1 si quiere o 2 si no:"<<endl;
					cin>>premium1;
					
						if(premium1==1){
							cout<<"Han sido retirados de su cuenta 10 euros."<<endl
								<<"Muchas gracias, ahora dispone de WorldDoMusic Premium"<<endl
								<<".-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-."<<endl;
								limite_canciones=100;
						}else{
							cout<<"De acuerdo, no dispondra de WorldDoMusic Premium, puede pagar la version Premium desde el menu o una vez llegue al limite de 10 canciones."<<endl;
						}
					
				}else{
				
				cin.ignore();	
				cout<<"Introduzca el titulo de la cancion."<<endl;
				getline(cin,canciones[identify_cancion].titulo);
		
				cout<<"Introduzca el artista de esta."<<endl;
				getline(cin,canciones[identify_cancion].artista);
	
				cout<<"Introduzca la duracion (en segundos)."<<endl;
				cin>> canciones[identify_cancion].duracion;
	
				cout<<"Por ultimo introduzca lo que ocupa (en KB)."<<endl;
				cin>> canciones[identify_cancion].tamanio;
			
				cout<<".--.--.--.--.--.--.--.--.--.--.--.--.--.--.--.--.--.--.--.--.--.--."<<endl			
					<<"Se ha registrado la cancion ´"<<canciones[identify_cancion].titulo<<"´ correctamente."<<endl<<endl;
				
				identify_cancion++;			
			}
		}		

		if (menu==2){
			if (identify_cancion<1){
				cout<<"No tienes ninguna cancion registrada, primero debe registrar alguna cancion desde el menu."<<endl;
			}
				for (buscar1=0;buscar1<identify_cancion;buscar1++)
						cout<<".---.---.---.---.---.---.---.---.---.---.---."<<endl
							<<"La cancion se titula "<<canciones[buscar1].titulo<<"."<<endl
							<<"Es del artista "<<canciones[buscar1].artista<<"."<<endl
							<<"Dura "<<canciones[buscar1].duracion<<" segundos."<<endl
							<<"Y ocupa "<<canciones[buscar1].tamanio<<" kylobytes"<<endl
							<<".---.---.---.---.---.---.---.---.---.---.---."<<endl;
		}
		
		if (menu==3){
			if (identify_cancion<1){
				cout<<"No tienes ninguna cancion registrada, primero debe registrar alguna cancion desde el menu."<<endl<<endl;
			
			}else{
				cin.ignore();
				cout<<"¿Que cancion de su Playlist desea buscar?"<<endl;
				getline(cin,buscar_titulo);					
		
						for (buscar2=0;buscar2<identify_cancion;buscar2++){	
							if (canciones[buscar2].titulo==buscar_titulo){
								cout<<".---.---.---.---.---.---.---.---.---.---.---."<<endl
									<<canciones[buscar2].titulo<<" es del artista "<<canciones[buscar2].artista<<"."<<endl
									<<"Dura "<<canciones[buscar2].duracion<<" segundos."<<endl
									<<"Y ocupa "<<canciones[buscar2].tamanio<<" kylobytes"<<endl
									<<".---.---.---.---.---.---.---.---.---.---.---."<<endl;
										coincidencias1++;
							}
						}
								if (coincidencias1==0){
									cout<<"Esta cancion no esta dentro de su Playlist, para añadir una cancion debe hacerlo desde el menu."<<endl<<endl;
								}					
			}
		}	
				
		if (menu==4){
			if (identify_cancion<1){
				cout<<"No tienes ninguna cancion registrada, primero debe registrar alguna cancion desde el menu."<<endl<<endl;
			}else{
				
				cin.ignore();
				cout<<"¿De que artista le gustaria buscar todas sus canciones?"<<endl;
				getline(cin,buscar_artista);					
									
						for (buscar3=0;buscar3<identify_cancion;buscar3++){
							if (canciones[buscar3].artista==buscar_artista){										
								coincidencias2++;
									if (coincidencias2>0){						
										cout<<".---.---.---.---.---.---.---.---.---.---.---."<<endl
											<<"La cancion se titula "<<canciones[buscar3].titulo<<"."<<endl
											<<"Dura "<<canciones[buscar3].duracion<<" segundos."<<endl
											<<"Y ocupa "<<canciones[buscar3].tamanio<<" kylobytes"<<endl
											<<".---.---.---.---.---.---.---.---.---.---.---."<<endl;
									}	
							}
						}		
						
									if (coincidencias2==0){
										cout<<"En su Playlist no existe ninguna cancion de "<<buscar_artista<<"."<<endl<<endl;
									}							
			}		
		}
		
		if (menu==5){	
			if (limite_canciones==100){
				cout<<"Ya dispone de la version Premium de WorldDoMusic."<<endl;
			
			}else{
				
				cout<<"Disfrute de un almacenamiento de 100 canciones por solo 10 euros/mes."<<endl
					<<"?Le gustaria hacerse con la version Premium? Pulse 1 si quiere o 2 si no:"<<endl;
				cin>>premium2;
				
						if (premium2==1){
							cout<<"Han sido retirados de su cuenta 10 euros."<<endl
								<<"Muchas gracias, ahora dispone de WordlDoMusic Premium."<<endl
								<<".-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-."<<endl;
									limite_canciones=100;
						}
			
						if (premium2==2){
							cout<<"De acuerdo, no dispondra de WorldDoMusic Premium, puede pagar la version Premium siempre que quiera o una vez llegue al limite de 10 canciones registradas."<<endl;
						}
			}	
		}
	
	}while (menu!=0);
		cout<<"Ha cerrado sesion de WorldDoMusic,   por motivos de presupuesto la proxima vez que entre debera registrar de nuevo todas las canciones."<<endl;

return 0;
}
