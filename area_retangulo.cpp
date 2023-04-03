#include <iostream>
using namespace std;
//calcular a area de um retangulo
int main() {
    //componentes da formula
    float base, altura, area;
    //medidas do retangulo usadas para fazer a conta
    cout << "Digite a base do retangulo: ";
    cin >> base;
    cout << "Digite a altura do retangulo: ";
    cin >> altura;
    //formula
    area = (base * altura);
    //resultado
    cout << "A área do retangulo é: " << area << endl;
     
    return 0;
}