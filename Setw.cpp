#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int number(string& s)
{
    string one = "one";
    string two = "two";
    string three = "three";

    int count = 0;
    for (size_t i = 0; i < one.size(); i++)
    {
        if (s.find(one[i]) != string::npos)
            count++;
    }
    if (count >= 2) return 1;

    count = 0;
    for (size_t i = 0; i < two.size(); i++)
    {
        if (s.find(two[i]) != string::npos)
            count++;
    }
    if (count >= 2) return 2;

    count = 0;
    for (size_t i = 0; i < three.size(); i++)
    {
        if (s.find(three[i]) != string::npos)
            count++;
    }
    if (count >= 2) return 3;

    return 0;
}
int main(){
    
    int q; cin >> q;
    cin.ignore();
    while (q--)
    {
        string s;
        getline(cin, s);
        if (number(s) == 1) cout << "1" << endl;
        else if (number(s) == 2) cout << "2" << endl;
        else cout << "3" << endl; 
    }  
}
