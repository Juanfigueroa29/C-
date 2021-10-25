#include <iostream>
using namespace std;
int primero,i,segundo,total,numero,a,multiplicacion;

int main ()
{

     cout << "Ingrese cantidad de numeros a ingresar" <<endl;
     cin >> i;
     total= i-2;
      
	primero = 0;
	segundo = 0;                       
   
    cout << "Ingrese numero" <<endl;
     cin >> primero;
    cout << "Ingrese numero" <<endl;
     cin >> segundo;
    
	
	if(primero == segundo ){
    	segundo = 0;
    }
    
   for (a=1 ; a<=total ; a++)
   {
     cout << "Ingrese numero" <<endl;
     cin >> numero;
     
    if(numero < primero && numero > segundo ){
    	primero = numero;
    	
    }
    if(numero < segundo && numero > primero){
         segundo = numero;	
                                   
   }

	if(numero > segundo && numero > primero){
         if (primero>segundo)	{
         	segundo = numero;
          }  
		  else if (segundo>primero)	{
         	primero = numero;
          }                          
   }
   
   
}

multiplicacion= primero*segundo;
  cout << "NUMEROS MAYORES: " <<primero<<" Y " <<segundo<<endl;
  cout << "MULTIPLICACION: " <<multiplicacion<<endl;

  system("pause");
  
  return 0;
}
