#include "bits/stdc++.h"
using namespace std;

vector <int> v[10];

int main()
{
    int i, a;
    while(scanf("%d", &a) == 1)
    {
        v[5].push_back(a);
    }
        //while(!v[5].empty())
        //v[5].pop_back();
        v[5].clear();
    printf("%d________\n", v[5].size());
    /*for(i = 0; i < v[5].size(); ++i)
    {
        cout << v[5][i] << endl;
    }*/
    return 0;
}
