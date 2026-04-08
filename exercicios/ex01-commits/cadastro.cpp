#include <iostream>
#include <string>

using namespace std;

int main()
{
    system("cls");

    // Declaração de variavéis
    int idade = 0;
    char nome[20] = "";
    char nacionalidade[15] = "";
    string endereco = "";
    char genero[12] = "";

    // Inicio do programa
    
    cout << "----CADASTRO----\n";

    cout << "Informe seu Nome: ";
    cin>>nome;
    cout << "----------------\n";

    cout<<"Informe sua Idade: ";
    cin>>idade;
    cout << "----------------\n";

    cout<<"Informe sua Nacionalidade: ";
    cin>>nacionalidade;
    cout << "----------------\n";

    fflush(stdin);
    cout<<"Informe seu Endereco: ";
    getline(cin,endereco);
    cout << "----------------\n";

    cout<<"Informe seu Genero: ";
    cin>>genero;
    cout << "-------------------------------\n";

    // Impressão de dados no terminal
    cout<<"\n\n-------Imprimindo Dados Informados-------";
    cout<<"\nNome:" << nome;
    cout<<"\nIdade: " << idade;
    cout<<"\nNacionalidade: " << nacionalidade;
    cout<<"\nEndereco: " << endereco;
    cout<<"\nGenero: " << genero;

    return 0;
}
