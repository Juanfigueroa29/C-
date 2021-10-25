//Algoritmo que imprime una matriz cuadrada cuyas diagonales principales son unos y el resto son ceros. Además, cuenta el numero de ceros y unos que tiene dicha matriz.
#include <iostream>
using namespace std;
int main()
{
	int ceros=0, unos=0;
    int M[4][4];
    for (int c = 0; c < 4; c++)
    {
        for (int f = 0; f < 4; f++)
        {
            if (f == c)
                M[f][c] = 1;
                    
            else
                M[f][c] = 0;
                
        }
        // CONTADORES
        for (int f = 0; f < 4; f++)
        {
            if (f == c)
                unos = unos + 1 ;
                    
            else
                 ceros = ceros + 1;
                
        }
        // FIN CICLO DE CONTADORES
    }
    for (int c = 0; c < 4; c++)
    {
        cout << "|" <<" ";
        for (int f = 0; f < 4; f++)
        {
            cout << M[f][c]<<" ";
        }

        cout << "|" << endl;
    }
    // IMPRIMIR CONTADORES
    
    cout << "NUMERO DE UNOS: " << unos << endl;
    cout << "NUMERO DE CEROS: " << ceros << endl;
    
    system("pause");
    return 0;

}
