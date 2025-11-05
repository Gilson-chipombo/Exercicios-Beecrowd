#include <bits/stdc++.h>
using namespace std;

int main(){
    int q; cin >> q;
    cin.ignore();
    while(q--)
    {
        string s1, s2;
        getline(cin, s1);
        getline(cin, s2);
        size_t maxLen = max(s1.size(), s2.size());
        if (s1.size() > maxLen) maxLen = s2.size() - maxLen;
        else maxLen =  maxLen - s1.size();
        
        string newS;
        if (maxLen > 0){
            for (size_t i = 0; i < maxLen; i++)
                 newS.append(s1.at(i)+""+s2.at(i));
            newS.append(s2.substr(maxLen));
        }else
        {
            for (size_t i = 0; i < s1.size(); i++)
                newS.append(string(1, s1.at(i)));
        }
        cout << newS << endl;
    }
}