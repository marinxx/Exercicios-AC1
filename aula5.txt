#include <iostream>
using namespace std;

int main () {
    int num;
    
    do {
        //escolha um numero entra 1 a 10
        cout << "Digite um numero entre 1 e 10: ";
        cin >> num;
    } while (num < 1 || num > 10);
    
    //o numero escolhido ira aparecer como o numero que vc escolheu
    cout << "Voce digitou o numero " << num << ".";
    
    return 0;
}