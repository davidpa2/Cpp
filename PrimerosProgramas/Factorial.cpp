#include <iostream> //librerias
using namespace std;

int main(){
	
	int n;
	int i;
	int factorial=1;
	
	cout << "Introduce un n�mero: ";
	cin >> n;
	
	for (i=1;i<=n;i++){
		if(n==0){
			factorial=1;
		}else{
			factorial=factorial*i;
		}
	}
    cout << "El factorial de ese n�mero es: " << factorial <<endl;
    return 0;
}

