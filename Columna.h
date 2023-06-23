#pragma once
#include <vector>
#include <iostream>
#include <string>
template <class T>
class Columna {
private:
	vector<T> datosColumna;
public:
	Columna();
	~Columna();
	T getVector();
};