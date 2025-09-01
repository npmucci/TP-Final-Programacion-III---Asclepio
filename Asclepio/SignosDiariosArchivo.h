#pragma once
#include <string>
#include "TemplateArchivo.h"
#include "SignosDiarios.h"
#include "Fecha.h"

class SignosDiariosArchivo : public TArchivo<SignosDiarios> {
private:
    std::string _nombreArchivo;

public:

  SignosDiariosArchivo();
  std::string getNombreArchivo() const;

  SignosDiarios buscarPorFecha(Fecha fecha);


   
};