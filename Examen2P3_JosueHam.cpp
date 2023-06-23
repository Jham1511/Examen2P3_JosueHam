#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include "Columna.h"
#include "Tabla.h"
using namespace std;

int menu() {
	cout << "\nMenu del Programa" << endl
		<< "1 -> Cargar archivo de Registro" << endl
		<< "2 -> Imprimir Tabla" << endl
		<< "3 -> Fusion de columnas" << endl
		<< "4 -> Guarda fusion de columnas" << endl
		<< "5 -> Salir" << endl
		<< "Ingrese la opcion que desea: " << endl;
	int numero;
	cin >> numero;
	return numero;
}

int main()
{
    int opcion = menu();
	bool leyoArchivo = false;
	//Tabla
	Tabla* tab = new Tabla;
	//Columnas opcion 1 y 2
	Columna<string>* nombreCol = new Columna<string>;
	Columna<string>* apellidoCol = new Columna<string>;
	Columna<int>* edadCol = new Columna<int>;
	Columna<float>* notaExamenPCol = new Columna<float>;
	Columna<float>* notaAcumulativoCol = new Columna<float>;
	Columna<float>* notaExamenFCol = new Columna<float>;

	//Opcion 3
	Columna<string>* nombresCompletos = new Columna<string>;
	Columna<float>* notaFinal =  new Columna<float>;
	while (opcion!=5)
	{
		switch (opcion) {
		case 1: {
			leyoArchivo = true;
			string linea;
			fstream archivoTexto;
			archivoTexto.open("RegistrosUNITEC.txt");
			while (!archivoTexto.eof())
			{
				while (getline(archivoTexto, linea))
				{
					string nombre, apellido, strEdad, strNotaExamenP, strNotaAcumulativo, strNotaExamenF;
					stringstream stream(linea);

					

					getline(stream, nombre, ',');
					getline(stream, apellido, ',');
					getline(stream, strEdad, ',');
					getline(stream, strNotaExamenP, ',');
					getline(stream, strNotaAcumulativo, ',');
					getline(stream, strNotaExamenF, ',');

					int edad = stoi(strEdad);
					float notaExamenP = stoi(strNotaExamenP);
					float notaAcumulativo = stoi(strNotaAcumulativo);
					float notaExamenF = stoi(strNotaExamenF);

					nombreCol->agregarValores(nombre);
					apellidoCol->agregarValores(apellido);
					edadCol->agregarValores(edad);
					notaExamenPCol->agregarValores(notaExamenP);
					notaAcumulativoCol->agregarValores(notaAcumulativo);
					notaExamenFCol->agregarValores(notaExamenF);

					
				}
			}
			printf("\n");
			cout << "Datos cargados y guardados correctamente" << endl;
			break;
		}
		case 2: {
			if (leyoArchivo)
			{
				tab->setNombres(nombreCol);
				tab->setApellidos(apellidoCol);
				tab->setEdades(edadCol);
				tab->setExamenP(notaExamenPCol);
				tab->setExamenF(notaExamenFCol);
				tab->setAcumulativo(notaAcumulativoCol);

				for (int i = 0; i < nombreCol->getVector().size(); i++)
				{
					printf("\n");
					cout << "Nombre: " << tab->getNombres()->getVector()[i] << endl
						 << "Apellido: " << tab->getApellidos()->getVector()[i] << endl
						 << "Edad: " << tab->getEdades()->getVector()[i] << endl
					 	 << "Nota Examen P: " << tab->getExamenP()->getVector()[i] << endl
						 << "Nota Acumulativo: " << tab->getAcumulativo()->getVector()[i] << endl
						 << "Nota Examen F: " << tab->getExamenF()->getVector()[i] << endl;
					printf("\n");
				}

			}
			else {
				cout << "No existe la tabla, abra el archivo de registros”" << endl;
			}
			break;
		}
		case 3: {
			if (leyoArchivo)
			{
				

				for (int i = 0; i < nombreCol->getVector().size(); i++)
				{
					printf("\n");
					nombresCompletos->agregarValores(nombreCol->getVector()[i] + " " + apellidoCol->getVector()[i]);
					cout << "Nombre Completo: " << nombresCompletos->getVector()[i] << endl;
					cout << "Edad: " << edadCol->getVector()[i] << endl;
					notaFinal->agregarValores(notaExamenFCol->getVector()[i] + notaExamenPCol->getVector()[i] + notaAcumulativoCol->getVector()[i]);
					cout << "Nota Final: " << notaFinal->getVector()[i] << endl;
					printf("\n");
				}
			}
			else {
				cout << "Se necesita leer el archivo antes de fusion de columnas" << endl;
			}
			break;
		}
		case 4: {
			if (leyoArchivo)
			{
				fstream archivo("RegistrosFusionados.txt", ios::in);
				while (!archivo.eof())
				{

				}
			}
			else {
				cout << "Se necesita leer el archivo antes de guardar fusion de columnas" << endl;
			}
			break;
		}
		default:
			nombreCol->~Columna();
			tab->~Tabla();
			leyoArchivo = false;
			cout << "..." << endl;
			cout << "\n";
		}//Fin del switch
		opcion = menu();
	}//Fin del while
}