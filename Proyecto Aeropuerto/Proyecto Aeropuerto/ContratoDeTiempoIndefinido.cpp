#include "ContratoDeTiempoIndefinido.h"

ContratoPorTiempoIndefinido::ContratoPorTiempoIndefinido(string cod, string Dp, double s, Fecha&  FII,
	Fecha&  fFF, Plaza& plaptr) :ContratoBase(cod, Dp, s), FechaDeInicio((Fecha*)& FII), FechaDeFinalizacion((Fecha*)& fFF),
	PlazaCorrespondiente((Plaza*)&plaptr) {}
ContratoPorTiempoIndefinido::~ContratoPorTiempoIndefinido(){}
Fecha* ContratoPorTiempoIndefinido::getFechaDeInicio() { return FechaDeInicio; }
Fecha* ContratoPorTiempoIndefinido::getFechaDeFinalizacion() { return FechaDeFinalizacion; }
Plaza* ContratoPorTiempoIndefinido::getPlazaCorrespondiente() { return PlazaCorrespondiente; }
void  ContratoPorTiempoIndefinido::setFechaDeInicio(Fecha& FII) { FechaDeInicio = (Fecha*)& FII; }
void  ContratoPorTiempoIndefinido::setFechaDeFinalizacion(Fecha& fFF) { FechaDeFinalizacion = (Fecha*)&fFF; }
void  ContratoPorTiempoIndefinido::setPlazaCorrespondiente(Plaza& plaptr) {
	if (PlazaCorrespondiente != NULL) {
		delete PlazaCorrespondiente;
	}
	PlazaCorrespondiente = (Plaza*)& plaptr;
}

string ContratoPorTiempoIndefinido::toString() {
	stringstream s;
	s << ContratoBase::toString() << endl
		<< "Fecha de inicio: " << FechaDeInicio->toString() << endl
		<< "Fecha de Finalizacion: " << FechaDeFinalizacion->toString() << endl
		<< PlazaCorrespondiente->toString() << endl;

		return s.str();
}