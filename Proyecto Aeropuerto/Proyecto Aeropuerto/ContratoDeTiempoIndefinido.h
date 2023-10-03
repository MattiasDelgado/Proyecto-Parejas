#pragma once
#include "Plaza.h"
#include "ContratoBase.h"
class ContratoPorTiempoIndefinido : public ContratoBase {
private:
	Fecha* FechaDeInicio;
	Fecha* FechaDeFinalizacion;
	Plaza* PlazaCorrespondiente;
public:
	ContratoPorTiempoIndefinido(string cod, string Dp, double s, Fecha& FII, Fecha& fFF, Plaza& plaptr);
	virtual ~ContratoPorTiempoIndefinido();
	Fecha* getFechaDeInicio();
	Fecha* getFechaDeFinalizacion();
	void setFechaDeFinalizacion(Fecha& fFF);
	void setFechaDeInicio(Fecha& FII);
	void setPlazaCorrespondiente(Plaza& ptr);
	Plaza* getPlazaCorrespondiente();
	string toString();
};