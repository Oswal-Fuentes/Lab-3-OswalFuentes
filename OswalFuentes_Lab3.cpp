#include <iostream>
#include <string>
#include <sstream>
#include <stdlib.h>


using namespace std;

//Funcion Menu
int menu();

//Funcion Suma digitos
int suma_digitos(int);

int main(){
bool salir=false;
  while(!salir){
    switch(menu()){
      case 1:{//Ejercicio 1
        int numero;
        string binario = "";
        cout << "Ingrese un numero: " << endl;
        cin >> numero;
        int recorrido=0;
          while(recorrido<=numero){
            int dividendo=0, residuo=0, divisor = 2;
            dividendo = recorrido;
              while(dividendo >= divisor){
                residuo = dividendo % 2;
                  if(residuo == 1)
                    binario = "1" + binario;
                  else
                    binario = "0" + binario;
                    dividendo = dividendo/divisor;
              }
              if(dividendo == 1)
                binario = "1" + binario;
              else
                binario = "0" + binario;
                int numero2 =0;
	              numero2=atoi(binario.c_str());
	              if(suma_digitos(numero2)%2==0){
	                 cout<<recorrido<<" es un numero malvado"<<endl;
                }
                recorrido++;
              }
        break;
      }//Fin ejercicio 1
      case 2:{//Ejercicio 2
	int dimension=0;
	cout<<"Ingrese la dimension de la matriz: ";
	cin>>dimension;
	int matrix[dimension][dimension];
	//-----LLENAR DE NUMEROS-----
        for (int i = 0; i < dimension; i++) {
          for (int j = 0; j < dimension; j++) {
            matrix[i][j]=i+j;
          }
        }
        //-----LLENAR DE NUMEROS-----
	//---Imprimir---
	for(int x=0;x<dimension;x++){
           for(int y=0;y<dimension;y++){
            cout<<matrix[x][y]<<"\t";
          }
            cout<<endl;
         }
	//---Imprimir---
	
	//----Voltear----
	int element=0,limite=dimension-1;
        int matrix2[dimension][dimension];
	for (int i = 0; i < dimension; i++) {
          for (int j = 0; j < dimension; j++) {
            element=matrix[i][j];
	    matrix2[j][limite]=element;
          }
	limite--;
        }
	cout<<endl;	
	//---Imprimir---
        for(int x=0;x<dimension;x++){
          for(int y=0;y<dimension;y++){
              cout<<matrix2[x][y]<<"\t";
            }
              cout<<endl;
           }
          //---Imprimir---
	break;
      }//Fin ejercicio 2
      case 3:{
	salir=true;
	break;
      }
    }
  }
  return 0;
}

int menu(){
  int opcion;
  bool valido=false;
  do{
    cout<<"-----MENU-----"<<endl
    <<"1.- Ejercicio 1"<<endl
    <<"2.- Ejercicio 2"<<endl
    <<"3.- Salir"<<endl;

  cout<<"Ingrese una opcion: ";
  cin>>opcion;

  if(opcion>0 && opcion < 4)
    valido=true;
  else{
    cout<<"Opcion no valida, intente de nuevo..."<<endl;
  }

  }while(!valido);

  return opcion;
}

int suma_digitos(int numero) {
   int suma=0;
   if (numero < 0)
   numero=-numero;
   while (numero!=0) {
     suma+=numero%10;
      numero=numero/10;
   }
   return suma;
}

