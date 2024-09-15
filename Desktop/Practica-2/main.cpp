//Problema 2


#include <iostream>
#include<time.h>
#include<stdlib.h>

using namespace std;

int main()
{
    cout<<"Este programa genera un arreglo aleatorio de 200 letras "
            "mayusculas y cuenta el numero de veces que se repite cada una"<<endl<<endl<<"[";

    char ABC[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    char generado[200]={};
    int numero,repetido=0;

    srand(time(NULL));
    for(int i=0;i<200;i++){                  //Ciclo que introduce una letra aleatoria al arreglo ''generado[]''
        numero=rand()%26;
        generado[i]=ABC[numero];            //llevar la letra escogida al azar del arreglo ABC[] al arreglo generado[]
    }
    cout<<generado<<"]"<<endl;          //imprime el arreglo

    for(int i=0;i<26;i++){             //Ciclo que recorre el arreglo ABC[]
        cout<<ABC[i]<<": ";           //Imprime el elemto del arreglo ABC[i]

        for(int j=0;j<200;j++){      //Ciclo que recorre el arreglo generado[]
            if(*(ABC+i)==*(generado+j)){  //cuenta las veces que se repite una letra en el arreglo
                repetido++;
            }
        }
        cout<<repetido<<endl;      //imprime las veces que se repite
        repetido=0;
    }
    return 0;
}
