#include <bits/stdc++.h>
using namespace std;

int main(){
    int q; cin >> q;
    cin.ignore();
    while(q--)
    {
        string s1, s2;
        cin >> s1;
        cin >> s2;
        size_t maxLen = max(s1.size(), s2.size());
        bool maxS = false;
        if (s1.size() > s2.size()){
            maxLen = s1.size() - s2.size();
            maxS = true;
        }else maxLen =  s2.size() - s1.size();
        
        string newS;
        if (maxLen > 0){
            for (size_t i = 0; i < min(s1.size(), s2.size()); i++){
                newS.append(string(1, s1.at(i)));
                newS.append(string(1, s2.at(i)));
            }
            if (maxS) newS.append(s1.substr(min(s1.size(), s2.size())));
            else newS.append(s2.substr(min(s1.size(), s2.size())));
        }else
        {
            for (size_t i = 0; i < s1.size(); i++){
                newS.append(string(1, s1.at(i)));
                newS.append(string(1, s2.at(i)));
            }
        }
        cout << newS << endl;
    }
}