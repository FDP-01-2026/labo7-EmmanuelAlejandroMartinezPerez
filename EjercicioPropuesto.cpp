#include <iostream>
using namespace std;

void ContarImpares(int *Num);
void ElevarValores(int *NumX, int *NumY, long long *Resultado);


int main () {

int Num;
int NumX, NumY;
long long Resultado = 1;

    ContarImpares(&Num);
cout << "Ahora se le pedira ingresar dos numeros, el primero sera el numero base y el segundo sera el exponente, se mostrara el resultado de elevar el numero base al exponente" << endl;
    ElevarValores(&NumX, &NumY, &Resultado);


}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void ContarImpares(int *Num) {

cout << "Ingrese un numero cualquiera y se contaran todos los numeros impares menores a ese numero" << endl;
cin >> *Num;

for (int i = 1; i < *Num; i+=2) 
{ 
    cout << i << " " << endl;
}
}

void ElevarValores(int *NumX, int *NumY, long long *Resultado) {

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
