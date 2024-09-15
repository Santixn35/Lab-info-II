#include <iostream>
#include <string.h>
using namespace std;

int main()
{

    cout<<"Los numeros romanos se forman usando estos caracteres en base a dos reglas:"<<endl;
    cout<<"  ->Si un caracter esta seguido por uno de igual o menor valor, su valor se suma al total."<<endl;
    cout<<"  ->Si un caracter esta seguido por uno de mayor valor, su valor se resta del total."<<endl<<endl;
    char numero_R[500];
    int numero_A[500];
    int suma = 0,i;

    for(i = 0;i < 500;i++)
        numero_A[i] = 0;

    cout<<"Ingrese el numero romano: ";cin>>numero_R;

    for (i = 0;i < strlen(numero_R);i++) //Ciclo que recorre el arreglo numero_A[] hasta que i sea menor que su longitud
    {
        switch(numero_R[i])               /*La estructura switch ingrese con el elemento que hay en numero_R[i] y lleva su valor
                                        correspondiente en sistema arabigo al arreglo numero_A en la posicio [i]*/
        {
        case 'I' :
            numero_A[i] = 1;
            break;

        case 'V' :
            numero_A[i] = 5;
            break;

        case 'X' :
            numero_A[i] = 10;
            break;

        case 'L' :
            numero_A[i] = 50;
            break;

        case 'C' :
            numero_A[i] = 100;
            break;

        case 'D' :
            numero_A[i] = 500;
            break;

        case 'M' :
            numero_A[i] = 1000;
            break;
        default:                                      /*si se ingresa algo diferente a letras mayusculas o diferente a las letras ya
                                                      establecidas,el programa dira que lo que ingreso no es un numero romano*/
        {
            cout<<"El numero no es Romano\n";

            break;
        }
        }
    }

    for(i = 0;i < strlen(numero_R);i++)       //Este for se encarga de hacer la suma correspondiente a dicho numero ingresado
    {
        if(numero_A[i] < numero_A[i+1])
            suma -= numero_A[i];
        else
            suma += numero_A[i];
    }


    cout<<"El numero ingresado fue: "<<numero_R<<endl;
    cout<<"   ->Que corresponde a: "<<suma<<endl;
    return (0);
}
