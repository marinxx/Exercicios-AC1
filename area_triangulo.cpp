#include <iostream>
using namespace std;
//calcular a area de um triangulo
int main() {
    //componentes da formula
    float base, altura, area;
    //medidas do traingulo usadas para fazer a conta
    cout << "Digite a base do triângulo: ";
    cin >> base;
    cout << "Digite a altura do triângulo: ";
    cin >> altura;
    //formula
    area = (base * altura) / 2;
    //resultado
    cout << "A área do triângulo é: " << area << endl;
     
    return 0;
}