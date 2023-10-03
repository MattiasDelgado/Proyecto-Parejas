#include "Planta.h"
Planta::Planta(string nom, string ced, int ed, string ocu, ContratoBase& conPtr, string dep)
:Empleado(nom,ced,ed,ocu,conPtr),Departamento(dep){}
string Planta::getDepartamento() { return Departamento; }
void Planta::setDepartamento(string dep) { Departamento = dep; }
string Planta::toString() {
	stringstream s;
	s << Empleado::toString() << endl
		<< "Departamento: " << Departamento << endl;
	return s.str();
}