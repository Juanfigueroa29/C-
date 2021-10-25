#include<iostream>
using namespace std;
int main()
{
	int h, m, s, HORA;
	cout << "Introduce los segundos:" << endl;
	cin >> HORA;
	h = HORA / 3600;
	HORA = HORA % 3600;
	m = HORA / 60;
	s = HORA % 60;
	cout << "Horas: " << h << endl;
	cout << "Minutos: " << m << endl;
	cout << "Segundos: " << s << endl;
	system("pause");
}

