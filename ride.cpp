/*
ID: fangkec2
PROG: ride
LANG: C++
*/
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ifstream fin("ride.in");
    ofstream fout("ride.out");
    string x, y;
    int xx = 1, yy = 1;
    fin >> x >> y;
    for (int i = 0; i < x.length(); i++)
        xx *= x[i] - 64;
    for (int i = 0; i < y.length(); i++)
        yy *= y[i] - 64;
    xx %= 47;
    yy %= 47;
    if (xx == yy) fout << "GO" << endl;
    else fout << "STAY" << endl;
    return 0;
}
