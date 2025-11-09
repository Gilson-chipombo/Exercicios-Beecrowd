#include <bits/stdc++.h>
using namespace std;

int main(){
    int q; cin >> q;
    while (q--)
    {
        string s;
        int salto;
        cin >> s >> salto;
        for (size_t i = 0; i < s.size(); i++)
        {
            if (s[i] + salto < 90){
                if (s[i] + salto >= 74 && s[i] < 77) s[i] = s[i] + salto + 6;
                else s[i] = s[i] + salto; 
            }else{
                if (s[i] - salto < 79) s[i] = s[i] - salto + 6;
                else s[i] = s[0] - salto; 
            }   
            cout << s[i];          
        }
        cout << endl;
    }
}