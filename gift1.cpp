/*
ID: fangkec2
PROG: gift1
LANG: C++
*/
#include <fstream>
#include <string>
#include <map>

using namespace std;

int main()
{
    ifstream fin("gift1.in");
    ofstream fout("gift1.out");
    int n;
    fin >> n;
    map<string, int> people;
    string names[20];
    for (int i = 0; i < n; i++)
    {
        string st;
        fin >> st;
        names[i] = st;
        people[st] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        string name;
        fin >> name;
        int money, total;
        fin >> money >> total;
        if (money == 0 || total == 0)
            continue;
        int t;
        t = money / total;
        for (int j = 0; j < total; j++)
        {
            string xx;
            fin >> xx;
            people[xx] += t;
        }
        people[name] -= t * total;
    }
    for (int i = 0; i < n; i++)
        fout << names[i] << " " << people[names[i]] << endl;
    return 0;
}
