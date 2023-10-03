#pragma once
#include<iostream>
#include<sstream>
#include"Fecha.h"
using namespace std;
class ContratoBase {
protected:
	string codigo;
	string DescripcionPuesto;
	double salario;
public:
	ContratoBase();
	ContratoBase(string cod,string DP,double sal);
	virtual ~ContratoBase();
	string getCodigo();
	string getDescripcionPuesto();
	double getSalario();
	void setCodigo(string cod);
	void setDescripcionPuesto(string DP);
	void setSalario(double sal);
	virtual string toString();

};