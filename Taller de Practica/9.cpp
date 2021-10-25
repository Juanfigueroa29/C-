#include <iostream>
using namespace std;
float a,b,suma;

int main ()
{
	cout << "Programa que solicite la carga de un número entre 0 y 999, y muestre un mensaje de cuántos dígitos tiene el mismo" <<endl;

   
     cout << "Ingrese  valor: " <<endl;
     cin >> a;
 while(a < 1000 && a>0 )
{
   while(a!=0) {
  	if(a<10 && a>0)
     {
 		cout << "EL NUMERO " <<a<<" TIENE UN DIGITO" <<endl;
     }
     if(a<100 && a>=10)
     {
 		cout << "EL NUMERO " <<a<<" TIENE DOS DIGITOS" <<endl;
     }
	  if(a<1000&& a>=100)
     {
 		cout << "EL NUMERO " <<a<<" TIENE TRES DIGITOS" <<endl;
     }   
	}
	cout << "FIN DEL PROGRAMA" <<endl;   
}   
cout << "FIN DEL PROGRAMA (numero fuera del rango)" <<endl;                                               
  system("pause");
  
}
