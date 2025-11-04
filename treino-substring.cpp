#include <bits/stdc++.h>
using namespace std;

int main()
{
    /*
        O que é uma substring?
        Uma substring é qualquer sequência contínua de caracteres dentro de uma string.
        Ex:
        string s = "programar";
        As substrings possíveis incluem:

        "p", "pr", "pro", "rogram", "ramar", etc.

        Apenas lembre: os caracteres devem ser contíguos (sem pular posições).
    */
   {
        string s = "programar";
        string sub = s.substr(0, 3);
        cout << sub << endl;

        s = "abcdef234";
        cout << s.substr(0, 3) << endl; //abc
        cout << s.substr(2, 2) << endl; //cd
        cout << s.substr(3) << endl;    //def234
    }

    cout << endl;
    cout << endl;
    
    {
        // 3. Encontrar uma substring dentro de outra: find()
        string s = "programar";
        size_t pos = s.find("gram");

        if (pos != string::npos) cout << "encontrado na pos: " << pos << endl;
        else cout << "Nao encontrado" << endl;
    }

    cout << endl;
    cout << endl;
    
    {
        string s = "banaana";
        string alvo = "a";

        size_t pos = s.find(alvo);
        while (pos != string::npos)
        {
            cout << "Encontrado na pos = " << pos << endl;
            pos = s.find(alvo, pos + 1); //procura a partir da proxima posicao
        }
    }

    cout << endl;
    cout << endl;
    
    {
        //Remover ou substituir substrings
        string s = "programar";
        s.erase(0, 3);
        cout << s << endl;

        s.replace(0, 3, "uva");

        cout << s << endl;
    }

    cout << endl;
    cout << endl;

    {
        //Comparar substrings
        string s1 = "banana";
        string s2 = "ban";

        if (s1.substr(0, 3) == s2) cout << "Comeca com ban" << endl;

        if (s1.rfind("na", 0) == 0) //verifica se comeca com na
            cout << "Comeca com na" << endl;
    }

    {
        //Substring em loops (gerar todas as combinações)
        string s = "abcd";
        for (size_t i = 0; i < s.size(); i++)
        {
            for (size_t len = 0; len <= s.size() - i; len++)
                cout << s.substr(i, len) << endl;
        }
        
    }
    
    cout << endl;
    cout << endl;

    {
        string s = "Hello Good Wordl";
        stringstream ss(s);
        string word;

        while (ss >> word) cout << word << endl;
    }


}