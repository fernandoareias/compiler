#include <iostream>
#include "parser.hpp"

using namespace std;

int main()
{
    Parser tradutor;
    try
    {
        tradutor.Start();
    }
    catch (SyntaxError)
    {
        cout << "\n";
        cout << "Erro de syntaxe";
    }

    cout << endl;
}