#include <bits/stdc++.h>
using namespace std;

int main()
{
    { 
        /*
        string str="Gilson";
        auto f = str.begin();
        auto l = str.end()-1;
        cout << "First Char: "<< *f << endl;
        cout << "last Char: "<< *l << endl;

        for(auto it = str.begin(); it != str.end(); ++it) cout << *it;
        cout << endl;

        for(auto it = str.rbegin(); it != str.rend(); ++it) cout << *it;
        cout<<endl;

        cout << str.max_size() << endl; //Retorna: o tamanho máximo teórico que a string pode atingir no sistema.

        str.resize(3);
        cout << str << endl;

        str.resize(6, '!');
        cout << str << endl;
        */
        /*
            capacity()
            Retorna: a quantidade de memória atualmente alocada (em número de caracteres).
            Pode ser maior ou igual a size() — a string reserva espaço extra para evitar realocações frequentes.
        */
       // cout << str.capacity() << endl;

        /*
            clear()
            Apaga todo o conteúdo da string, deixando-a vazia (size() == 0)
        */
        //str.clear();
        //cout << str.empty() << endl;
    }

    {
        //Element access
        string str = "Gilson";
        cout << str.at(0) << endl;
        cout << str.at(str.size() -1) << endl;

        cout << str.front() << endl;
        cout << str.back() << endl;

        str.front() = 'W';
        str.back() = 'N';
        cout << str << endl;

    }
    return 0;
}