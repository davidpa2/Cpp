#include <iostream>
#include <map>

using namespace std;

int main(){
	
	int buscar;
	map<string,string> pais;
	
	pais["Brasil"]="America";
	pais["Cuba"]="America";
	pais["Australia"]="Oceania";
	pais["NuevaZelanda"]="Oceania";
	pais["Espa�a"]="Europa";
	pais["Francia"]="Europa";
	pais["Jap�n"]="Asia";
	pais["China"]="Asia";
	pais["Argelia"]="Africa";
	pais["Nigeria"]="Africa";
	
	cout<<"?Que pais desea buscar?";
	cin>>buscar;
		
		if (pais.find(buscar)!= pais.end()){
			cout<<buscar<<" esta en "<<pais[buscar]<<endl;
		
		}else{
			cout<<"Este pais no esta registrado en la tabla Hash, si quieres ve al C�digo Fuente y lo a�ades."<<endl;
}

return 0;
}
