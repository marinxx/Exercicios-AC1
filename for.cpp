#include <iostream>
using namespace std;

int main () {
    int num;
    
    //esolher um numero inteiro positivo
    cout << "Digite um numero inteiro positivo: ";
    cin >> num;
    
    //aparecera todos os numeros pares positivos ate o numero escolhido
    cout << "Os primeiros " << num << " numeros pares sao: ";
    
    //conta feita para o funcionamento da programaçao
    for (int i = 2; i <= num * 2; i += 2) {
        cout << i << " ";
    }
    
    return 0;
}