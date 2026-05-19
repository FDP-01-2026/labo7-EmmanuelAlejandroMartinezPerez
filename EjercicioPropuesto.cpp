#include <iostream>
using namespace std;

void ContarImpares(int *Num, int *Suma);
void ElevarValores(int *NumX, int *NumY, long *Resultado);


int main () {

int Num;
int NumX, NumY;
long Resultado = 1;
int Suma;

    ContarImpares(&Num, &Suma);
cout << "Ahora se le pedira ingresar dos numeros, el primero sera el numero base y el segundo sera el exponente, se mostrara el resultado de elevar el numero base al exponente" << endl;
    ElevarValores(&NumX, &NumY, &Resultado);


}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void ContarImpares(int *Num, int *Suma) {

cout << "Ingrese un numero cualquiera y se contaran todos los numeros impares menores a ese numero y luego los sumara" << endl;
cin >> *Num;
*Suma = 0;

for (int i = 1; i < *Num; i+=2) 
    { 
        cout << i << " " << endl;
        *Suma += i;
    }
    cout << "La suma de los numeros impares menores a " << *Num << " es: " << *Suma << endl;
}

void ElevarValores(int *NumX, int *NumY, long *Resultado) {

    cout << "Ingrese el primer numero, que sera el numero base" << endl;
    cin >> *NumX;
    cout << "Ingrese el segundo numero, que sera el exponente" << endl;
    cin >> *NumY;

    for (int i = 1; i <= *NumY; i++) 
    { 
        *Resultado *= *NumX;
    }
    cout << "El resultado de elevar " << *NumX << " a la " << *NumY << " es: " << *Resultado << endl;
}
