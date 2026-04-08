#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    system("cls");

    // Declaração das variaveis
    double x = 0;
    char opc;
    
    // Ponto de reinicio do programa
    inicio:

    // Mensagem inicial
    cout << "Boas Vindas!\n";
    cout << "|-----Calcule a Raiz Quadrada-----|\n";

    // Entrada do usuário
    cout << "Informe o valor da raiz: ";
    cin >> x;

    // Calculo da raiz
    double raiz_de_x = sqrt(x);
    
    // Impressão no terminal
    cout<<"Raiz quadrada = " << x;
    
    // Reiniciar o programa
    cout << "Deseja calcular novamente? (s/n): ";
    cin >> opc;

    if(opc == 's' or opc == 'S'){
    goto inicio; 
   } 
    return 0;
}
