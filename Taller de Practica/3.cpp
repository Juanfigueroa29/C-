#include <iostream>
using namespace std;
int horas,valor,pago,pago_ex,pago_ex2,sueldo,horas_ex,horas_ex2,total;

int main ()
{
	 cout << "Ingrese numero de horas trabajadas: " <<endl;
     cin >> horas;
     cout << "Ingrese valor por hora: " <<endl;
     cin >> sueldo;
     
     pago=0;
     if (horas<= 40){
     	pago = horas*sueldo;
     	cout << "SUELDO TOTAL: " <<pago <<endl;
     	
     	}
    if(horas> 40 && horas <= 48){
    	horas_ex= horas-40;
    	pago_ex= horas_ex*(sueldo*2);
     	pago = (40*sueldo)+pago_ex;
     	cout << "SUELDO TOTAL: " <<pago <<endl;
     }	
     
     
     if(horas> 48 ){
  
    	pago_ex= 8*(sueldo*2);
    	horas_ex2 =horas-48;
    	pago_ex2= horas_ex2*(sueldo*3);
    	pago = (40*sueldo)+pago_ex+pago_ex2;
    	
     	cout << "SUELDO TOTAL: " <<pago <<endl;
     }
     
     	
    
	
	
	}
