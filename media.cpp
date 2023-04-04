#include <stdlib.h>
using namespace std;
 int main() {
     //variaveis da conta
     double  nota1, nota2, nota3, nota4;
     //valor da primeira nota
     cout << "Digite a sua primeira nota do semstre: >>> ";
     cin >> nota1;
     //valor da segunda nota
     cout << "Digite a sua segunda nota do semestre >>> ";
     cin >> nota2;
     //valor da terceira nota
     cout << "Dogite a sua terceira nota do semestre >>> ";
     cin >> nota3;
     //valor da quarta nota
     cout << "Digite a sua quarta nota do semestre >>> ";
     cin >> nota4;
     //conta para o valor da media
     double soma = (nota1 + nota2 + nota3 + nota4);
     soma = (soma / 4);
     //resultados
     cout << " A sua media no semestre foi: " << soma << endl << endl;
     if (soma >= 7){
         cout << "Parabens, voce foi aprovado!" << endl;
         }else{
             cout << "Eita, voce foi reprovado!" << endl;
         }
    return 0;
 }