#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float a, b;
    char c;
    char opcion;

    do {
        cout << "Dame un digito: ";
        cin >> a;

        cout << "Dame otro digito: ";
        cin >> b;

        cout << "Que operacion quieres hacer (+, -, *, /, ^, r): ";
        cin >> c;

        if(c == '+') {
            cout << "Resultado: " << a + b << endl;
        }
        else if(c == '-') {
            cout << "Resultado: " << a - b << endl;
        }
        else if(c == '*') {
            cout << "Resultado: " << a * b << endl;
        }
        else if(c == '/') {
            if(b != 0)
                cout << "Resultado: " << a / b << endl;
            else
                cout << "Error: Division entre 0" << endl;
        }
        else if(c == '^') {
            cout << "Resultado: " << pow(a, b) << endl;
        }
        else if(c == 'r') {
            if(a >= 0)
                cout << "Resultado: " << sqrt(a) << endl;
            else
                cout << "Error: No se puede calcular la raiz de un numero negativo" << endl;
        }
        else {
            cout << "Operacion invalida" << endl;
        }

        cout << "\nDesea seguir? (s=seguir / c=cerrar): ";
        cin >> opcion;

    } while(opcion == 's' || opcion == 'S');

    cout << "Programa cerrado :D" << endl;

    return 0;
}