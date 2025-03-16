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

ELEMENTO *inicio = NULL; // Ponteiro para o início da fila
ELEMENTO *final = NULL;  // Ponteiro para o final da fila

// Protótipos das funções
void criarFila();
void enfileirar();
void desenfileirar();
void mostrarListaCompleta();
void mostrarPrimeiroElemento();
void mostrarUltimoElemento();

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

// Funções (implementações vazias para o esqueleto)
void criarFila()
{
    // Implementação aqui
}

void enfileirar()
{
    // Implementação aqui
}

void desenfileirar()
{
    // Implementação aqui
}

void mostrarListaCompleta()
{
    // Implementação aqui
}

void mostrarPrimeiroElemento()
{
    // Implementação aqui
}

void mostrarUltimoElemento()
{
    // Implementação aqui
}