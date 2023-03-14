//calculo
#include <iostream>
using namespace std;

//area de um triangulo retangulo
int main() {
    //componentes do calculo
    float base, altura, area;
    
    //medida da base do triangulo retangulo
    cout << "Digite a base do triangulo retangulo: ";
    cin >> base;
    //medida da altura do triangulo retangulo
    cout << "Digite a altura do triangulo retangulo: ";
    cin >> altura;
    
    //formula para calcular a area do retangulo
    area = (base * altura) / 2;
    
    //resultado obtido
    cout << "A area do triangulo retangulo eh: " << area << endl;

    return 0;
}