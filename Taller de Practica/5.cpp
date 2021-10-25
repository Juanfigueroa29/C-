#include <iostream>
using namespace std;
int main() {
float n,p,po;
	cout << "Ingrese una cantidad: " <<endl;
     cin >> n;
     cout << "Ingrese porcentaje que desea obtener: " <<endl;
     cin >> p;
     
     po = n*(((float)p)/ ((float)100));
     cout << "LA CANTIDAD ES: "<<n <<endl;
     cout << "EL PORCENTAJE ES: "<<po <<endl;
  }   
