//Un equipo de baloncesto que va a participar en la próxima temporada, necesita un programa que le permita realizar las estadísticas de todos sus jugadores, 
// partido a partido hasta donde puedan avanzar dentro del campeonato, por cada partido jugado se tendrá
//el número que identifica al jugador y la cantidad de puntos que anoto en el partido.

//Las estadísticas deben mostrar lo siguiente:
////Nivel del jugador: 
//(si los puntos son menores a 40 el nivel es deficiente; identificarlo con una D)
//(si los puntos están entre 40 y 90 el nivel es bueno; identificarlo con una B)
////Jugador que más puntos anoto por partido
///  int T[MaxFila>1 && MaxFila<=MaxFila][MaxCol>1];
// Total, de puntos anotados por el equipo en la temporada


#include <iostream>
#include <string.h>

using namespace std;

int main ()
	{
		char respuesta;
		int jugador1=0, jugador2=0, jugador3=0, jugador4=0,jugador5=0, cantidadpartidos =0, cantidadjugadores=0, total1=0, total2=0, total3=0, total4=0, total5=0, totalequipo=0, maspuntos=0;
		string Identificacion1,Identificacion2,Identificacion3,Identificacion4,Identificacion5, nivel1, nivel2, nivel3, nivel4, nivel5, jugadormaspuntos; 
		
		do 
		{
			cout<< "\n Es un nuevo partido? S/N"<<endl;
    		cin>>respuesta;
    		
    	
	
		cantidadpartidos = cantidadpartidos	+ 1;
		
		// JUGADOR 1
		cout<<"\n Ingrese ID jugador 1: ";
		cin>>Identificacion1;
		cout<<"\n Ingrese puntos jugador 1: ";
		cin>>jugador1;
		total1 = total1 + jugador1;
		
		if (jugador1<40){
			nivel1 = " D - Deficiente ";
		}	
		else if (jugador1>40 && jugador1<90)
		{
			nivel1 = " B - Bueno"; 
			}
		else if (jugador1>90)
		{
			nivel1 = " E - Excelente" ; 
			}
			
		// JUGADOR 2	
		cout<<"Calidad: "<<nivel1<<endl;
		
		
		cout<<"\n Ingrese ID jugador 2: ";
		cin>>Identificacion2;
		cout<<"\n Ingrese puntos jugador 2: ";
		cin>>jugador2;
		total2 = total2 + jugador2;
		
		if (jugador2<40){
			nivel2 = " D - Deficiente ";
		}	
		else if (jugador2>40 && jugador1<90)
		{
			nivel2 = " B - Bueno"; 
			}
		else if (jugador2>90)
		{
			nivel2 = " E - Excelente" ; 
			}
		
		cout<<"Calidad: "<<nivel2<<endl;
		
		// JUGADOR 3
		cout<<"\n Ingrese ID jugador 3: ";
		cin>>Identificacion3;
		cout<<"\n Ingrese puntos jugador 3: ";
		cin>>jugador3;
		total3 = total3 + jugador3;
		
		if (jugador3<40){
			nivel3 = " D - Deficiente ";
		}	
		else if (jugador3>40 && jugador3<90)
		{
			nivel3 = " B - Bueno"; 
			}
		else if (jugador3>90)
		{
			nivel1 = " E - Excelente" ; 
			}
			
		cout<<"Calidad: "<<nivel3<<endl;
		
		// JUGADOR 4
		cout<<"\n Ingrese ID jugador 4: ";
		cin>>Identificacion4;
		cout<<"\n Ingrese puntos jugador 4: ";
		cin>>jugador4;
		total4 = total4 + jugador4;
		
		if (jugador4<40){
			nivel4 = " D - Deficiente ";
		}	
		else if (jugador1>40 && jugador4<90)
		{
			nivel4 = " B - Bueno"; 
			}
		else if (jugador4>90)
		{
			nivel4 = " E - Excelente" ; 
			}
		cout<<"Calidad: "<<nivel4<<endl;
		
		
		//JUGADOR 5
		cout<<"\n Ingrese ID jugador 5: ";
		cin>>Identificacion5;
		cout<<"\n Ingrese puntos jugador 5: ";
		cin>>jugador5;		
		total5 = total5 + jugador5;
			if (jugador5<40){
			nivel5 = " D - Deficiente ";
		}	
		else if (jugador5>40 && jugador5<90)
		{
			nivel5 = " B - Bueno"; 
			}
		else if (jugador5>90)
		{
			nivel5 = " E - Excelente" ; 
			}
		cout<<"Calidad: "<<nivel5<<endl;
		
		cout<< "\n Es un nuevo partido? S/N"<<endl;
    	cin>>respuesta;
    	
		if(jugador1>jugador2)
 		maspuntos=jugador1;
 	
 		else
		maspuntos=jugador2;
		jugadormaspuntos= Identificacion2;
 		if(jugador3>maspuntos)
 		maspuntos=jugador3;
 		jugadormaspuntos= Identificacion3;
 		if(jugador4>maspuntos)
 		maspuntos=jugador4;
 		jugadormaspuntos= Identificacion4;
 		if(jugador5>maspuntos)
 		maspuntos=jugador5;
 		jugadormaspuntos= Identificacion5;
 		if (maspuntos=jugador1)
 		jugadormaspuntos= Identificacion1;
 		
 		cout<<"\n Jugador con mas puntos "<<"("<<jugadormaspuntos<<"): "<<maspuntos<<" PUNTOS";
		totalequipo = total1 + total2 + total3 + total4 + total5;
		
		cout<<"\n Total puntos anotados en temporada: "<<totalequipo<<endl;;
		cout<<"\n Cantidad de partidos en temporada: "<<cantidadpartidos<<endl;;
		
		}while(respuesta == 'n'||respuesta == 'N');{
		

		}
	
	
				
		}
		
		
		
		
		

	

		
		
		
		
		
		
		
		
		
		
		
		
		
		
