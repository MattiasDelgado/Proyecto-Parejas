#include "Empleado.h"
Empleado::Empleado():Nombre(""),Cedula(""),Edad(0),Ocupacion(""),Contrato(NULL){}
Empleado::Empleado(string nom, string ced, int ed, string ocu, ContratoBase& conPtr) 
:Nombre(nom), Cedula(ced), Edad(ed), Ocupacion(ocu), Contrato(NULL) {}
Empleado::~Empleado(){}
string Empleado::getNombre() { return Nombre; }
string Empleado::getCedula() { return Cedula; }
string Empleado::getOcupacion() { return Ocupacion; }
int Empleado::getEdad() { return Edad; }
ContratoBase* Empleado::getContrato(){return Contrato;}
void Empleado::setNombre(string nom) { Nombre = nom; }
void Empleado::setEdad(int ed) { Edad = ed; }
void Empleado::setOcupacion(string ocu) { Ocupacion = ocu; }
void Empleado::setContrato(ContratoBase& conPtr) {
	if (Contrato != NULL) {
		delete Contrato;
	}
	Contrato = (ContratoBase*) &conPtr;
}
string Empleado::toString() {
	stringstream s;
	s << "-----INFORMACION DEL EMPLEADO-----" << endl
		<< "Nombre: " << Nombre << endl
		<< "Cedula: " << Cedula << endl
		<< "Ocupacion: " << Ocupacion << endl
		<< Contrato->toString() << endl;
	return s.str();
}
