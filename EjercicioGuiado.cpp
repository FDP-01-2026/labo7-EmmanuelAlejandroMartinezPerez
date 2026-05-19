#include <iostream>
using namespace std; 


int Num1 = 0, Num2 = 1, Usuario;


int main () {

cout << "Ingrese hasta el termino que desea ver de fibonacci" << endl;
cin >> Usuario;

for (int i = 1; i <= Usuario; i++) 
{ 
    int Suma = Num1 + Num2;

    cout << Suma << " ";
    
    Num1 = Num2;
    Num2 = Suma;
}
}