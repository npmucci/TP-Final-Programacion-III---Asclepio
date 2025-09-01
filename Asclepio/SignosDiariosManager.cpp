     #include "SignosDiariosManager.h"
     #include "SignosDiariosArchivo.h"
     #include "SignosDiarios.h"
     #include "Fecha.h"
     #include "rlutil.h"
     #include "Disenio.h"

     #include <iostream>
    using namespace std;


     void SignosDiariosManager::agregarSignosDiarios(){
        int dia, mes, anio;
         string tensionArterial, frecuenciaCardiaca, frecuenciaRespiratoria;
         float temperatura;
          int saturacionOxigeno;
        cout << "Ingrese los signos diarios: " << endl;
        cout << "Fecha de toma: " << endl;
        cout << "Día: ";
        cin >> dia;
        cout << "Mes: ";
        cin >> mes;
        cout << "Año: ";
        cin >> anio;
        Fecha fechaToma(dia, mes, anio);
        cout << "Tensión arterial: ";
        cin >> tensionArterial;
        cout << "Frecuencia cardíaca: ";
        cin >> frecuenciaCardiaca;
        cout << "Frecuencia respiratoria: ";
        cin >> frecuenciaRespiratoria;
        cout << "Temperatura: ";
        cin >> temperatura;
        cout << "Saturación de oxígeno: ";
        cin >> saturacionOxigeno;
        SignosDiarios nuevosSignos(fechaToma, tensionArterial, frecuenciaCardiaca, frecuenciaRespiratoria, temperatura, saturacionOxigeno);


        SignosDiariosArchivo archivoSignos;
        if (archivoSignos.agregarRegistro(nuevosSignos, archivoSignos.getNombreArchivo())) {
            cout << "Signos diarios agregados correctamente." << endl;
        } else {
            cout << "Error al agregar los signos diarios." << endl;
        }

    }

     SignosDiarios SignosDiariosManager::obtenerSignosDiarios(Fecha fechaToma){
            SignosDiariosArchivo archivoSignos;
            SignosDiarios signos = archivoSignos.buscarPorFecha(fechaToma);
            if (signos.getFechaToma().getDia() == 0) {
                cout << "No se encontraron signos diarios para la fecha: ";
                 fechaToma.mostrar();
            } else {
                 system("cls");
                 signos.mostrarTabla();
                rlutil::locate(1,24);
            }
            return signos;
     }

     void SignosDiariosManager::mostrarSignosDiarios(){
        SignosDiariosArchivo archivoSignos;
        SignosDiarios signos;
        
        int cantidadRegistros = archivoSignos.getCantidadRegistros(archivoSignos.getNombreArchivo());
        if (cantidadRegistros == 0) {
            cout << "No hay registros de signos diarios." << endl;
            return;
        }


        system("cls");
        for (int i = 0; i < cantidadRegistros; i++) {
           signos = archivoSignos.leer(i, archivoSignos.getNombreArchivo());
           signos.mostrarTabla();
        }
        rlutil::locate(1,24);

     }
