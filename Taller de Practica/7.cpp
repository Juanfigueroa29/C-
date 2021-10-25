#include <iostream>
using namespace std;
float a,b,suma;

int main ()
{
	cout << "Algoritmo que indique si la suma de dos valores es positiva, negativa o cero." <<endl;

   
     cout << "Ingrese primer valor: " <<endl;
     cin >> a;
     cout << "Ingrese segundo valor: " <<endl;
     cin >> b;
     
     suma = a+b;
     if(suma>0)
     {
 		cout << "LA SUMA ES POSITIVA: " <<suma<<endl;
     }
     if(suma<0)
     {
    cout << "LA SUMA ES NEGATIVA: " <<suma<<endl;
      }
	  if(suma==0)
     {
    cout << "LA SUMA ES IGUAL A CERO: " <<suma<<endl;
      }                                                
   

  system("pause");
  return 0;
}
