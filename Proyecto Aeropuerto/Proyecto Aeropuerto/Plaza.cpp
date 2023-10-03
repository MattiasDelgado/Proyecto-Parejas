#include "Plaza.h"
Plaza::Plaza() :NombrePuesto(""), CodigoPlaza(""){}
Plaza::Plaza(string np,string codP):NombrePuesto(np),
CodigoPlaza(codP){}
Plaza:: ~Plaza(){}
void Plaza::setCodigoPlaza(string codP) { CodigoPlaza = codP; }
void Plaza::setNombrePuesto(string np) { NombrePuesto = np; }
string Plaza::getCodigoPlaza() { return CodigoPlaza; }
string Plaza::getNombrePuesto() { return NombrePuesto; }
string Plaza::toString() {
	stringstream s;
	s << "Informacion de la plaza asignada: " << endl
	 << "Nombre del puesto: " << NombrePuesto << endl
		<< "Codigo de la plaza: " << CodigoPlaza << endl;
	return s.str();
}
