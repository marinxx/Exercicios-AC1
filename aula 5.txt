#include <iostream>
using namespace std;

int main() {
    //operaçoes entre numeros
    char op;
    //dois numeros
    float num1, num2;
    //escolha um simbolo de uma operaçao matematica
    cout << "Entre com o operador: +, -, *, /: ";
    cin >> op;
    //escolher os valores dos numeros
    cout << "Entre com dois valores: ";
    cin >> num1 >> num2;
    
    switch (op) {
        //no caso da operaçao de soma
        case '+':
        cout << num1 << " + " << num2 << " = " << num1 + num2;
        break;
        case '-':
        //no caso da operaçao de subtraçao
        cout << num1 << " - " << num2 << " = " << num1 - num2;
        break;
        case '*':
        //no caso da operaçao de multiplicaçao
        cout << num1 << " * " << num2 << " = " << num1 * num2;
        break;
        case '/':
        //no caso da operaçao de divisao
        cout << num1 << " / " << num2 << " = " << num1 / num2;
        break;
        default:
        //caso o operador nao seja reconhecido na programaçao
        cout << " Operador errado, por favor insira o operador correto";
        break;
    }
    return 0;
}