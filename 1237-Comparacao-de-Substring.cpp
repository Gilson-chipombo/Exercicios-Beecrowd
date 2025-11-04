#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1;
    cin.ignore();
    while (getline(cin, s1))
    {
        string s2; getline(cin, s2);
        string sbstr;
        size_t count = 0;

        for (size_t i = 0; i < s1.size(); i++)
        {
            for (size_t len = 0; len <= s1.size() - i; len++){
                sbstr = s1.substr(i, len);

                size_t pos = s2.find(sbstr);
                while (pos != string::npos)
                {   if (sbstr.size() > 0){
                        if (sbstr.size() > count)
                            count = sbstr.size();

                    }
                    pos = s2.find(sbstr, pos + 1);
                }
            }
        }
        cout << count << endl;
    }
    return (0);
}