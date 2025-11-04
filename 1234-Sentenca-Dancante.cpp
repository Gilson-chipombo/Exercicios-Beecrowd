#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    while(getline(cin, s))
    {
        bool first = true;
        bool sec = true;
        for (size_t i = 0; i < s.size(); i++)
        {
            if ((s[i] >=65 && s[i] <=90) || (s[i] >=97 && s[i] <=122))
            {
                if (first){
                     s[i] = toupper(s[i]);
                     first = false;
                }
                else{
                    if (sec){
                        s[i] = tolower(s[i]);
                        sec = false;
                    }
                    else {
                        s[i] = toupper(s[i]);
                        sec = true;
                    }
                }
            }else s[i] = s[i];
        }
        cout << s << endl;
    }
}