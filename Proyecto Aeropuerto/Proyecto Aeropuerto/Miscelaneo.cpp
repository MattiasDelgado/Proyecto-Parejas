#include "Miscelaneo.h"
Miscelaneo::Miscelaneo(string nom, string ced, int ed, string ocu,
ContratoBase& conPtr, string dep, string GE)
:Planta(nom,ced,ed,ocu,conPtr,dep), GradoEscolaridad(GE){}
Miscelaneo::~Miscelaneo(){}
string Miscelaneo::getGradoEscolaridad() { return GradoEscolaridad; }
void Miscelaneo::setGradoEscolaridad(string GE) { GradoEscolaridad = GE; }
string Miscelaneo::toString() {
	stringstream s;
	s << Planta::toString() << endl
		<< "Grado de escolaridad: " << GradoEscolaridad << endl;
	return s.str();
}