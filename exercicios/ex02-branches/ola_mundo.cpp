#include <iostream>
using namespace std;

int main(){
    system("cls");

    // Declaração de variavel
    string nome;

    // Mensagem inicial
    cout << "Olá Mundo!\n";

    //Saudação Inicial
    cout << "Seja bem-vindo(a) ao programa\n";
    cout << "Tudo bem com voce? :)";

    // Entrada do nome do usuario
    cout << "Qual o seu nome? ";
    cin >> nome;

    // Saudação personalizada
    cout << "Que nome bonito ;)\n";
    cout << "Olá, " << nome << "!";
    cout << "Prazeremteconhecer.";

    return 0;
}