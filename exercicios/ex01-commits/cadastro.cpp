#include <iostream>
#include <string>

using namespace std;

int main()
{
    system("cls");

    
    int idade = 0;
    char nome[20] = "";
    char nacionalidade[15] = "";
    string endereco = "";

    cout << "----CADASTRO----\n";

    cout << "Informe seu Nome: ";
    cin>>nome;

    cout<<"Informe sua Idade: ";
    cin>>idade;

    cout<<"Informe sua Nacionalidade: ";
    cin>>nacionalidade;

    fflush(stdin);
    cout<<"Informe seu Endereco: ";
    getline(cin,endereco);

    cout<<"\n\n-------Imprimindo Dados Informados-------";
    cout<<"\nNome: " << nome <<".";
    cout<<"\nIdade: " << idade <<".";
    cout<<"\nNacionalidade: " << nacionalidade <<".";
    cout<<"\nEndereco: " << endereco << ".";

    return 0;
}
