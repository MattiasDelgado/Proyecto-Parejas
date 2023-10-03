#include "Azafata.h"

Azafata::Azafata(string nom, string ced, int ed, string ocu, ContratoBase& conPtr, string lab,string na)
:Tripulacion(nom,ced,ed,ocu,conPtr,lab),Nacionalidad(na) {}
Azafata::~Azafata() {}
string Azafata::getNacionalidad() { return Nacionalidad; }
void Azafata::setNacionalidad(string na) { Nacionalidad = na; }
string Azafata::toString() {
	stringstream s;
	s << Tripulacion::toString() << endl;
	s << "Nacionalidad: " << Nacionalidad << endl;
	return s.str();
}
