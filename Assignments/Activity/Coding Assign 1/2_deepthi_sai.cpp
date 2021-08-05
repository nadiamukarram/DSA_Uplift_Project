
#include <bits/stdc++.h>

using namespace std;

int index(string a,string b)
{
    int d=a.size()-b.size(),j;
  for(int i=0;i<d+1;i++)
  {
    for(j=0;j<b.size();j++)
    {
        if(a[i+j]!=b[j])
        break;
    }
    if(j==b.size())
        return i+1;
  }
  return -1;
}


int main()
{
    string c1,c2;
    cin>>c1>>c2;
    cout<<index(c1,c2);

    return 0;
}



//time complexity:O(c1.size()*c2.size()),space=O(1)
