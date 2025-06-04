#include <iostream>

using namespace std;

int main()
{
    int consumo; // en KWh
    bool es_numero;

    cout << "================================" << endl;
    cout << "      Calculadora de tarifa     " << endl;
    cout << "  Por favor ingrese su consumo  " << endl;
    cout << "        (Ingresar en kWh)       " << endl;
    cout << "================================" << endl;
    cout << "Consumo: ";
    cin >> consumo;

    if (consumo >= 0) // Validando
    {
        if (consumo < 100)
        {
            cout << "==Tarifa baja==" << endl;
        }
        if (consumo >= 100 && consumo <= 200)
        {
            cout << "==Tarifa media==" << endl;
        }
        if (consumo > 200)
        {
            cout << "==Tarifa alta==" << endl;
        }
    }

    else // si el dato ingresado no es valido
    {
        cout << "============================" << endl;
        cout << "Ha ingresado un dato erroneo" << endl;
        cout << "============================" << endl;
    }

    return 0;
}