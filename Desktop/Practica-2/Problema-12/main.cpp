#include <iostream>

using namespace std;

int main()
{
    int n=0 , sumad=0 , sumasf=0, sumasc=0 ;
    bool Cuadrado =false;

    cout <<"Ingrese el numero de filas y columnas que tendrá la matriz: ";
    cin >> n;

    int matriz [n][n] , sumaf [n] , sumac[n]  ;

    //Asignale valores a las posiciones de la matriz
    for(int i=0 ; i<n ; i++){                                                                        //Filas
        for(int j=0 ; j<n ; j++){                                                                    //Columnas
            cout << "Ingrese el valor del elemento [" << i << "]" << "[" << j << "]: ";
            cin >> matriz [i][j];
        }
    }

    cout << endl << "La matriz es: " << endl;
    //--------------------------------------------------------------------------------------
    //Imprimir la matriz
    for (int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++)
            cout << " | " << matriz [i][j];

        cout << " |" << endl;
    }


    //--------------------------------------------------------------------------------------
    //Suma filas
    for (int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            sumasf+=matriz[i][j];
        }

        sumaf[i]=sumasf;
        sumasf=0;
    }
    //--------------------------------------------------------------------------------------


    //Suma columnas
    for (int j=0 ; j<n ; j++){
        for(int i=0 ; i<n ; i++){
            sumasc+=matriz[i][j];

        }

        sumac[j]=sumasc;
        sumasc=0;
    }


    //--------------------------------------------------------------------------------------
    //Suma diagonal
    for(int i=0 , j=0 ; j<n ;j++ , i++){
        sumad+= matriz[i][j];
    }
    //--------------------------------------------------------------------------------------
    //Compara la suma de las filas con la suma de las columnas y la suma de la diagonal

    for (int i=0; i<n ; i++){

        if ((*(sumaf+i) == *(sumac+i)) && sumad == *(sumaf+i))
            Cuadrado=true;

        else
            Cuadrado=false;}

    if(Cuadrado==true)
        cout << endl << "               SI ES UN CUADRADO MAGIGO!        " << endl;

    else
        cout << endl << "              NO ES UN CUADRADO MAGIGO!         " << endl;

    return 0;
}
