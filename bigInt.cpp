#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void insertZero(string &sn1, string &sn2)
{
    int maxLen = max(sn1.size(), sn2.size());
    sn1.insert(sn1.begin(), maxLen - sn1.size(), '0');
    sn2.insert(sn2.begin(), maxLen - sn2.size(), '0');
}

void aritmetica(string sn1, string sn2, int carry, int seved, vector<int> &vec)
{
    if (sn1.empty() && sn2.empty()) return ;
    int dgt_1 = sn1.back() - '0';
    int dgt_2 = sn2.back() - '0';
    sn1.pop_back();
    sn2.pop_back();
    int sum = dgt_1 + dgt_2 + seved;
    vec.push_back(sum);
    if (sum >= 10) {
        seved = 1;
        carry++;
    } else seved = 0;
    return aritmetica(sn1, sn2, carry, seved, vec);
}

int main(){

    string s1, s2; cin >> s1 >> s2;
    vector<int> vec;

    insertZero(s1, s2);
    aritmetica(s1, s2, 0, 0, vec);
    reverse(vec.begin(), vec.end());

    cout << endl;
    cout << "SOMA: ";
    
    for (auto i : vec) cout << i;
}




