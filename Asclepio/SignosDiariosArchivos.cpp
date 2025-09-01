#include "TemplateArchivo.h"
#include "SignosDiariosArchivo.h"
#include "SignosDiarios.h"  
#include "Fecha.h"
#include <string>


SignosDiariosArchivo::SignosDiariosArchivo() {
    _nombreArchivo = "signosDiarios.dat";
}

std::string SignosDiariosArchivo::getNombreArchivo() const { 
    return _nombreArchivo; 
}

SignosDiarios SignosDiariosArchivo::buscarPorFecha(Fecha fecha) {
    FILE *pArchivoSignos = fopen(_nombreArchivo.c_str(), "rb");
    if (pArchivoSignos == NULL) {
        return SignosDiarios(); 
    }

    SignosDiarios registroSignos;
    while (fread(&registroSignos, sizeof(registroSignos), 1, pArchivoSignos)) {
        if (registroSignos.getFechaToma() == fecha) {
            fclose(pArchivoSignos);
            return registroSignos; // se encontró el registro
        }
    }

    fclose(pArchivoSignos);
    return SignosDiarios(); 
}



