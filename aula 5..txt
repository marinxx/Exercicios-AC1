#include <iostream>
using namespace std;

int main () {
    //o letra i representa o numero 1 
    int num, i = 1;
    
    //escolher um numero inteiro positivo
    cout << "Digite um numero inteiro positivo: ";
    cin >> num;
    
    while (i <= num) {
        //ira aparecer todos os numeros maiores e igual a 1 e menos ou igual ao numero escolhido
        cout << i << " ";
        i++;
    }
    
    return 0;
}