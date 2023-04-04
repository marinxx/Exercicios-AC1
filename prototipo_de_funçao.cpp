#include <iostream>
using namespace std;

//operaçao de soma
int Soma (int a, int b)
{
    //resultado é formado por a mais b
    int Resultado;
    Resultado = a + b;
    return Resultado;
}

int main()
{
    //numeros escolhidos para a operaçao
    cout << Soma(9,6) << endl;
}