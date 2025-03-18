#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

using namespace std;
using std::string;

typedef struct Telemento
{
    int valor;
    struct Telemento *proximo;
} ELEMENTO;

ELEMENTO *fila = NULL;
ELEMENTO *inicio = NULL; // Ponteiro para o início da fila
ELEMENTO *final = NULL;  // Ponteiro para o final da fila

// Funções
void criarFila()
{
    // criar fila - falta testar

    if (fila != NULL)
    {
        cout << "Ja existe uma lista criada\n";
    }
    else
    {
        fila = (ELEMENTO *)malloc(sizeof(ELEMENTO));
        if (fila == NULL)
        {
            cout << "Memoria Insuficiente\n";
        }
        else
        {
            // apontar o seu proximo para NULO:
            fila->proximo = NULL;
            cout << "Informe um valor:\n";
            cin >> fila->valor;
        }
    }
}

void enfileirar()
{
    // enfileirar
    // void adicionarElementoFim() - função base de lucas
    // {
    //     if (listaSimples == NULL)
    //     {
    //         criarLista();
    //     }
    //     else
    //     {
    //         ELEMENTO *ptrtemp = (ELEMENTO *)malloc(sizeof(ELEMENTO));
    //         if (ptrtemp == NULL)
    //         {
    //             cout << "Memoria Insuficiente\n";
    //         }
    //         else
    //         {
    //             // apontar o seu proximo para NULO:
    //             ptrtemp->proximo = NULL;
    //             cout << "Informe um valor:\n";
    //             cin >> ptrtemp->valor;
    //             ELEMENTO *temp = listaSimples;
    //             while (temp->proximo != NULL)
    //             {
    //                 temp = temp->proximo;
    //             }
    //             // nessse ponto do codigo eu cheguei ao ultimo
    //             // ATUALIZAR TUDO
    //             temp->proximo = ptrtemp;
    //         }
    //     }
    // }
}

void desenfileirar()
{
    // desenfileirar
    // void removerUmElemento() - função base de lucas
    // {
    //     if (listaSimples == NULL)
    //     {
    //         cout << "A lista esta vazia ou nao existe lista\n";
    //     }
    //     else
    //     {
    //         cout << "informe um valor a ser removido:";
    //         int x;
    //         cin >> x;
    //         ELEMENTO *temp = listaSimples;
    //         // testar 3 casos, se é o primeiro, o ultimo ou nao:

    //         // se ta no primeiro elemento
    //         if (temp->valor == x)
    //         {
    //             listaSimples = temp->proximo;
    //             free(temp);
    //         }
    //         else
    //         {
    //             temp = listaSimples;
    //             while (temp->proximo->proximo != NULL)
    //             {
    //                 temp = temp->proximo;
    //             }
}

void mostrarListaCompleta()
{
    // fila completa
    // void imprimeElementosDoInicio() - função base de lucas
    // {
    //     if (listaSimples == NULL)
    //     {
    //         cout << "A lista esta vazia ou nao existe lista\n";
    //     }
    //     else
    //     {
    //         ELEMENTO *temp = listaSimples;
    //         cout << temp->valor << "\n";
    //         while (temp->proximo != NULL)
    //         {
    //             temp = temp->proximo;
    //             cout << temp->valor << "\n";
    //         }
    //     }
    // }
}

void mostrarPrimeiroElemento()
{
    // primeiro elemento
}

void mostrarUltimoElemento()
{
    // ultimo elemento
}

int main()
{
    int opcao;

    do
    {
        cout << "\nMenu:\n";
        cout << "1. Criar Fila\n";
        cout << "2. Enfileirar\n";
        cout << "3. Desenfileirar\n";
        cout << "4. Mostrar Lista Completa\n";
        cout << "5. Mostrar Primeiro Elemento\n";
        cout << "6. Mostrar Ultimo Elemento\n";
        cout << "0. Sair\n";
        cout << "Escolha uma opcao: ";
        cin >> opcao;

        switch (opcao)
        {
        case 1:
            criarFila();
            break;
        case 2:
            enfileirar();
            break;
        case 3:
            desenfileirar();
            break;
        case 4:
            mostrarListaCompleta();
            break;
        case 5:
            mostrarPrimeiroElemento();
            break;
        case 6:
            mostrarUltimoElemento();
            break;
        case 0:
            cout << "Saindo...\n";
            break;
        default:
            cout << "Opcao invalida! Tente novamente.\n";
        }
    } while (opcao != 0);

    return 0;
}
