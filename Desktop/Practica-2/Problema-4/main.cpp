//Problema 4

#include <iostream>
using namespace std;

void str_int();
char strnumeros [100];

void str_int(){
    for (int i=0 ; i<100 ; i++){

        if ((int) *(strnumeros+i)==0){
            cout << endl;
            break;}

        cout << ((int) *(strnumeros+i)) -48;}   /*Al hacer la operacion,nos da un numero en la tabala ascii,le restamos
                                                     48 para que nos de el valor de dicho numero en la tabla ASCII*/
}


int main()
{

    cout << "Ingrese una cadena de caracteres numericos: ";
    cin >> strnumeros;

    cout << "El numero ingresado es: ";

    str_int();


}
