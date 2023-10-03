#pragma once
#include "ContratoBase.h"
class Empleado {
protected:
	string Nombre;
	string Cedula;
	int Edad;
	string Ocupacion;
	ContratoBase* Contrato;
public:
	Empleado();
	Empleado(string nom, string ced, int ed, string ocu, ContratoBase& conPtr);
	virtual ~Empleado();
	string getNombre();
	string getCedula();
	int getEdad();
	string getOcupacion();
	ContratoBase* getContrato();
	void setNombre(string nom);
	void setEdad(int ed);
	void setOcupacion(string ocu);
	void setContrato(ContratoBase& conPtr);
	virtual string toString();
};