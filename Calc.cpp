


//codigo


#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int num1;
    int num2;
    int resultado = 0.0;
    int menuselect;


    cout << "SUMA - 1" << endl;
    cout << "RESTA - 2" << endl;
    cout << "MULTIPLICACION - 3" << endl;
    cout << "DIVISION - 4" << endl;
    cout << "POTENCIA - 5" << endl;
    cout << "Seleccione su operacion:" << endl;
    cin >> menuselect;

    switch (menuselect)
    {
    case 1:
        cout << "Introduce el primer numero";
        cin >> num1;
        cout << "Introduce el segundo numero";
        cin >> num2;

        resultado = num1 + num2;
        
        cout << resultado;
        break;
    case 2:
        cout << "Introduce el primer numero";
        cin >> num1;
        cout << "Introduce el segundo numero";
        cin >> num2;

        resultado = num1 - num2;
        
        cout << resultado;
        break;
    case 3:
        cout << "Introduce el primer numero";
        cin >> num1;
        cout << "Introduce el segundo numero";
        cin >> num2;

        resultado = num1 * num2;
        
        cout << resultado;
        break;
    case 4:
        cout << "Introduce el primer numero";
        cin >> num1;
        cout << "Introduce el segundo numero";
        cin >> num2;

        resultado = num1 / num2;
        
        cout << resultado;
        break;
    case 5:
        cout << "Introduce el primer numero";
        cin >> num1;
        cout << "Introduce el segundo numero";
        cin >> num2;

        resultado = pow(num1, num2);
        
        cout << resultado;
        break;
    default:
        cout << "Nada";
        break;
    }
}