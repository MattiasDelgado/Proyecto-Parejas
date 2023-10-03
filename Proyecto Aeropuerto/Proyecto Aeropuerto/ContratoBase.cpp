#include "ContratoBase.h"
ContratoBase::ContratoBase():codigo(""), DescripcionPuesto(""),
salario(0.0){}
ContratoBase::ContratoBase(string cod,string DP,double sal) :codigo(cod), DescripcionPuesto(DP),
salario(sal) {}
ContratoBase::~ContratoBase(){}
string ContratoBase::getCodigo() { return codigo; }
string ContratoBase::getDescripcionPuesto() { return DescripcionPuesto; }
double ContratoBase::getSalario() { return salario; }
void ContratoBase::setCodigo(string cod) { codigo=cod; }
void ContratoBase::setDescripcionPuesto(string DP) { DescripcionPuesto =DP; }
void ContratoBase::setSalario(double sal) { salario=sal; }
string ContratoBase::toString() {
	stringstream s;
	s << "---------INFORMACION DEL CONTRATO---------" << endl
		<< "Codigo: " << codigo << endl
		<< "Puesto: " << DescripcionPuesto << endl
		<< "Salario: " << salario << endl;
	return s.str();
}






