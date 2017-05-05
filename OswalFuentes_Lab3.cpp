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

      case 2:{

	break;
      }
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
