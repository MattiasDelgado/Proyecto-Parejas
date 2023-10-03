#pragma once
#include "Tripulacion.h"
class Azafata : public Tripulacion {
private:
	string Nacionalidad;
public:
	
	Azafata(string nom, string ced, int ed, string ocu, ContratoBase& conPtr, string lab,string na);
	~Azafata();
	string getNacionalidad();
	void setNacionalidad(string na);
	string toString();
};