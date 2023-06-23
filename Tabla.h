#pragma once
#include "Columna.h"
#include <iostream>
#include <string>
using namespace std;
class Tabla {
private:
	Columna<string>* nombres;
	Columna<string>* apellidos;
	Columna<int>* edades;
	Columna<float>* notasExamenP;
	Columna<float>* notasAcumulativo;
	Columna<float>* notasExamenF;

public:
    Tabla() {
        nombres = new Columna<string>();
        apellidos = new Columna<string>();
        edades = new Columna<int>();
        notasExamenP = new Columna<float>();
        notasAcumulativo = new Columna<float>();
        notasExamenF = new Columna<float>();
    }

	~Tabla() {
		delete[] nombres, apellidos, edades, notasAcumulativo, notasExamenF, notasExamenP;
	}
	Columna<string>* getNombres() {
		return nombres;
	}
	void setNombres(Columna<string>* nombres) {
		this->nombres = nombres;
	}
};