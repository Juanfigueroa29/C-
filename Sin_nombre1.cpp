#include <stdlib.h>
#include <iostream>

using namespace std;


int main (int argc, char *argv[])
{
	int tabla[97];
	int suma[0];
	int tabla2[147];
	int n=4;
	int j=100;

	for (int i=0; i<97; i++){
	tabla[i] = n++;
 	cout << tabla[i] << endl;
	}
	cout <<"TABLA 2" << endl;
	for (int i=0; i<147; i++){
	
	tabla2[i] = j++;
	
 	cout << tabla2[i] << endl;
	}
	cout <<"SUMA IMPAR" << endl;
	for (int i=0; i<97; i++){
	suma[i] =(tabla[i] + tabla[i]+ 1);
	cout << suma[i] << endl;
	}

	
	system("PAUSE");
	return 0;
}
