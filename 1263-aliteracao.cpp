#include <bits/stdc++.h>
using namespace std;


int recursao(size_t &i, vector<char>&vec, int sum)
{
    int k = i + 1;
    if (i == vec.size()) return 1;
    if (vec[i] == vec[k])
    {
        recursao(++i, vec, ++sum);   
    }else {
         ++sum;
        return 1;
    }
    return (sum);
}

int aliteration(string &str)
{
    int k, count = 0;
    vector<char>vec;
    vec.push_back(tolower(str[0]));
    for (size_t i = 1; i < str.size(); i++)
    {
        if (isupper(str[i])) str[i] = tolower(str[i]);
        if (isspace(str[i - 1])) vec.push_back(str[i]);
    }

    for (size_t i = 0; i < (vec.size() - 1); i++)
    {
        k = i + 1;
        if (vec[i] == vec[k])
            count += recursao(i, vec, 0);
    }
    return (count);
}

int main()
{
    string str;
    while (getline(cin, str))
    {
        cout << aliteration(str) << endl;
    }
}


/*
#include <bits/stdc++.h>
using namespace std;

int main() {
    string linha;

    while (getline(cin, linha)) {
        stringstream ss(linha);
        string palavra;
        vector<char> iniciais;

        // Extrai a primeira letra de cada palavra, tudo minúsculo
        while (ss >> palavra) {
            iniciais.push_back(tolower(palavra[0]));
        }

        int aliteracoes = 0;
        char anterior = 0;
        bool dentro = false;

        for (int i = 0; i < iniciais.size(); i++) {
            if (iniciais[i] == anterior) {
                if (!dentro) {
                    aliteracoes++;
                    dentro = true; // marca que já contamos esse grupo
                }
            } else {
                dentro = false; // quebra o grupo
            }
            anterior = iniciais[i];
        }

        cout << aliteracoes << endl;
    }
    return 0;
}
*/