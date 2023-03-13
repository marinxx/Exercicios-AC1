#include <iostream>
using namespace std;

int main() {
    //de acordo com o raio, a area sera calculada
    float raio, area;
    //o numero pi eh sempre o mesmo
    const float PI = 3.14159;
    
    //interface do usuario
    cout << "Digite o raio do circulo: ";
    //o valor do raio do circulo
    cin >> raio;
    
    //a formula para a area ser calculada
    area = PI * raio * raio;
    
    //resultado
    cout << "A area do circulo eh: " << area << endl;

    return 0;
}