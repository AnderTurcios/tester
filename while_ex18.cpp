#include <iostream>

using namespace std;

int intento = 1;
int numero_correcto = 37;
int numero_intento;

int main()
{
    cout << "Adivina el numero en 5 intento" << endl;
    cout << endl;

    do
    {
        for (intento; intento < 6; intento++)
        {
            cout << "intento numero: " << intento << endl;
            cout << "ingrese un numero por favor" << endl;
            cin >> numero_intento;

            if (numero_intento == numero_correcto)
            {
                cout << "ADIVINADO" << endl;
                return 0;
            }
            if (numero_intento != numero_correcto)
            {
                cout << "Vuelva a intentarlo" << endl;
            }
        }
    } while (intento < 6);

    cout << "se han acabado los intentos" << endl;

    return 0;
}