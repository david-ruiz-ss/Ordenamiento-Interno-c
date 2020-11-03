#include<iostream>
using namespace std;

void Imprimir(int[], int n);
void shell (int[], int n);
//Algoritmos de ordenamiento internos.
//[Los numeros del arreglo ordenados de menor a mayor]
//Con el metodo shell [by AT]
int main(){
	int total; //Pedir la cantidad
	cout<<"Cuantos numeros tiene el arreglo"<<endl;
	cin>>total;
	int num[total];
	for (int i=0;i<total;i++){
		cout<<"Ingrese el numero para la posicion [ "<<(i+1)<<" ] del arreglo"<<endl;
		cin>>num[i];
		//Esto hara que pida ingresar los datos sucesivamente
	}
	shell (num, total);
	Imprimir (num, total);
}

void shell(int a[], int n){
	int ints, i, aux;
	bool band;
	ints=n;
	//Se declaran las variables a utilizar
	while (ints>1){
		ints =(ints/2);
		band=true;
		
		while(band==true){
			band=false;
			i=0;
			
			while((i+ints)<=n){
				if(a[i]>a[i+ints]){
					aux=a[i];
					a[i]=a[i+ints];
					a[i+ints]=aux;
					band=true;
				}
				i++; 
			}//Esto es lo que hace que el programa ordene el contenido del arreglo
			//Es por los siclos while
		}
	}
}

void Imprimir(int a[], int n){
	cout<<"Numeros del arreglo ordenados de menor a mayor"<<endl;
	for (int i=0;i<n;i++)
	cout<<"\t["<<a[i]<<"]"<<endl;
	system("pause");
	//Aca ya despues de las comparaciones nos dara el resultado
	
}

