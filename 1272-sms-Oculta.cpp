#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q; cin >> q;
    cin.ignore();
    while(q--)
    {
        string s;
        getline(cin, s);
        
        if (s.at(0) != ' ') cout << s.at(0);
        for (size_t i = 1; i < s.size(); i++)
            if (s.at(i) != ' ' &&  s.at(i - 1) == ' ') cout << s.at(i);
        cout << endl;
    }
}