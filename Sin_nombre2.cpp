#include <stdio.h>
#include <stdlib.h>

#include <iostream.h>
#include <stdio.h>

int main(void)


{
            int x,tabla[100];
           
            for (x=1;x<=100;x++)
            {
        tabla[x]=x;
    }
           
            for (x=1;x<=100;x++)
            {
        printf("%d\n",tabla[x]);
    }
           for (x=1;x<=100;x++){
           	
           	if (x%3==0)
           	cout << "\nEl numero " << x
                 << " es multiplo de " << "3";
           	}
           	
           
    system("PAUSE");     
    return 0;
}

