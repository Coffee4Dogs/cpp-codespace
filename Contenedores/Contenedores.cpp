#include <iostream>
#include <string>
#include <numeric>
#include <vector>
#include <map>
#include <stack>
#include <algorithm>

using namespace std;

int main() {

    // definir un arreglo con 6 numeros e inicializarlos
    int edades[6] = {24, 21, 20, 19, 18, 27};
	
	//recorrer el arreglo edades
    for (int i=0; i<= 5; i++) {
        cout << i << " " <<  edades[i] << endl;
    }
    
	// crear dos vectores
    vector<int> vEdades;
    vector<string> vNombres;

	// agregar 6 elementos a cada vector
	vEdades = {36, 25, 14, 30, 29, 21, 22};
	vNombres = {"Karina", "Lucas", "Mateo", "Pedro", "Matias", "Osman"};

	// ver el contenido del 3r y 4o elemento de los vectores 
	cout << "En el arreglo: " << edades[2] << " - " << edades[3] << endl;
	cout << "En el vector de Edades : " << vEdades[2] << " - " << vEdades[3] << endl;
	cout << "En el vector de Nombrees : " << vNombres[2] << " - " << vNombres[3] << endl;

	// ver el tama�o de los vectores
	cout << "Cantidad de elementos de vEdades: " << vEdades.size() << endl;
	cout << "Cantidad de elementos de vNombres: " << vNombres.size() << endl;

    // agregar nuevos elementos a los vectores
	vEdades.push_back(19);
	vEdades.push_back(26);
	vEdades.push_back(50);
	vNombres.push_back("Emilia");
 
	// ver el nuevo tama�o de los vectores
	cout << "Despues de ingresar elementos en los vectores" << endl;
	cout << "Cantidad de elementos de vEdades: " << vEdades.size() << endl;
	cout << "Cantidad de elementos de vNombres: " << vNombres.size() << endl;

 	// recorrer los vectores y ver el contenido
	cout << "Recorrer para vEdades" << endl;
	for (int i = 0; i < vEdades.size(); i++){
		cout << i << ": " << vEdades[i] << endl;
	} 

	cout << "Recorrer para vNombres" << endl;
	for (int i = 0; i < vNombres.size(); i++){
		cout << i << ": " << vNombres[i] << endl;
	} 	

	// sacar 3 elementos de un vector
	vEdades.pop_back();
	vEdades.pop_back();
	vEdades.pop_back();
	vNombres.pop_back();
 
	// recorrer el vector despues de haber sacado esos elementos
 	cout << "Recorrer para vEdades" << endl;
	for (int i = 0; i < vEdades.size(); i++){
		cout << i << ": " << vEdades[i] << endl;
	} 

	cout << "Recorrer para vNombres" << endl;
	for (int i = 0; i < vNombres.size(); i++){
		cout << i << ": " << vNombres[i] << endl;
	} 	

	// uso de algoritmo: ordenar un vector
	sort(vEdades.begin(), vEdades.end());
	sort(vNombres.begin(), vNombres.end());

 	cout << "Recorrer para vEdades" << endl;
	for (int i = 0; i < vEdades.size(); i++){
		cout << i << ": " << vEdades[i] << endl;
	} 

	cout << "Recorrer para vNombres" << endl;
	for (int i = 0; i < vNombres.size(); i++){
		cout << i << ": " << vNombres[i] << endl;
	} 

	cout << "******* fin Vectores ********" << endl;
	
    /* Mapa */
    cout << "Uso de Mapa " << endl;
    map<string, double> mNotas;
	map<bool, int> mPermisos;

	//verificar si el mapa esta vacio
	cout << "mNotas esta vacio: " << mNotas.empty() << endl;

	// insertar 4 pares de registros para el mapa1
	mNotas.insert(pair<string, double>("Ana", 95.2));
	mNotas.insert(pair<string, double>("Juan", 85.4));
	mNotas.insert(pair<string, double>("Mario", 59.9));
	mNotas.insert(pair<string, double>("Andres", 61.36));

	// insertar 2 pares de registros para el mapa2
	mPermisos.insert(pair<bool, int>(true, 150));
	mPermisos.insert(pair<bool, int>(0, 2000));

	cout << "mNotas esta vacio: " << mNotas.empty() << endl;

	// agregar un valor de manera directa 
	mNotas["Josefino"] = 88.7; 
     
	// ver el tama�o del mapa
	cout << "Cantidad de elementos de mNotas " << mNotas.size() << endl;
 
	// crear un iterador de mapa
    map<string, double>::iterator iterNotas;

	// ver el contenido del mapa
	cout << "Recorriendo mNotas " << endl;
	for (iterNotas = mNotas.begin(); iterNotas != mNotas.end(); iterNotas++ ){
		cout << (*iterNotas).first << " : " << (*iterNotas).second << endl;
	}

	// ver una de las notas del mapa    
	
	// cambiar un valor del mapa
 
	// ver nuevamente el contenido del mapa
 

	/* Pila */
	cout << "Uso de la pila" << endl;
    stack<int> sRegistros;
	
	// ingresar algunos elementos a la pila

	// ver el tama;o de la pila
    cout << "Tamano de la pila " << endl; 

	// acceder al 5o elemento de la pila
	
	// sacar 2 elementos de la pila
 
	// ver el nuevo tama;o de la pila
    cout << "Tamano de la pila despues de sacar " <<  endl; 

    return 0;
}
