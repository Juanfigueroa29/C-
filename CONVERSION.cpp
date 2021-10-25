#include <iostream>
using namespace std;
int main()
{
	
	const int MaxFila=5, MaxCol=5;
	int n, m;
	int pos=0, neg=0;
    int T[MaxFila>1][MaxCol>1];
    cout<<"Ingrese n: ";
	cin>>n;
	cout<<"Ingrese m: ";
	cin>>m;
    
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (T[i][j] > 0)
              pos = pos +  T[i][j];
                    
            else if (T[i][j] < 0)
            	neg = neg + T[i][j];
        }
    }
    
   	cout<<"Positivos: "<<pos<<endl;
   	cout<<"Negativos: "<<neg<<endl;
   	
    system("pause");
    return 0;

}
