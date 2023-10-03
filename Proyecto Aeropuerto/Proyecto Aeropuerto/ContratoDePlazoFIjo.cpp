#include "ContratoDePlazoFijo.h"
ContratoDePlazoFijo::ContratoDePlazoFijo(string cod, string Dp, double s, Fecha& FI, Fecha& FC)
:ContratoBase(cod, Dp, s),FechaIngreso((Fecha*)& FI),FechaCulminacion((Fecha*)&FC)
{}
ContratoDePlazoFijo::~ContratoDePlazoFijo(){}
Fecha* ContratoDePlazoFijo::getFFechaIngreso() { return FechaIngreso; }
Fecha* ContratoDePlazoFijo::getFechaCulminacion() { return FechaCulminacion; }
void ContratoDePlazoFijo::setFFechaIngreso(Fecha& FI) { FechaIngreso= (Fecha*)&FI; }
void ContratoDePlazoFijo::setFechaCulminacion(Fecha& FC) { FechaCulminacion = (Fecha*)&FC; }
string ContratoDePlazoFijo::toString() {
	stringstream s;
	s << ContratoBase::toString()<< endl
		<< "Fecha de ingreso: " << FechaIngreso->toString() << endl
		<< "Fecha de culminacion: " << FechaCulminacion->toString() << endl;
	return s.str();
}
