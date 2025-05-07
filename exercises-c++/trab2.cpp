#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;


struct produto
{
    int cod;
    string nome; 

};

void insere(produto lista[], int &t, int tamanho);
void exibe(produto lista[], int t);
void elemento(produto lista[], int t);
void ordena(produto lista[], int t);
int buscaSequencial(produto lista[], int cod, int t);

int main()
{
    produto lista[5]; 
    int tam = 0, op, cod, posicao;

    do
    {
        system("cls");
        cout << "\nMenu - LISTA \n";
        cout << "\n0- Reiniciar a LISTA";
        cout << "\n1- Inserir codigo na LISTA";
        cout << "\n2- Exibir LISTA";
        cout << "\n3- Exibe tamanho da LISTA";
        cout << "\n4- Exibe um elemento da lista";
        cout << "\n5- Ordena lista";
        cout << "\n6- Procura elemento na lista";
        cout << "\n7- Sair";
        cout << "\nOpcao: ";
        cin >> op;
        system("cls");

        switch (op)
        {
        case 0:
            tam = 0;
            break;
        case 1:
            insere(lista, tam, 5);
            break;
        case 2:
            exibe(lista, tam);
            break;
        case 3:
            cout << "\nTamanho da Lista: " << tam << endl;
            break;
        case 4:
            elemento(lista, tam);
            break;
        case 5:
            ordena(lista, tam);
            break;
        case 6:
            cout << "\nQual codigo a ser procurado? ";
            cin >> cod;
            posicao = buscaSequencial(lista, cod, tam);
            if (posicao == -1)
                cout << "\nAtencao! Lista vazia\n";
            else if (posicao == -2)
                cout << "\nAtencao! Codigo nao encontrado\n";
            else
                cout << "\nCodigo encontrado na posicao: " << posicao + 1 << "\n";
            break;
        case 7:
            cout << "\nFinalizando o programa da LISTA\n";
            break;
        default:
            cout << "\nOpcao invalida\n";
        }

        cout << "\n\n";
        system("pause");
    } while (op != 7);

    return 0;
}

void insere(produto lista[], int &t, int tamanho)
{
    if (t == tamanho)
    {
        cout << "\nAtencao! Lista cheia\n";
    }
    else
    {
        cout << "\nDigite o codigo do produto a ser inserido: ";
        cin >> lista[t].cod;
        cout << "Digite o nome do produto: ";
        cin.ignore();                
        getline(cin, lista[t].nome); 
        t++;
    }
}

void exibe(produto lista[], int t)
{
    if (t == 0)
        cout << "\nAtencao! Lista vazia\n";
    else
    {
        cout << "\nRelacao dos Produtos\n";
        for (int x = 0; x < t; x++)
            cout << x + 1 << " - Codigo: " << lista[x].cod << ", Nome: " << lista[x].nome << endl;
    }
}

void elemento(produto lista[], int t)
{
    int posicao;
    if (t == 0)
    {
        cout << "\nAtencao! Lista vazia\n";
        return;
    }
    cout << "\nQual a posicao que deseja? ";
    cin >> posicao;
    posicao = abs(posicao) - 1;
    if (posicao >= t)
        cout << "\nAtencao! Nenhum produto armazenado ou posicao inexistente\n";
    else
        cout << "\nPosicao " << posicao + 1 << " - Codigo: " << lista[posicao].cod
             << ", Nome: " << lista[posicao].nome << endl;
}

void ordena(produto lista[], int t)
{
    if (t == 0)
    {
        cout << "\nAtencao! Lista vazia\n";
    }
    else
    {
        for (int x = 0; x < t - 1; x++)
        {
            int aux = x;
            for (int y = x + 1; y < t; y++)
                if (lista[aux].cod > lista[y].cod)
                    aux = y;
            produto temp = lista[aux];
            lista[aux] = lista[x];
            lista[x] = temp;
        }
        cout << "\nLista Ordenada\n";
    }
}

int buscaSequencial(produto lista[], int cod, int t)
{
    if (t == 0)
        return -1;
    for (int x = 0; x < t; x++)
        if (lista[x].cod == cod)
            return x;
    return -2;
}