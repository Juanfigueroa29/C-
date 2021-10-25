
#include <iostream>
using namespace std;
int main() {
int divisor = 1, divisores = 0, num = 0;
cout<<"Ingrese numero: ";
cin>>num;
do{
if(num % divisor == 0){
divisores++;
}
divisor++;
}while(divisor <= num);
if(divisores == 2){
cout<<"n-> El numero "<<num<<" es PRIMO.";
}else{
cout<<"n-> El numero "<<num<<" NO es PRIMO.";
}
return 0;
}

