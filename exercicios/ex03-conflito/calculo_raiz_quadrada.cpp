#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    system("cls");

    // Inicializa as variavéis
    double x = 0;
    char opc;
    
    // Ponto de reinicio
    inicio:

    // Mensagem inicial
    cout << "Seja Bem-Vindo(a)";
    cout << "|-----Calculadora de Raiz Quadrada-----|n";

    // Entrada do usuário
    cout << "Informe o valor da raiz: ";
    cin >> x;

    // Calcular as raízes
    double raiz_de_x = sqrt(x);
    
    // Imprimir no terminal
    cout<<"Raiz Quadrada de " << x << " = " << raiz_de_x << ".\n\n";
    
    // Reiniciar o programa
    cout << "Deseja calcular outra raiz? (s/n): ";
    cin >> opc;

    if(opc == 's' or opc == 'S'){
    goto inicio; 
   } 
    return 0;
}
