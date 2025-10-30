#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;

void expr(string str){
    stack<char> s;

    for (size_t i = 0; i < str.size(); i++){
        if (str[i] == '(') s.push(str[i]);
        if (str[i] == ')')
        {
            if (!s.empty()){
                if (s.top() == '(' && str[i] == ')') s.pop();
            }else
            {
                cout << "incorrect" << endl;
                return ;
            }   
        }
    }
    if (s.empty()) cout << "correct" << endl;
    else cout << "incorrect" << endl;
    
}

int main()
{
    string exp;
    while (getline(cin, exp))
    {
        expr(exp);
    }
    return 0;
}