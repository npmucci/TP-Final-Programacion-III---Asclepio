#include <iostream>
#include "HCMenu.h"
using namespace std;  

void HistoriaClinicaMenu::menuHistoriaClinica(){
  int opcion;

  do
  { 
    cout << "1. ALTA ESTUDIO COMPLEMENTARIO" << endl;
    cout << "2. LISTADO ESTUDIO COMPLEMENTARIO" << endl;
    cout << "3. MODIFICAR EL ESTUDIO COMPLEMENTARIO " << endl;
    
    cout << "0. REGRESAR AL MENU PRINCIPAL" << endl;
    cout << "*************************" << endl;
    cout << "Ingrese una opcion: ";
    cin >> opcion;

    switch (opcion)
    {
     case 1:{
      _estudiosManager.cargarEstudios();
     }break;
      case 2:{
        _estudiosManager.listarEstudios();
      }break;
      case 3:{
        _estudiosManager.modificarEstudios();
      }break;  
    
     case 0:{
        system("cls");
     }break;
    } 
    system("pause");
    system("cls");
  }while (opcion != 0);
  
}