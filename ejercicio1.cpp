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
	/* vector: es como un chicle, se puede estirar y adaptar segun la magnitud de datos
	   <Empleado>: se guardará en el casillero de esa lista que contendrá un struct Empleado nom, se y su
		listaEmpleados: Nombre de la varaible de la lista
		(cantidad): tamaño. */
	
	vector<Empleado> listaEmpleados(cantidad);
	
	for (int i = 0 ;i < cantidad; i++){//Te saltarías por completo al primer empleado
		cout << "\n---Datos del Empleado " << i + 1 << " --- " << endl;
		
		cout << "Nombres: ";
		cin.ignore();
		getline(cin, listaEmpleados[i].nombres);//nombres: Marco
		cout << "Sexo (M/F): ";
        cin >> listaEmpleados[i].sexo;
        
        cout << "Sueldo: ";
        cin >> listaEmpleados[i].sueldo;
	}
	
	int indiceMayor = 0;
	int indiceMenor = 0;
	
	for (int i = 1; i < cantidad; i++){
		
		if (listraEmpleados[i].sueldo > listra )
	}
}
