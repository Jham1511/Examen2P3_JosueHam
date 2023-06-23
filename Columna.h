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
    void agregarValores (T valores) {
        datosColumna.push_back(valores);
    }

    ~Columna() {
        for (int i = 0; i < datosColumna.size(); i++)
        {
           // delete datosColumna[i];
        }
    }


    vector<T>& getVector() {
        return datosColumna;
    }
};