#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q; cin >> q;
    cin.ignore();
    while(q--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        if (s2.size() > s1.size()) cout << "nao encaixa" << endl;
        else if (s1.substr(s1.size() - s2.size()) == s2) cout << "encaixa" << endl;
        else cout << "nao encaixa" << endl;
    }
}