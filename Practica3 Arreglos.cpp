#include <iostream>

using namespace std;
int main()


{
	//* Orden inverso de 10 numeros
	int i, arreglo[10];

	for( i= 0; i < 10; i++){
        cout << "Ingresa el valor: " << i << endl;
        cin >> arreglo[i];
	}
	
	cout << "El vector inverso es: \n" << endl;
	for( i=9; i >= 0; i--)
	{
	       cout << arreglo[i]<< endl;
	}
    return 0;
    
    
    //*Calcular la media de 10 numeros
    int i, arreglo[10];
    int suma = 0;
    

	for( i= 0; i < 10; i++){
        cout << "Ingresa el valor: " << i << endl;
        cin >> arreglo[i];
	}
	for( i=0; i < 10; i++){
	   suma += arreglo[i];
	}
	
	cout << "La media del arreglo es: " << suma * 1.0 / 10<< endl; 
	
	
	//*Calcular el numero mayor
    int i, arreglo [10],mayor = 0;
    
    for( i= 0; i < 10; i++){
        cout << "Ingresa el valor: " << i << endl;
        cin >> arreglo[i];
    }
    if (arreglo[i] > mayor){
        mayor = arreglo[i];
    }
    
    cout << "El mayor numero del vector es: " << mayor<< endl;
}
