#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    system("cls");

    double x = 0;
    char opc;
    
    inicio:

    cout << "Seja Bem-Vindo(a)";
    cout << "|-----Calculadora de Raiz Quadrada-----|n";

    cout << "Informe o valor da raiz: ";
    cin >> x;

    double raiz_de_x = sqrt(x);
    
    cout<<"Raiz Quadrada de " << x << " = " << raiz_de_x << ".\n\n";
    
    cout << "Desejacalcular.outra raiz? (s/n): ";
    cin >> opc;

    if(opc == 's' or opc == 'S'){
    goto inicio; 
   } 
    return 0;
}
