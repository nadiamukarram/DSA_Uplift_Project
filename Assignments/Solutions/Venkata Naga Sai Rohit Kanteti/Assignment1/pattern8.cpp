
/*
 
 * * * * *
   * * *
    * *
     *




*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, j, n,space;
    cin >> n;
    int rows;


    for(i=1; i<=n; i++)
    {
        for(space=1; space<i; space++)
            cout<<" ";
        for(j=i; j<=n; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<endl;

    return 0;
}
