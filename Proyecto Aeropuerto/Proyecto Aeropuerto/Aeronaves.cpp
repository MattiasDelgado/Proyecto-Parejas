#include "Aeronaves.h"
Aeronaves::Aeronaves():FechaCreacion(NULL),DistanciaRecorrida(0.0){}
Aeronaves::Aeronaves(Fecha& FechaC,double DR):FechaCreacion((Fecha*)& FechaC),DistanciaRecorrida(DR){}
Fecha* Aeronaves::getFechaCreacion() { return FechaCreacion; }
double Aeronaves::getDistanciaRecorrida() { return DistanciaRecorrida; }
void Aeronaves::setDistanciaRecorrida(double DR) { DistanciaRecorrida = DR; }
void Aeronaves::setFechaCreacion(Fecha& FechaC) { FechaCreacion = (Fecha*)&FechaC; }
string Aeronaves::toString() {
	stringstream s;
	s << "-----INFORMACION DE LA AERONAVE-----" << endl
		<< "Fecha de creacion: " << FechaCreacion->toString() << endl
		<< "Distancia recorrida: " << DistanciaRecorrida << endl;
	return s.str();
}