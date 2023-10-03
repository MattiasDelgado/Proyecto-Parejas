#pragma once
#include "Empleado.h"
class Planta : public Empleado {
protected:
	string Departamento;
public:
	
	Planta(string nom, string ced, int ed, string ocu, ContratoBase& conPtr, string dep);
	string getDepartamento();
	void setDepartamento(string dep);
	virtual string toString();
};