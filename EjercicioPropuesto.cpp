#include <iostream>
using namespace std;

void ContarImpares(int *Num);
void ElevarValores(int *NumX, int *NumY);

int main () {
    int Num;

    ContarImpares(&Num);


}

void ContarImpares(int *Num) {

cout << "Ingrese un numero cualquiera y se contaran todos los numeros impares menores a ese numero" << endl;
cin >> *Num;

for (int i = 1; i < *Num; i+=2) 
{ 
    cout << i << " ";
}
}
