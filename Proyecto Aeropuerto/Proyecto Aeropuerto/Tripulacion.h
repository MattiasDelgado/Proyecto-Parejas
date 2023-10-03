#pragma once
#include "Empleado.h"
class Tripulacion : public Empleado {
protected:
	string Labor;
public:
	Tripulacion();
	Tripulacion(string nom, string ced, int ed, string ocu, ContratoBase& conPtr, string lab);
	virtual ~Tripulacion();
	string getLabor();
	void setLabor(string lab);
	virtual string toString();
};


//Falta asociar con Aeronaves