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

/*
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1, s2;
    while (getline(cin, s1) && getline(cin, s2)) {
        size_t max_len = 0;

        for (size_t i = 0; i < s1.size(); i++) {
            for (size_t j = 1; j <= s1.size() - i; j++) {
                string sub = s1.substr(i, j);
                if (s2.find(sub) != string::npos)
                    max_len = max(max_len, sub.size());
                else
                    break; // não precisa testar substrings maiores a partir de i
            }
        }
        cout << max_len << endl;
    }
    return 0;
}

*/