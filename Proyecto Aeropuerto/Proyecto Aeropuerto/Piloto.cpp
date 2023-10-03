#include "Piloto.h"
Piloto::Piloto(string nom, string ced, int ed, string ocu, ContratoBase& conPtr, string lab, string AE):
Tripulacion(nom, ced, ed, ocu, conPtr, lab),AnniosExperiencia(AE){}
Piloto::~Piloto(){}
string Piloto::getAnniosExperiencia() { return AnniosExperiencia; }
void Piloto::setAnniosExperiencia(string AE) { AnniosExperiencia = AE; }
string Piloto::toString() {
	stringstream s;
	s << Tripulacion::toString() << endl;
	s << "Anios de experiencia: " << AnniosExperiencia << endl;
	return s.str();
}