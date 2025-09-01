#pragma once
#include "SignosDiarios.h"
#include "SignosDiariosArchivo.h"
#include "Fecha.h"
#include <string>

class SignosDiariosManager {
private:
    SignosDiariosArchivo _signosDiariosArchivos;

public:
     void agregarSignosDiarios();

     SignosDiarios obtenerSignosDiarios(Fecha fechaToma);

     void mostrarSignosDiarios();
};