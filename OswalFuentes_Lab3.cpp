#include <iostream>

using namespace std;

//Funcion Menu
int menu();

int main(){
bool salir=false;
  while(!salir){
    switch(menu()){
      case 1:{
        
        break;
      }
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

