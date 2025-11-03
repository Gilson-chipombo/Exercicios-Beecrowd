#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<int, int> map = {
        {0, 6}, {1, 2}, {2, 5},
        {3, 5}, {4, 4}, {5, 5},
        {6, 6}, {7, 3}, {8, 7},
        {9, 6},
    };
    
    int q; cin >> q;
    cin.ignore();
    while (q--)
    {
        string V; cin >> V;
        int sum = 0;
        for (size_t i = 0; i < V.size(); i++)
        {
            int pos = V[i] - '0';
            sum += map.at(pos);
        }
        cout << sum << " leds" << endl;
    }
}