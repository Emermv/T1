
#include <iostream>
#include <fstream>
using namespace std;

class Persona{
	private:
	string codigo,nombre,apellidos,dni,genero;
	int edad;

	public:
	Persona(string codigo,string nombre,string apellidos,string genero,int edad);
    string getCodigo();
};
Persona::Persona(string codigo,string nombre,string apellidos,string genero,int edad){
	this->codigo=codigo;
	this->nombre=nombre;
	this->apellidos=apellidos;
	this->genero=genero;
	this->edad=edad;
}
string Persona::getCodigo(){
	return this->codigo;
}
/*************************************************************Struct *******************/
struct Arbol{
	Persona p;
	Arbol izquierda,derecha;
};
/******************************************************************************************/
string  readFile(string file){
	string cadena;
	ifstream fe(file);
	fe.getline(cadena, 128);
}
int main() {

	return 0;
}
