#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
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
	while (opcion!=5)
	{
		switch (opcion) {
		case 1: {
			string linea;
			fstream archivoTexto;
			archivoTexto.open("RegistrosUNITEC.txt");
			while (!archivoTexto.eof())
			{
				while (getline(archivoTexto,linea))
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
				}
			}

			break;
		}
		case 2: {

			break;
		}
		case 3: {

			break;
		}
		case 4: {

			break;
		}
		default:
			cout << "..." << endl;
			printf("\n");
		}//Fin del switch
		opcion = menu();
	}//Fin del while
}