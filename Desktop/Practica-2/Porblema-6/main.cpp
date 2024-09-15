//Problema 6

#include <iostream>
#include <string.h>
using namespace std;


int main()
{

    char cadena1[30],cadena2[30]={},*puntero;

    cout<<"Ingrese una una cadena de caracteres: ";cin.getline(cadena1,30,'\n');
    cout<<endl;
    puntero=cadena1;

    for(int i=0;i<30;i++){                         //Ciclo que controla la cantidad de velemtos que se realizara

        if(puntero[i]>=65 && puntero[i]<=90){    //rango de mayusculas
            cadena2[i]=puntero[i];              //le lleva a cadena2[] el elemto que tenga punto[] en la posicion i

        }
        if(puntero[i]>=97 && puntero[i]<=122){  //Rango de minisculas

            for(int j=97;j<=122;j++){          //Ciclo que contiene las letras minusculas en la tabla ascci

                if(j==puntero[i]){            /*Condicional que me dice si el elemto j(tabla ascii) es igual al
                                                elemento que esta en la posicion i del puntero[]*/

                    cadena2[i]=puntero[i]-32; //Al restar 32 combiarte la letra minuscula en mayuscula.
                    break;
                }

            }

        }
        if(puntero[i]>=32 && puntero[i]<=47){   /*Este ciclo me dice si hay algo diferente de letras
                                                  si es asi, entonces le llevara ese elemto a cadena2*/
            cadena2[i]=puntero[i];
        }

    }
    cout<<"Original: "<<cadena1<<endl<<"En mayuscula: "<<cadena2<<endl;  //Imprime el resultado

    return 0;
}
