#include <bits/stdc++.h>
using namespace std;

bool finded(map<int, string> &map, int size)
{
	for(auto it = map.begin(); it != map.end(); ++it)
	{
		if (it->first == size) return true;
	}
	return false;
}

void maracutaia(string &str)
{
    map<int, string> map;
    string word;
    for (size_t i = 0; i < str.size(); i++)
    {
        if (!isspace(str[i]))
        {
            string ch = string(1, str[i]);
            word.append(ch);
        }

        if (isspace(str[i]) || i == str.size()-1)
        {
            if (word != ""){
                bool key = finded(map, (int)word.size());
                if (key) map[word.size()].append(" "+word);
                else  map[word.size()] = word;
            }
            word.clear();
        }
    }
    bool first = true;
    for (auto it = map.rbegin(); it != map.rend(); ++it)
    {
        if (!first) cout << " ";
        cout << it->second;
        first = false;
    }
    cout << endl;
}

int main()
{
    string str;
    int q;
    cin >> q;
	cin.ignore();
    while (q--)
    {
        getline(cin, str);
        maracutaia(str);
    }
}