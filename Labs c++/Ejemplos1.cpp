#include <iostream>
#include <string>

using namespace std;

int main() {
int entero;
float flotante;
char caracter;
string cadena;

cout <<"Ingrese numero entero:";
cin >> entero;

cout << "Ingrese un número flotante: ";
cin >> flotante;

cout << "Ingrese un carácter: ";
cin >> caracter;

cout << "Ingrese una cadena de caracteres:";
cin.ignore(); //ignorar el '\n' dejado por//
//cin >> caracter;

getline(cin,cadena);
// Lee una línea de texto desde la//entrada estándar (cin) y la almacena en la variable cadena

cout<<"Ingrese numero entero:"<<entero<<endl;

cout <<"Ingrese numero entero:"<<flotante<<endl;

cout <<"Ingrese numero entero:"<<caracter<<endl;

cout<<"Ingrese numero entero:"<<cadena<<endl;

cout<<"...................................."<<endl;

return 0;






}