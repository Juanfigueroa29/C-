#include <iostream>
using namespace std;
int main()
{	
	string Nombre;
	int HorasOrdinarias, HorasExtras ;
	float SalarioBasicoHora, ReteFuente, NetoPagar, SalarioBruto;	
	cout<<"\n Ingrese nombre: ";
	cin>>Nombre;
	cout<<"\n Ingrese valor de su hora de trabajo: ";
	cin>>SalarioBasicoHora;
	cout<<"\n Ingrese numero de horas ordinarias trabajadas: ";
	cin>>HorasOrdinarias;
	cout<<"\n Ingrese numero de horas extras trabajadas: ";
	cin>>HorasExtras;
	ReteFuente = (SalarioBasicoHora*HorasOrdinarias+SalarioBasicoHora*1.4*HorasExtras)*0.1;
	SalarioBruto = (SalarioBasicoHora*HorasOrdinarias)+(SalarioBasicoHora*1.4*HorasExtras);
	NetoPagar = SalarioBruto-ReteFuente;
	cout<<"\n Nombre: "<<Nombre<<endl;;
	cout<<"\n Retencion de fuente: "<<ReteFuente<<endl;;
	cout<<"\n Salario neto a pagar: "<<NetoPagar<<endl;;


	
	}
