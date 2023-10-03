#include "Tripulacion.h"
Tripulacion::Tripulacion() :Labor(""){}
Tripulacion::Tripulacion(string nom,string ced,int ed,string ocu, ContratoBase& conPtr,string lab):
	Empleado(nom, ced, ed, ocu, conPtr),Labor(lab){}
Tripulacion::~Tripulacion(){}
string Tripulacion::getLabor() { return Labor; }
void Tripulacion::setLabor(string lab) { Labor = lab; }
string Tripulacion::toString() {
	stringstream s;
	s << Empleado::toString() << endl;
	s << "Labor: " << Labor << endl;
	return s.str();
}
