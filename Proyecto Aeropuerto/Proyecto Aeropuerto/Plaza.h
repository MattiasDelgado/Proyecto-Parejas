#pragma once
#include<iostream>
#include<sstream>
using namespace std;
class Plaza {
private:
	string NombrePuesto;
	string CodigoPlaza;
public:
	Plaza();
	Plaza(string np, string codP);
	virtual ~Plaza();
	void setNombrePuesto(string np);
	void setCodigoPlaza(string codP);
	string getNombrePuesto();
	string getCodigoPlaza();
	string toString();
};