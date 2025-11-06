#include <bits/stdc++.h>
using namespace std;

int main()
{
    string texte;
    while (getline(cin, texte))
    {
        bool ctl_ = true;
        bool ctlA = true;
        for (size_t i = 0; i < texte.size(); i++)
        {
           
            if (texte.at(i) == '_' && ctl_)
            {
                ctl_ = false;
                texte.replace(i, 1, "<i>");
            }else if (texte.at(i) == '_' && !ctl_)
            {
                ctl_ = true;
                texte.replace(i, 1, "</i>");
            }
            if (texte.at(i) == '*' && ctlA)
            {
                ctlA = false;
                texte.replace(i, 1, "<b>");
            }else if (texte.at(i) == '*' && !ctlA)
            {
                ctlA = true;
                texte.replace(i, 1, "</b>");
            }
            cout << texte[i];
        }
        cout << endl;
    }
}