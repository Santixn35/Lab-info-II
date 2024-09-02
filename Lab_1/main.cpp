#include <iostream>
#include <cstdlib>

using namespace std;

int main()

{
    //ejercicio 1
    /*
    int a,b;
    float c;
    cout <<"Ingrese el numero A\n";
    cin>>a;

    cout <<"Ingrese el numero B\n";

    cin>>b;

    c = a%b;
    cout <<"El residuo de la division es "<< c;

    return 0;
    */


    //ejercicio 2
    /*
    int a;

    cout<<"Ingrese un numero: ";
    cin>>a;

    if (a%2 == 0){
        cout<<a<<" es par";
    }
    else{
        cout<<a<<" Es impar";
    }

    return 0;
    */


    //ejercicio 3
    /*
    float a,b;

    cout<<"Ingrese 2 numeros:\n";
    cout<<"a: ";
    cin>>a;
    cout<<"b: ";
    cin>>b;

    if (a>b){
        cout<<a;
    }
    else{
        cout<<b;
    }
    return 0;
    */

    //ejercicio 4
    /*
    float a,b;

    cout<<"Ingrese 2 numeros:\n";
    cout<<"a: ";
    cin>>a;
    cout<<"b: ";
    cin>>b;

    if (a>b){
        cout<<b;
    }
    else{
        cout<<a;
    }
    return 0;
    */
    

    //Ejercicio 5
    /*
    int valA, valB, div;
    cout << "Ingrese el valor A y luego el valor B";
    cin >> valA >> valB;
    div= valA/valB;
    if (valA%valB *2 >= valB){
        div++;
    }
    cout<< valA<< "/" <<valB<<"="<< div;

    */



    //Ejercicio 6
    /*
    int a,b,c;
    cout<<"Ingrese la base a elevar: ";
    cin>>a;
    cout<<"Ingrese el exponente: ";
    cin>>b;

    if((a==0)&(b==0)){
        cout<<"0^0 es una indeterminacion intente de nuevo";
    }
    else if(b==0){
        c=1;
        cout<<a<<"^"<<b<<"es igual a "<<c;
    }
    else if(b<0){
        b=b*-1;
        c=a;
        for (int i = 1; i < b; i ++){
            c=c*a;
        }
        cout<<a<<"^"<<"-"<<b<<" es igual a "<<"1/"<<c;

    }
    else{
        c=a;
        for (int i = 1; i < b; i ++){
            c=c*a;
        }
        cout<<a<<"^"<<b<<"es igual a "<<c;

    }

    return 0;
    */


    //Ejercicio 7
    /*
    int n,s;
    cout<<"Ingrese un numero: ";
    cin>>n;
    s=(n*(n+1))/2;
    cout<<"La suma desde 0 hasta "<<n<<" es:"<<s;


    return 0;
    */

    //Ejercicio 8
    /*
    int a,b;
    cout<<"Ingrese un numero: ";
    cin>>a;
    b=1;
    for (int i=a; i>=1; i--){
        b=b*i;

    }
    cout<<b;
    */


    //Ejercicio 9
    /*
    float n,p,ar,pi;
    cout<<"Ingrese el radio del circulo: ";
    cin>>n;
    pi=3.1416;
    p=2*pi*n;
    ar=pi*n*n;
    cout<<"El area es "<<ar<<" y el perimetro es "<<p;
    */



    //Ejercicio 10
    /*
    int n,m;
    cout<<"Ingrese un numero: ";
    cin>>n;

    if (n>100 or n<0){
        cout<<"Ingrese un dato valido.";
    }
    else{
        cout<<"Multiplos de "<<n<<" menores que 100 \n";
        for (int i =1;i<100;i++){
            m = n*i;
            if (m > 100){
                i= 101;
            }
            else{
                cout<<m<<"\n";
            }
        }
    }
    */



    //Ejercicio 11
    /*
    int n;
    cout<<"Ingrese un numero: ";
    cin>>n;
    for (int i=1; i<=10; i++){
        cout<<i<<"x"<<n<<"= "<<i*n<<"\n";
    }
    */

    //Ejercicio 12

    /*
     int n,m;
  cout<<"Digite un numero: ";
  cin>>n;
  m=1;
  for (int i=1; i<=5;i++){
      m=m*n;
      cout<< n<<"^"<<i<<"="<<m<<"\n";
  }
    */

    //Ejercicio 13
    /*

    int N, division, residuo ;
    cout << "ingrese el numero sobre el cual desee conocer sus divisores: " << endl;
    cin >> N;
    cout << "los divisores de " << N << " son:" << endl;
    for(int cont = 1; cont <= N/2; cont += 1){
        division = N/cont;
        residuo = N - (division*cont);
        if(residuo == 0){
            cout << cont << endl;
        }
    }
    cout << N << endl;
    */

    //Ejercicio 14
    /*
    int inicio = 1;
    int fin = 50;

    while (inicio <= 50 && fin >= 1) {
        cout << inicio << "   " << fin << endl;
        inicio++;
        fin--;
    }
    */

    //Ejercicio 15
    /*
    int VoF =1, suma_tot, suma;
    cout << "ingrese los valores que desee sumar a el total, cuando desee finalizar, agregue un 0: " << endl;
    while(VoF != 0){
        cin >> suma;
        suma_tot += suma;
        if(suma == 0){
            VoF = 0;
        }
    }
    cout << "el resultado de la sumatoria es: " << suma_tot << endl;
    */


    //Ejercicio 16
    /*
     * int numero,suma=0,total_numeros=0,promedio;
   cout<<"Ingrese un numero (si ingresa cero el programa se detiene): ";
    cin>>numero;
      if (numero ==0) {
        cout<<"Ingrese un numero distinto de cero"<<endl;
    }
      else{
          while(numero !=0){
              suma+=numero;
              total_numeros+=1;
              cout<<"Ingrese otro numero: ";
              cin>>numero;
          }
    promedio=suma/total_numeros;
    cout<<"El promedio aproximado de los numeros ingresados es: "<<promedio<<endl;
        }
    */

    //Ejercicio 17
    /*
    int VoF = 1, mayor = 0, valN = 0;
    cout << "ingrese los valores que desee comparar, cuando desee finalizar, agregue un 0: " << endl;
    while(VoF != 0){
        cin >> valN;
        if(valN == 0){
            VoF = 0;
        }
        else if(valN > mayor){
            mayor = valN;
        }
    }
    cout << "el mayor valor entre los ingresados fue: " << mayor << endl;
    */

    //Ejercicio 18
    /*
int cuadrado;

    cout << "Ingrese un numero: ";
    cin >> cuadrado;
    int i;
    for (i = 1; i * i <= cuadrado; i++) {
        if (i * i == cuadrado) {
            cout << cuadrado << " es un cuadrado perfecto" << endl;
            return 0;
        }
    }
    cout << cuadrado << " no es un cuadrado perfecto" << endl;
    */

    //Ejercicio 19
    /*
int N = 0, residuo = 0, division = 0, VoF = 0;
    cout << "ingrese el numero N sobre el cual desee conocer si tiene o no tiene numeros primos" << endl;
    cin >> N;
    for (int contador = 2; contador < N; contador +=1){
        division = N/contador;
        residuo = N - (contador*division);
        if(residuo == 0){
            VoF = 1;
            contador = N;
            break;
        }
    }
    if(VoF == 0){
        cout << N << " es un numero primo" << endl;
    }
    else if(VoF == 1){
        cout << N << " NO es un numero primo" << endl;
    }
    return 0;
    */

    //Ejercicio 20
    /*
    int numero, palindromo = 0, numeroog, digito;

    cout << "Ingrese un numero: ";
    cin >> numero;

    numeroog = numero;

    while (numero > 0) {
        digito = numero % 10;
        palindromo = palindromo * 10 + digito;
        numero /= 10;
    }

    if (numeroog == palindromo) {
        cout << numeroog << " es un numero palindromo." << endl;
    } else {
        cout << numeroog << " no es un numero palindromo." << endl;
    }
    */

    //Ejercicio 21
    /*
char C = 65;
    cout << "ingrese el caracter C sobre el cual desee transformar de minuscula a mayuscula o viceversa: " << endl;
    cin >> C;
    if(C >= 65, C <= 90){
        C = C + 32;
        cout << "letra convertida: " << C << endl;
    }
    else if(C >= 97, C <= 122){
        C = C - 32;
        cout << "letra convertida: " << C << endl;
    }
    else{
        cout << "caracter no valido " << endl;
    }
    */

    //Ejercicio 22
    /*
int seg,horas,min,sobseg;

    cout<<"Ingrese una cantidad de segundos: ";
    cin>>seg;
            horas=seg/3600;
          sobseg=seg%3600;
            min=sobseg/60;
          sobseg=sobseg%60;

            cout<<"La cantidad de segundos equivale a "<<horas<<" horas, "<<min<<" minutos y "<<sobseg<<" segundos"<<endl;
    */

    //Ejercicio 23
    /*
int valA = 0, valB = 0, auxA = 0, auxB = 0;
    cout << "ingrese el valor A y eventualmente el valor B para encontrar el MCM de estos: " << endl;
    cin >> valA >> valB;
    auxA = valA , auxB = valB;
    if(valA == 0 && valB == 0){
        cout << "el MCM de 0 y 0 esta indeterminado" << endl;
    }
    else if(valA != 0 && valB == 0){
        cout << "el MCM entre " << valA << " y 0 esta indeterminado" << endl;
    }
    else if(valA == 0 && valB != 0){
        cout << "el MCM entre 0 y " << valB << " esta indeterminado" << endl;
    }
    else{
        while(auxA != auxB){
            if(auxA < auxB){
                auxA += valA;
            }
            if(auxB < auxA){
                auxB += valB;
            }
        }
        cout << "el MCM de " << valA << " y " << valB <<  " es igual a " << auxA << endl;
    }
    */

    //Ejercicio 24
    /*
int tamano;
    cout << "Ingrese un numero entero para el tamano del cuadrado: ";
    cin >> tamano;

    // Imprimir la primera fila de '+'
    for (int i = 0; i < tamano; ++i) {
        cout << "+";
    }
    cout << endl;

    // Imprimir las filas intermedias
    for (int i = 0; i < tamano - 2; ++i) {
        cout << "+";
        for (int j = 0; j < tamano - 2; ++j) {
            cout << " ";
        }
        cout << "+" << endl;
    }

    // Imprimir la última fila de '+'
    for (int i = 0; i < tamano; ++i) {
        cout << "+";
    }
    cout << endl;
    */

    //Ejercicio 25
    /*
int digitos = 0;
    float N = 0.0, auxN = 0.0;
    cout << "ingrese el valor sobre el cual desee conocer su cantidad de digitos" << endl;
    cin >> N;
    auxN = N;
    if(N < 0){
        auxN = auxN*-1;
    }
    for(int divisiones = 0; auxN >= 1 ; divisiones += 1){
        auxN = auxN / 10;
        digitos += 1;

    }
    cout << N << " tiene " << digitos << " digitos" << endl;
    */

    //Ejercicio 26
    /*
 int lonA, lonB, lonC;
    cout << "ingrese la longitud de el lado A, eventualmente la longitud del lado B, y por ultimo la longitud del lado C" << endl;
    cin >> lonA >> lonB >> lonC;
    if(lonA + lonB > lonC && lonA + lonC > lonB && lonB + lonC > lonA){
        if(lonA == lonB && lonA == lonC){
            cout << "este triangulo es equilatero" << endl;
        }
        else if(lonA == lonB || lonB == lonC || lonA == lonC){
            cout << "este triangulo es isoceles" << endl;
        }
        else{
            cout << "este triangulo es escaleno" << endl;
        }
    }
    else{
        cout << "estas medidas no forman un triangulo" << endl;
    }
    */

    //Ejercicio 27
    /*
int valA, valB, valC;
    char caracter = 0;
    cout << "ingrese el primer valor, eventualmente el signo de la operacion que desee llevar a cabo(+, -, /, *) y por " << endl << "ultimo el valor B" << endl;
    cin >> valA >> caracter >> valB;
    //multiplicacion
    if(caracter == 42){
        valC = valA * valB;
        cout << valA << "*" << valB << "=" << valC << endl;
    }
    //suma
    else if(caracter == 43){
        valC = valA + valB;
        cout << valA << "+" << valB << "=" << valC << endl;
    }
    //resta
    else if(caracter == 45){
        valC = valA - valB;
        cout << valA << "-" << valB << "=" << valC << endl;
    }
    //division
    else if(caracter == 47){
        valC = valA / valB;
        cout << valA << "/" << valB << "=" << valC << endl;
    }
    else{
        cout << "valor/caracter no valido" << endl;
    }
    */

    //Ejercicio 28
    /*
int elementos, denominador=1;
    double pi = 0.0;
    bool resta = false;

    cout << "Ingrese el numero de elementos usados en la aproximacion: ";
    cin >> elementos;

    for (int i = 0; i < elementos; ++i) {
        if (resta) {
            pi -= 4.0 / denominador;
        } else {
            pi += 4.0 / denominador;
        }
        denominador += 2;
        resta = !resta;
    }

    cout << "pi es aproximadamente: " << pi << endl;
    */

    //Ejercicio 29
    /*
int valA = 0, valB = 100, valC = 50, VoF = 0;
    char caracter = 0;
    cout << "piensa en un numero el cual desees que el algoritmo adivine, tras tenerlo en mente, el programa te dará unos numeros, " << "y a partir de ellos, usando < , > , = guiaras a el algoritmo a tu numero en mente" << endl;
    while(VoF != 1){
        cout << valC << endl;
        cin >> caracter;
        //igual que
        if(caracter == 61){
            cout << "el numero en el que estuviste pensando es: " << valC << endl;
            VoF = 1;
        }
        //menor que
        else if(caracter == 60){
            valB = valC;
        }
        else if(caracter == 62){
            valA = valC;
        }
        else{
            cout << "caracter no valido" << endl;
        }
        valC = (valA + valB)/2;
    }
    */

    //Ejercicio 30
    /*
    //srand(time(NULL));

    int minimo = 0,maximo = 100,intentos=0,intento_usuario,numero_aleatorio;

    // Generar un número aleatorio en el rango de 0 a 100

    do {
        numero_aleatorio = rand();
    } while (numero_aleatorio < minimo || numero_aleatorio > maximo);

    numero_aleatorio %= (maximo - minimo + 1);

    cout << "Adivina el numero entre 0 y 100." << endl;

    do {
        cout << "Ingresa tu intento: ";
        cin >> intento_usuario;
        if (intento_usuario>100 || intento_usuario<0){
            cout<<"El numero esta fuera del rango"<<endl;
        break;

        }
        else{
        intentos++;


        if (intento_usuario < numero_aleatorio) {
            cout << "El numero a adivinar es mayor." << endl;
        } else if (intento_usuario > numero_aleatorio) {
            cout << "El numero a adivinar es menor." << endl;
        }
        }
    } while (intento_usuario != numero_aleatorio);

    cout << "¡Felicidades! Adivinaste el numero en " << intentos << " intentos." << endl;
    */

    //Problema 1
    /*
char caracter = 0;
    cout << "este algoritmo identificara si el caracter que ingreses, es una vocal, una consonante, o ninguna de ellas, ingrese " << endl << "el caracter: " << endl;
    cin >> caracter;
    if((caracter >= 65 && caracter <= 90) || (caracter >= 97 && caracter <= 122)){
        if(caracter == 65 || caracter == 97 || caracter == 69 || caracter == 101 || caracter == 73 || caracter == 105 || caracter == 79 || caracter == 111 || caracter == 85 || caracter == 117){
            cout << caracter << " es una vocal" << endl;
        }
        else{
            cout << caracter << " es una consonante" << endl;
        }
    }
    else{
        cout << caracter << " no es una letra" << endl;
    }
    */

    //Problema 2
    /*
    int din,cinq,veinte,diez,cinc,dosm,mil,quin,dosc,cien,cincuenta,sobra;

    cout<<"Ingrese un valor: ";
    cin>>din;
    cinq=din/50000;
    sobra=din%50000;
    veinte=sobra/20000;
    sobra=sobra%20000;
    diez=sobra/10000;
    sobra=sobra%10000;
    cinc=sobra/5000;
    sobra=sobra%5000;
    dosm=sobra/2000;
    sobra=sobra%2000;
    mil=sobra/1000;
    sobra=sobra%1000;
    quin=sobra/500;
    sobra=sobra%500;
    dosc=sobra/200;
    sobra=sobra%200;
    cien=sobra/100;
    sobra=sobra%100;
    cincuenta=sobra/50;
    sobra=sobra%50;
    cout<<"50000: "<<cinq<<endl;
    cout<<"20000: "<<veinte<<endl;
    cout<<"10000: "<<diez<<endl;
    cout<<"5000: "<<cinc<<endl;
    cout<<"2000: "<<dosm<<endl;
    cout<<"1000: "<<mil<<endl;
    cout<<"500: "<<quin<<endl;
    cout<<"200: "<<dosc<<endl;
    cout<<"100: "<<cien<<endl;
    cout<<"50: "<<cincuenta<<endl;
    cout<<"Faltante: "<<sobra<<endl;
     */

    //Problema 3
    /*
int mes = 0, dia = 0;
    cout << "ingrese el digito de el mes y eventualmente el dia para conocer si es una fecha valida:" << endl;
    cin >> mes >> dia;
    if(mes == 2){
        if(dia >= 1 && dia <= 28){
            cout << dia << "/" << mes << " es una fecha valida" << endl;
        }
        else if(dia == 29){
            cout << dia << "/" << mes << " es una fecha valida en bisiesto" << endl;
        }
        else{
            cout << dia << "/" << mes << " no es una fecha valida" << endl;
        }
    }
    else if(mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12){
        if(dia >= 1 && dia <= 31){
            cout << dia << "/" << mes << " es una fecha valida" << endl;
        }
        else{
            cout << dia << "/" << mes << " no es una fecha valida" << endl;
        }
    }
    else if(mes == 2 || mes == 4 || mes == 6 || mes == 9 || mes == 11){
        if(dia >= 1 && dia <= 30){
            cout << dia << "/" << mes << " es una fecha valida" << endl;
        }
        else{
            cout << dia << "/" << mes << " no es una fecha valida" << endl;
        }
    }
    else{
        cout << mes << " no es un mes valido" << endl;
    }
    */


    //Problema 5
    /*
int espacios = 0 , asteriscos_limite = 0, auxiliar = 0;
    cout << "ingrese un numero impar el cual determinara el que tan grande es este patron" << endl;
    cin >> asteriscos_limite;
    espacios = asteriscos_limite / 2 + 1;
    if (asteriscos_limite % 2 == 1){
        for(int asteriscos = 1; asteriscos <= asteriscos_limite; asteriscos += 2, espacios -= 1){
            auxiliar = 1;
            while(auxiliar <= espacios){
                auxiliar += 1;
                cout << " ";
            }
            auxiliar = 0;
            while(auxiliar < asteriscos){
                auxiliar += 1;
                cout << "*";
            }
            cout << endl;
        }
        espacios += 1;
        for(int asteriscos = asteriscos_limite-2 ; asteriscos >= 1 ; asteriscos -= 2, espacios += 1){
            auxiliar = 0;
            while(auxiliar <= espacios){
                auxiliar += 1;
                cout << " ";
            }
            auxiliar = 0;
            while(auxiliar < asteriscos){
                auxiliar += 1;
                cout << "*";
            }
            cout << endl;
        }
    }
    */
    //Problema 6
    /*
int terminos;
    cout << "Ingrese el numero de terminos para la aproximacion de e: ";
    cin >> terminos;

    double e = 0;
    double factorial = 1;

    for (int i = 0; i < terminos; ++i) {
        factorial = 1;
        for (int j = 2; j <= i; ++j) {
            factorial *= j;
        }
        e += 1 / factorial;
    }

    cout << "e es aproximadamente: " << e << endl;
    */

    //Problema 7
    /*
int anterior = 1, actual = 1, auxiliar = 0, N = 0, suma = 0;
    cout << "ingrese un numero sobre el cual quiera conocer la suma de los numeros menores a el ingresado, en la serie fibonacci" << endl;
    cin >> N;
    cout << "la suma de 0";
    while(actual < N){
        auxiliar = anterior;
        anterior = actual;
        actual = auxiliar + actual;
        if(actual % 2 == 0){
            cout << "+" << actual;
            suma += actual;
        }
    }
    cout << " = " << suma << endl;
    */

    //Problema 8
    /*
int a, b, c;
    cout << "Ingrese los valores de a, b y c: ";
    cin >> a >> b >> c;

    int suma = 0;

    for (int i = 1; i < c; ++i) {
        if (i % a == 0 || i % b == 0) {
            suma += i;
        }
    }

    cout << "Suma de los múltiplos de " << a << " y " << b << " menores que " << c << ": " << suma << endl;
    */

    //Problema 9
    /*
    int N = 0, suma = 0, residuo = 0, auxiliar = 0, subsuma = 0;
    cout << "ingrese el numero sobre el cual desee conocer la suma de sus digitos elevados por si mismos" << endl;
    cin >> N;
    while (N >= 1){
        auxiliar = 1;
        residuo = N % 10, N = N / 10, subsuma = 1;
        while(auxiliar <= residuo){
            subsuma *= residuo;
            auxiliar += 1;
        }
        suma += subsuma;
    }
    cout << "El resultado de la suma es: " << suma << endl;
*/


    //Problema 10
    /*
    int n,contador=0,primoActual=2;
    bool esPrimo;
    cout << "Ingrese un numero n: ";
    cin >> n;

    while (contador < n) {
        bool esPrimo = true;
        for (int i = 2; i * i <= primoActual; ++i) {
            if (primoActual % i == 0) {
                esPrimo = false;
                break;
            }
        }
        if (esPrimo) {
            contador++;
        }
        primoActual++;
    }

    cout << "El primo número " << n << " es: " << primoActual - 1 << endl;
*/


    //punto 11(MCM de numeros menores a N)
    /*
    int N = 0, MCM = 1, B = 0, auxB = 0, auxMCM = 0;
    cout << "ingrese un numero N sobre el cual quiera conocer el MCM entre 0 y su numero ingresado" << endl;
    cin >> N;
    for(int auxiliar = N; auxiliar > 1 ; auxiliar -= 1){
        B = auxiliar;
        auxB = B;
        auxMCM = MCM;
        while (MCM != B){
            if (B < MCM){
                B += auxB;
            }
            else if (MCM < B){
                MCM += auxMCM;
            }
        }
    }
    cout << "el minimo comun multiplo es: " << MCM << endl;
*/


    //#12
    /*

    int numero,numero_primo,maximo_factor_primo = 1;
    cout << "Ingrese un número: ";
    cin >> numero;
    numero_primo=numero;

    for (int i = 2; i * i <= numero_primo; ++i) {
        while (numero % i == 0) {
            maximo_factor_primo = i;
            numero_primo /= i;
        }
    }


    if (numero > 1) {
        maximo_factor_primo = numero_primo;
    }

    cout << "El mayor factor primo de " << numero << " es: " << maximo_factor_primo << "." << endl;
    */

    //#13
    /*
    int numero;
    cout << "Ingrese un numero: ";
    cin >> numero;

    int suma = 0;

    for (int i = 2; i < numero; ++i) {
        bool esPrimo = true;
        for (int j = 2; j * j <= i; ++j) {
            if (i % j == 0) {
                esPrimo = false;
                break;
            }
        }
        if (esPrimo) {
            suma += i;
        }
    }

    cout << "El resultado de la suma es: " << suma << endl;

*/

    //#14

    /*
    int num1, num2,producto,maxPalindromo=0,numero,numeroInvertido;
    cout << "Ingrese el primer numero de tres digitos: ";
    cin >> num1;
    cout << "Ingrese el segundo numero de tres digitos: ";
    cin >> num2;

    for (int i = num1; i <= num1; ++i) {
        for (int j = num2; j <= num2; ++j) {
            int producto = i * j;
            int numero = producto;
            int numeroInvertido = 0;

            // Reversa del número
            while (numero > 0) {
                int digito = numero % 10;
                numeroInvertido = numeroInvertido * 10 + digito;
                numero /= 10;
            }
            if (producto == numeroInvertido && producto > maxPalindromo) {
                maxPalindromo = producto;

            }
        }
    }

    cout << "El mayor palindromo obtenido de la multiplicacion de " << num1 << " y " << num2 << " es: " << maxPalindromo << endl;
*/



    //punto 15(espiral)
    /*
    int N = -1, repeticiones = 0, suma = 1, actual = 1, auxiliar = 0;
    cout << "este algoritmo tiene la funcion de recibir un numero N impar sobre el cual quiera conocer la suma de sus diagonales en forma N*N" << endl;
    while (N % 2 != 1 && N % 2 < 0){
        cout << "ingrese un valor impar positivo" << endl;
        cin >> N;
    }
    repeticiones = (N-1)/2;
    for (int amplitud = 2; repeticiones > 0; amplitud += 2, repeticiones -= 1){
        while(auxiliar < 4){
            actual += amplitud;
            suma += actual;
            auxiliar += 1;
        }
        auxiliar = 0;
    }
    cout << "la suma de estos numeros es: " << suma << endl << endl;

*/

    //#16

    /*

    int k, semillaMasLarga = 0, maxTerminos = 0,semilla,terminos;

            cout << "Ingrese un numero k: ";
            cin >> k;

            for (int j = 1; j < k; j++) {
                 semilla = j;
                 terminos = 1;

                while (semilla != 1) {
                    if (semilla % 2 == 0)
                        semilla /= 2;
                    else
                        semilla = 3 * semilla + 1;
                    terminos++;
                }

                if (terminos > maxTerminos) {
                    maxTerminos = terminos;
                    semillaMasLarga = j;
                }
            }

            cout << "La serie mas larga es con la semilla: " << semillaMasLarga << ", teniendo " << maxTerminos << " terminos." << endl;

            // Para imprimir la serie:
            cout << "La serie es: ";
            semilla = semillaMasLarga;
            while (semilla != 1) {
                cout << semilla << ", ";
                if (semilla % 2 == 0)
                    semilla /= 2;
                else
                    semilla = 3 * semilla + 1;
            }
            cout << "1" << endl;

*/

    //punto 17
    /*
    int k = 0, numTriangular = 0, auxiliar = 0, n = 1;
    cout << "Ingrese el número k: " << endl;
    cin >> k;

    while (true) {
        numTriangular = n * (n + 1) / 2;
        for (int divisores = 1; divisores <= numTriangular; divisores += 1){
            if (numTriangular % divisores == 0) {
                auxiliar += 1;
            }
        }
        if (auxiliar >= k) {
            break;
        }
        auxiliar = 0;
        n += 1;
    }

    cout << "El primer numero triangular con mas de " << k << " divisores es: " << numTriangular << endl;

    return 0;
*/

}





