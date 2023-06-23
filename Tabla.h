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
	Columna<string>* getApellidos() {
		return apellidos;
	}

	Columna<int>* getEdades() {
		return edades;
	}

	Columna<float>* getExamenF() {
		return notasExamenF;
	}
	Columna<float>* getExamenP() {
		return notasExamenP;
	}
	Columna<float>* getAcumulativo() {
		return notasAcumulativo;
	}
	void setNombres(Columna<string>* nombres) {
		this->nombres = nombres;
	}
	void setApellidos(Columna<string>* apellidos) {
		this->apellidos = apellidos;
	}

	void setEdades(Columna<int>* edad) {
		this->edades = edad;
	}

	void setExamenP(Columna<float>* examenP) {
		this->notasExamenP = examenP;
	}
	void setExamenF(Columna<float>* examenF) {
		this->notasExamenF = examenF;
	}
	void setAcumulativo(Columna<float>* acumulativo) {
		this->notasAcumulativo = acumulativo;
	}
};