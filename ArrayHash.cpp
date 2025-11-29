#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main(){
    
    string AB = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int q; cin >> q;
    while (q--)
    {
        int sum = 0;
        int L; 
        cin >> L;
        for (int i = 0; i < L; i++)
        {
            string s;
            cin.ignore();
            getline(cin, s);
            cout << s << endl;
            for (size_t j = 0; j < s.size(); j++)
            {
                sum += AB.find(s[j]) + i + s.find(s[j]);
                cout << AB.find(s[j]) << "+" << i<<  "+" << s.find(s[j]) << endl;
            }
        }
        cout << sum << endl;
    }
}
