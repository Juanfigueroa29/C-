#include <iostream>
using namespace std;
float i,positivos,negativos,a;

int main ()
{
	cout << "Ingrese 25 numeros y el algoritmo determinara cuantos son positivos y cuantos negativos" <<endl;
	positivos=0;
	negativos=0;

   for (a=1 ; a<=25 ; a++)
   {
     cout << "Ingrese numero" <<endl;
     cin >> i;
     if(i>0)
     {
      positivos=positivos +1;
     }
     if(i<0)
     {
      negativos=negativos+1;
      }                                
   }

  cout << "NUMEROS POSITIVOS:  " <<positivos<<endl;
  cout << "NUMEROS NEGATIVOS: " <<negativos<<endl;
  system("pause");
  return 0;
}
