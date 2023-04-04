#include <iostream>
using namespace std;

int main() {
    // valores de a, b e c
    int a = 15;
    int b = 3;
    int c = 10;

if (a > b && b < c) {
    //se a for maior que b e b menor que c
    cout << "A ordem e a, b, c" << endl;
}
if (a > b || b > c) {
    //se a for maior que b ou b for maior que c
    cout << "pelo menos uma das condiçoes e verdadeira" << endl;
}
if (!(a == b)) {
    //o que esta em parenteses nao é verdadeiro
   cout << "a e diferente de b" << endl;
}   

    return 0;
}