#include <iostream>
using namespace std;

int main(){


    char ingresados [20]="";
    char letras [20]="";
    char numeros [20]="";
    int j=0 , k=0;

    cout << "Ingrese la cadena de caracteres: ";cin >> ingresados;

    for (int i=0 ; i<20 ; i++){

        if ((int)*(ingresados+i)==0){  //Convierte lo que hay en el arreglo ingresados[] a int.
            break;}


        if (((int)*(ingresados+i))>=48  &&  (((int)*(ingresados+i))<=57)){ /*Convierte lo que hay en el arreglo ingresados[] a int. y pregunta 										     si esta en el rango de 48-57(es el rango de numeros del 1 al 9 en 										     ASCII)*/

            *(numeros+j)=*(ingresados+i);				  /*cambia el valor que hay en  numeros[]+j en ese momento por el valor 									    que tenga en ese momento el elemento de ingresados[]+i*/
            j++;
        }

        else{
            *(letras+k)=*(ingresados+i);				//Operaciones entre punteros(arreglos)
            k++;
        }

    }


    cout << "Original: " << ingresados <<  "     Letras: " << letras << "     Números: " << numeros <<  endl;
    return 0;

}
