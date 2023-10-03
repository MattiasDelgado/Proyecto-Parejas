#pragma once
#include<iostream>
#include<sstream>
#include "Fecha.h"
using namespace std;
class Aeronaves {
protected:
	Fecha* FechaCreacion;
	double DistanciaRecorrida;
public:
	Aeronaves();
	Aeronaves(Fecha& fechaC, double DR);
	Fecha* getFechaCreacion() { return FechaCreacion; }
	double getDistanciaRecorrida() { return DistanciaRecorrida; }
	void setFechaCreacion(Fecha& FechaC);
	void setDistanciaRecorrida(double DR);
	string toString();
};