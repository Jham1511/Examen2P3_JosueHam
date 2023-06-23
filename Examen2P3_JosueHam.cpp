#include <iostream>
#include <string>
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