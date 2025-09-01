#include "SignosDiarios.h"
#include "rlutil.h"
#include "Disenio.h"
#include "Fecha.h"
#include <cstring>

#include <iostream>
using namespace std;





    SignosDiarios::SignosDiarios() {
            _fechaToma = Fecha();
            _tensionArterial[0] = '\0';
            _frecuenciaCardiaca[0] = '\0';
            _frecuenciaRespiratoria[0] = '\0';
            _temperatura = 0.0;
            _saturacionOxigeno = 0;
        }

    SignosDiarios::SignosDiarios(Fecha fechaToma, std::string tensionArterial, std::string frecuenciaCardiaca,
        std::string frecuenciaRespiratoria, float temperatura, int saturacionOxigeno){
        _fechaToma = fechaToma;
        setTensionArterial(tensionArterial);
        setFrecuenciaCardiaca(frecuenciaCardiaca);
        setFrecuenciaRespiratoria(frecuenciaRespiratoria);
        setTemperatura(temperatura);
        setSaturacionOxigeno(saturacionOxigeno);

    }

   void SignosDiarios::setFechaToma(const Fecha &fechaToma) {
    _fechaToma = fechaToma;
}

    void SignosDiarios::setTensionArterial(const std::string &tensionArterial){
        if (tensionArterial.length() < 10) {
            strcpy(_tensionArterial, tensionArterial.c_str());
        } else {
            _tensionArterial[0] = '\0';
        }
    }

    void SignosDiarios::setFrecuenciaCardiaca(const std::string &frecuenciaCardiaca){
        if (frecuenciaCardiaca.length() < 3) {
            strcpy(_frecuenciaCardiaca, frecuenciaCardiaca.c_str());
        } else {
            _frecuenciaCardiaca[0] = '\0';
        }

    }

    void SignosDiarios::setFrecuenciaRespiratoria(const std::string &frecuenciaRespiratoria){
        if (frecuenciaRespiratoria.length() <= 2) {
            strcpy(_frecuenciaRespiratoria, frecuenciaRespiratoria.c_str());
        } else {
            _frecuenciaRespiratoria[0] = '\0';
        }
    }
    void SignosDiarios::setTemperatura(float temperatura){
        if (temperatura >= 35.0 && temperatura <= 42.0) {
            _temperatura = temperatura;
        } else {
            _temperatura = 0.0;
        }
    }

    void SignosDiarios::setSaturacionOxigeno(int saturacionOxigeno){
        if (saturacionOxigeno >= 0 && saturacionOxigeno <= 100) {
            _saturacionOxigeno = saturacionOxigeno;
        } else {
            _saturacionOxigeno = 0;
        }

    }

    Fecha SignosDiarios::getFechaToma() const{
        return _fechaToma;
    }

   std::string SignosDiarios::getTensionArterial() const{
        return std::string(_tensionArterial);
    }
    std::string SignosDiarios::getFrecuenciaCardiaca() const{
        return std::string(_frecuenciaCardiaca);
    }
    std::string SignosDiarios::getFrecuenciaRespiratoria() const{
        return std::string(_frecuenciaRespiratoria);
    }
    float SignosDiarios::getTemperatura() const{
        return _temperatura;
    }
    int SignosDiarios::getSaturacionOxigeno() const{
        return _saturacionOxigeno;
    }


    void SignosDiarios::mostrar()  {
        std::cout << "Fecha de toma: ";
        _fechaToma.mostrar();
        std::cout << "Tensión arterial: " << _tensionArterial << std::endl;
        std::cout << "Frecuencia cardíaca: " << _frecuenciaCardiaca << std::endl;
        std::cout << "Frecuencia respiratoria: " << _frecuenciaRespiratoria << std::endl;
        std::cout << "Temperatura: " << _temperatura << std::endl;
        std::cout << "Saturación de oxígeno: " << _saturacionOxigeno << "%" << std::endl;
    }


    void SignosDiarios::mostrarTabla(){
        dibujarTabla(44,4,83,21,2);
        rlutil::locate(58, 5);
        std::cout<<"SIGNOS DIARIOS" << std::endl;
        rlutil::locate(49, 9);
        std::cout << "FECHA DE TOMA: ";
        rlutil::locate(64, 9);
        _fechaToma.mostrar();
        rlutil::locate(49, 11);
        std::cout << "TENSION ARTERIAL: ";
        rlutil::locate(67, 11);
        std::cout<<_tensionArterial;
        rlutil::locate(49, 13);
        std::cout << "Frecuencia Respiratoria: " ;
        rlutil::locate(73, 13);
        std::cout<<_frecuenciaRespiratoria;
        rlutil::locate(49, 15);
        std::cout << "Frecuencia Cardiaca:";
        rlutil::locate(69, 15);
        std::cout<<_frecuenciaCardiaca;
        rlutil::locate(49, 17);
        std::cout << "Temperatura:";
        rlutil::locate(62, 17);
        std::cout<<_temperatura << " °C" << std::endl;
        rlutil::locate(49, 19);
        std::cout << "Saturacion de Oxigeno:";
        rlutil::locate(72, 19);
        std::cout<<_saturacionOxigeno << " %" << std::endl;

    }
