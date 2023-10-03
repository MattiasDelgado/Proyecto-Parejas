#pragma once
#include "Planta.h"
class Miscelaneo : public Planta {
private:
	string GradoEscolaridad;
public:
	~Miscelaneo();
	Miscelaneo(string nom, string ced, int ed, string ocu, 
	ContratoBase& conPtr, string dep, string GE);
	string getGradoEscolaridad();
	void setGradoEscolaridad(string GE);
	string toString();
};