//calculo
#include <iostream>
#include <cmath>
using namespace std;

//teorema de baskara
int main() {
    //componentes da conta
    float a, b, c, x1, x2, delta; 
    
    //o valor de a
    cout << "Digite o valor de a: ";
    cin >> a;
    //o valor de b
    cout << "Digite o valor de b: ";
    cin >> b;
    //o valor de c
    cout << "Digite o valor de c: ";
    cin >> c;
    
    //folmula de delta
    delta = pow(b, 2) - 4 * a * c;
    
    //formula de baskara
    if (delta >= 0) {
        //primeiro resultado
        x1 = (-b + sqrt(delta)) / (2 * a);
        //segundo resultado
        x2 = (-b - sqrt(delta)) / (2 * a);
        
        //quando as raizes sao numeros positivos
        cout << "As raizes da equacao sao: " << x1 << " e " << x2 << endl;
    }
    //outro resultado
    else {
        //quando as raizes sao numeros negativos
        cout << "A equacao nao tem raizes reais." << endl
}
    delta = pow(b, 2) - 4 * a * c;
    
    //formula de baskara
        
        //quando as raizes sao numeros positivos
        cout << "As raizes da equacao sao: " << x1 << " e " << x2 << endl;
    }
    //outro resultado
    else {
        //quando as raizes sao numeros negativos
        cout << "A equacao nao tem raizes reais." << endl;
    }

    return 0;
}