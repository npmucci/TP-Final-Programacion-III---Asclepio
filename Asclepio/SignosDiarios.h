#pragma once
#include <string>
#include "Fecha.h"

class SignosDiarios {
private:
    Fecha _fechaToma;
    char _tensionArterial[10];
    char _frecuenciaCardiaca[4];
    char _frecuenciaRespiratoria[4];
    float _temperatura;
    int _saturacionOxigeno;

public:
    SignosDiarios();
    SignosDiarios(Fecha fechaToma, std::string tensionArterial, std::string frecuenciaCardiaca, std::string frecuenciaRespiratoria, float temperatura, int saturacionOxigeno);
    
    void setFechaToma(const Fecha &fechaToma);
    void setTensionArterial(const std::string &tensionArterial);
    void setFrecuenciaCardiaca(const std::string &frecuenciaCardiaca);
    void setFrecuenciaRespiratoria(const std::string &frecuenciaRespiratoria);
    void setTemperatura(float temperatura);
    void setSaturacionOxigeno(int saturacionOxigeno);

    Fecha getFechaToma() const;
    std::string getTensionArterial() const;
    std::string getFrecuenciaCardiaca() const;
    std::string getFrecuenciaRespiratoria() const;
    float getTemperatura() const;
    int getSaturacionOxigeno() const;
    
    std::string toCSV() const;

    void mostrar();
    void mostrarTabla();
};