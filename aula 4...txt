#include <iostream>
using namespace std;

int main() {
    //valores de x e y
    int x = 10;
    int y = 20;

if (x > y) {
    //irá aparecer se x for maior que y
    cout << "x e maior que Y" << endl;
}
if (x < y) {
    //irá aparecer se x for menos que y
    cout << "x e menor que y" << endl;
}
if (x >= y) {
   //irá aparecer se x for maior ou igual a y
   cout << "x e maior ou igual a y" << endl;
}   
if (x <= y) {
    //irá aparecer se x for menor ou igual a y
    cout << "x e menor ou igual a y" << endl;
}   
if (x == y) {
    //irá aparecer se x for igual a y
    cout << "x e igual a y" << endl;
}
if (x != y) {
    //irá aparecer se x for diferente de y
    cout << "x e diferente de y" << endl;
}
    return 0;
}