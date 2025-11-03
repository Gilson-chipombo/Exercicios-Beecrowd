#include <bits/stdc++.h>
using namespace std;
int main()
{
    int q; cin >> q;
    cin.ignore();
    while(q--)
    {
        string str;
        getline(cin, str);

        for (size_t i = 0; i < str.size(); i++)
            if ((str.at(i) >= 65 && str.at(i) <= 90) || (str.at(i) >= 97 && str.at(i) <= 122)) str.at(i) = str.at(i) + 3;
        reverse(str.begin(), str.end());
        for (size_t i = str.size() / 2; i < str.size(); i++)
            str.at(i) = str.at(i) - 1;
        cout << str << endl;
    }
}