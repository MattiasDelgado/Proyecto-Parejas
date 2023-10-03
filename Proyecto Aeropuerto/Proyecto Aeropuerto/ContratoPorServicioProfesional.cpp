#include "ContratoPorServicioProfesional.h"
ContratoPorServicioProfesional::ContratoPorServicioProfesional(string cod, string Dp, double s,
	Fecha& fI, Fecha& fF, string TS, string HL):ContratoBase(cod,Dp,s),fechaIngreso((Fecha*)& fI),
	fechaFinalizacion((Fecha*)& fF),
	TipoDeServicio(TS),HorarioLaboral(HL)
{}

ContratoPorServicioProfesional::~ContratoPorServicioProfesional(){}

Fecha* ContratoPorServicioProfesional::getFechaIngreso() { return fechaIngreso; }
Fecha* ContratoPorServicioProfesional::getFechaFinalizacion() { return fechaFinalizacion; }
string ContratoPorServicioProfesional::getTipoDeServicio() { return TipoDeServicio; }
string ContratoPorServicioProfesional::getHorarioLaboral() { return HorarioLaboral; }
void ContratoPorServicioProfesional::setHorarioLaboral(string HL) { HorarioLaboral = HL; }
void ContratoPorServicioProfesional::setTipoDeServicio(string TS) { TipoDeServicio = TS; }
void ContratoPorServicioProfesional::setFechaFinalizacion(Fecha& fF) { fechaFinalizacion = (Fecha*)&fF; }
void ContratoPorServicioProfesional::setFechaIngreso(Fecha& fI) {fechaIngreso = (Fecha*)&fI;}
string ContratoPorServicioProfesional::toString() {
	stringstream s;
	s << ContratoBase::toString() << endl;
	s << "Horario laboral: " << HorarioLaboral << endl
		<< "Tipo de servicio: " << TipoDeServicio << endl
		<< "Fecha de Ingreso: " << fechaIngreso->toString() << endl
		<< "Fecha de Finalizacion: " << fechaFinalizacion->toString() << endl;
	return s.str();
}





