#include <iostream>
using namespace std;

int main() {
    //numeros e variaveis matematicas usadas para contas
    int num1 = 10, num2 = 4;
    int soma, multi, divi, modulo, subt;

    //simbolos usados para cada operação
    soma = num1 + num2;
    multi = num1 * num2;
    divi = num1 / num2;
    modulo = num1 % num2;
    subt = num1 - num2;
    
    //para mostrar ao jogador os resultados das operacoes
    cout<<soma<<endl;
    cout<<multi<<endl;
    cout<<divi<<endl;
    cout<<modulo<<endl;
    cout<<subt<<endl;

    return 0;
}