#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    //notas das provas do primeiro semestre
    double nota1, nota2, nota3;
    //nota da primeira prova
    cout << "Digite a sua primeira nota do semestre >>> ";
    cin >> nota1;
    //nota da segunda prova
    cout << "Digite a sua segunda nota do semestre >>> ";
    cin >> nota2;
    //nota da terceira prova
    cout << "Digite a sua terceira nota do semestre >>> ";
    cin >> nota3;
    //conta para conseguir obter os valores da media de cada prova
    double media1, media2, media3;
    media1 = (nota1 * 0.15);
    media2 = (nota2 * 0.35);
    media3 = (nota3 * 0.5);
    // conta para conseguir a media total
    double soma = (media1 + media2 + media3);
    cout << "A sua media no semestre foi: " << soma << endl << endl;
    //se a media for maior ou igual a 5, esta aprovado, se for menor esta reprovado
    if (soma >= 5) {
        cout << "Parabens, voce foi aprovado!" << endl;
}else{
    cout << "Eita, voce foi reprovado!" << endl;
}
    return 0;
}