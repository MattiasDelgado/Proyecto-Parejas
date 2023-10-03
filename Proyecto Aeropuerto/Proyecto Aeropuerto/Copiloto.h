#pragma once
#include "Tripulacion.h"
class Copiloto : public Tripulacion {
private:
	string Telefono;
public:
	Copiloto(string nom, string ced, int ed, string ocu, ContratoBase& conPtr, string lab, string tel);
	~Copiloto();
	string getTelefono();
	void setTelefono(string tel);
	string toString();
};