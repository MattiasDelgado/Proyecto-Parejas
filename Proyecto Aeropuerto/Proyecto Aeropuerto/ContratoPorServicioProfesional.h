#pragma once
#include "ContratoBase.h"

class ContratoPorServicioProfesional :public ContratoBase {
private:
	Fecha* fechaIngreso;
	Fecha* fechaFinalizacion;
	string TipoDeServicio;
	string HorarioLaboral;
public:
	ContratoPorServicioProfesional(string cod, string Dp, double s,
		Fecha& fI, Fecha& fF, string TS, string HL);
	virtual ~ContratoPorServicioProfesional();
	Fecha* getFechaIngreso();
	Fecha* getFechaFinalizacion();
	string getTipoDeServicio();
	string getHorarioLaboral();
	void setHorarioLaboral(string HL);
	void setFechaIngreso(Fecha& fI);
	void setTipoDeServicio(string TS);
	void setFechaFinalizacion(Fecha& fF);
	string toString();

};