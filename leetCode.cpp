#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int reverse(int x) {
        bool f = false;
        string s = to_string(x);
        if (s[0] == '-'){
            f = true;
            x = -1 * x;
        }
        std::reverse(s.begin(), s.end());
        long y = stol(s);
        if (y < INT16_MIN|| y > INT_MAX) return 0;
        if (f) return  -1 * y;
        return y;
    }
};

int main()
{
    Solution b;
    cout << b.reverse(-900000) << endl;
}