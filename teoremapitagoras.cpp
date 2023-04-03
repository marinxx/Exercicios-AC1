//calculo
#include <iostream>
#include <cmath>
using namespace std;

//teorema de pitagoras 
int main() {
    //componentes do calculo
    float cateto1, cateto2, hipotenusa;
    
    //medida de a
    cout << "Digite o comprimento do cateto 1: ";
    cin >> cateto1;
    //medida de b
    cout << "Digite o comprimento do cateto 2: ";
    cin >> cateto2;
    
    //formula para calcular o valor de c2
    hipotenusa = sqrt(pow(cateto1, 2) + pow(cateto2, 2));
    
    //resultado obtido
    cout << "A hipotenusa eh igual a: " << hipotenusa << endl;

    return 0;
}
