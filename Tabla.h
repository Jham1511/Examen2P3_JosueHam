#pragma once
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
	Tabla();
	~Tabla() {
		delete[] nombres, apellidos, edades, notasAcumulativo, notasExamenF, notasExamenP;
	}
};