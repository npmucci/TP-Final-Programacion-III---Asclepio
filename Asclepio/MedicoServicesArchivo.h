#pragma once
#include <string>
#include "Archivo.h"
#include "Profesional.h"

class MedicoServicesArchivo: public IArchivo<Profesional>{
private:
  std::string _nombreArchivo;
public:
 int getCantidadRegistros();

};
