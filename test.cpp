/*
ID: fangkec2
PROG: test
LANG: C++
*/
#include <fstream>

using namespace std;

int main()
{
    ifstream fin("test.in");
    ofstream fout("test.out");
    int x, y;
    fin >> x >> y;
    fout << x + y << endl;
    return 0;
}
