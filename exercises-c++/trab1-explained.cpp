#include <iostream>
using namespace std;

int main()
{
    char continuar;
    do
    {
        int p, *ptr1, *ptr2;

        // Solicita entrada do usuário
        cout << "\nDigite um valor inteiro para p: ";
        cin >> p;
        ptr1 = &p;

        cout << "\nDigite um valor inteiro para ptr2: ";
        int valor;
        cin >> valor;
        ptr2 = new int;
        *ptr2 = valor;

        // Exibe os endereços e valores
        cout << "\nEnderecos - p: " << &p << "\t\tptr1: " << &ptr1 << "\t\tptr2: " << &ptr2;
        cout << "\n\nConteudo de ptr2: " << ptr2 << "\tconteudo do endereco apontado: " << *ptr2;
        cout << "\n\nConteudo de p: " << p;
        cout << "\nconteudo do endereco apontado por ptr1: " << *ptr1;
        cout << "\nconteudo do endereco apontado por ptr2: " << *ptr2;

        // Aloca um novo espaço de memória para ptr1
        ptr1 = new int;
        cout << "\n\nDigite um valor inteiro para ptr1: ";
        cin >> *ptr1;

        cout << "\n\nConteudo de ptr1: " << ptr1 << "\tconteudo de ptr1: " << *ptr1;
        cout << "\n\nConteudo de p: " << p;
        cout << "\nconteudo do endereco apontado por ptr1: " << *ptr1;
        cout << "\nconteudo do endereco apontado por ptr2: " << *ptr2;

        // Libera a memória alocada dinamicamente
        delete ptr1;
        delete ptr2;

        cout << "\n\nDeseja repetir a rotina? (s/n): ";
        cin >> continuar;
    } while (continuar == 's' || continuar == 'S');

    return 0;
}
