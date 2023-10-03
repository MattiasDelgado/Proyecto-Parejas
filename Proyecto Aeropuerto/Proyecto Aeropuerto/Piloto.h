#pragma once
#include "Tripulacion.h"
class Piloto : public Tripulacion {
private:
	string AnniosExperiencia;
public:
	Piloto(string nom, string ced, int ed, string ocu, ContratoBase& conPtr, string lab, string AE);
	~Piloto();
	string getAnniosExperiencia();
	void setAnniosExperiencia(string AE);
	string toString();
};