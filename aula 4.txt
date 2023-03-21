#include <iostream>
#include <string>
using namespace std;

int main() {
    //variaveis do jogo
    int life;
    float energy;
    bool status;
    string character;
    
    //unidade ou quantidade das variaveis
    life = 5;
    energy = 99.99f;
    status = true;
    character = "Mega Man";
    
    //para mostrar ao jogador as variaveis e suas quantidades
    cout<<life<<endl;
    cout<<energy<<endl;
    cout<<status<<endl;
    cout<<character<<endl;

    return 0;
}