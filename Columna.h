#pragma once
#include <vector>
#include <iostream>
#include <string>
using namespace std;

template <class T>
class Columna {
private:
    vector<T> datosColumna;

public:
    ~Columna() {
        delete &datosColumna;
    }


    vector<T>& getVector() {
        return datosColumna;
    }

    void agregarValores(T valores) {
        datosColumna.push_back(valores);
    }
};