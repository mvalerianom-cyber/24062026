#include <iostream>
#include <string>
#include <vector> //salvavidas [?]
using namespace std;

struct Empleado {
	string nombres;
	char sexo;
	double sueldo;
};

int main(){
	int cantidad;
	
	cout << "Ingrese la cantida de trabajadores a registrar: ";
	cin >> cantidad;
	
	vector<Empleado> listaEmpleados(cantidad);
	
	for (int i = 0 ;i < cantidad; i++){//Te saltarías por completo al primer empleado
		cout << "\n---Datos del Empleado " << i + 1 << " --- " << endl;
		cout << "Nombres: ";
		cin.ignore();
		getline(cin, listaEmpleados[i].nombres);
	}
	
}
