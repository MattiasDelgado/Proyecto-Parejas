#include "Copiloto.h"
Copiloto::Copiloto(string nom, string ced, int ed, string ocu, ContratoBase& conPtr, string lab, string tel):
Tripulacion(nom, ced, ed, ocu, conPtr, lab),Telefono(tel){}
Copiloto::~Copiloto(){}
string Copiloto::getTelefono() { return Telefono; }
void Copiloto::setTelefono(string tel) { Telefono = tel; }
string Copiloto::toString() {
	stringstream s;
	s << Tripulacion::toString() << endl;
	s << "Telefono: " << Telefono << endl;
	return s.str();

}