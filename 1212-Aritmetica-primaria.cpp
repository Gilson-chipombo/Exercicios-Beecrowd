
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

/*
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int a = 1000;
    int b = 1;

    string sa = to_string(a);
    string sb = to_string(b);

    // iguala o tamanho com zeros à esquerda
    int maxLen = max(sa.size(), sb.size());
    sa.insert(sa.begin(), maxLen - sa.size(), '0');
    sb.insert(sb.begin(), maxLen - sb.size(), '0');

    cout << sa << endl;  // 1000
    cout << sb << endl;  // 0001

    // exemplo: soma dígito a dígito
    string resultado;
    int carry = 0;
    for (int i = maxLen - 1; i >= 0; i--) {
        int soma = (sa[i] - '0') + (sb[i] - '0') + carry;
        carry = soma / 10;
        resultado.push_back((soma % 10) + '0');
    }
    if (carry) resultado.push_back(carry + '0');
    reverse(resultado.begin(), resultado.end());

    cout << "Resultado: " << resultado << endl;  // 1001
}


*/