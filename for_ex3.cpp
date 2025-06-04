#include <iostream>

using namespace std;

int main()
{
    int limite;
    int suma = 0;

    cout << "Por favor ingrese hasta que numero le gustaria sumar" << endl;
    cin >> limite;

    for (int i = 1; i <= limite; i++)
    {
        suma += i;
    }
    cout <<"la suma es " << suma << endl;
    return 0;
}