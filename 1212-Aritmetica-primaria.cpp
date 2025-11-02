
#include <bits/stdc++.h>
using namespace std;
void insertZero(string &sn1, string &sn2)
{
    int maxLen = max(sn1.size(), sn2.size());
    sn1.insert(sn1.begin(), maxLen - sn1.size(), '0');
    sn2.insert(sn2.begin(), maxLen - sn2.size(), '0');
}
int aritmetica(string sn1, string sn2, int carry, int seved)
{
    if (sn1.empty() && sn2.empty()) return carry;
    int dgt_1 = sn1.back() - '0';
    int dgt_2 = sn2.back() - '0';
    sn1.pop_back();
    sn2.pop_back();
    int sum = dgt_1 + dgt_2 + seved;
    if (sum >= 10) {
        seved = 1;
        carry++;
    } else seved = 0;
    return aritmetica(sn1, sn2, carry, seved);
}
int main()
{
    unsigned int v1, v2;
    while (42)
    {
        cin >> v1 >> v2;
        if (v1 == 0 && v2 == 0) break;

        string sn1 = to_string(v1);
        string sn2 = to_string(v2);
        
        insertZero(sn1, sn2);
        
        int count = aritmetica(sn1, sn2, 0, 0);
        if (count > 1) cout << count << " carry operations." << endl;
        else if (count == 1) cout << count << " carry operation." << endl;
        else  cout << "No carry operation." << endl;
    }
    return 0;
}