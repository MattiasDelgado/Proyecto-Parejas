#pragma once
#include "ContratoBase.h"
class ContratoDePlazoFijo : public ContratoBase {
private:
	Fecha* FechaIngreso;
	Fecha* FechaCulminacion;
public:
	ContratoDePlazoFijo(string cod, string Dp, double s, Fecha& FI, Fecha& FC);
	virtual ~ContratoDePlazoFijo();
	Fecha* getFFechaIngreso();
	Fecha* getFechaCulminacion();
	void setFFechaIngreso(Fecha& FI);
	void setFechaCulminacion(Fecha& FC);
	 string toString();
};