#include <iostream>
#include<string.h>

using namespace std;

int main()
{
    string str1, str2;
    cout<<"Enter First String :";
    getline(cin, str1);
    cout<<"Enter Second String :";
    getline(cin, str2);
    int n = str1.length();
    int m = str2.length();

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (str1[i] == str2[j])
                str1[i] = ' ';
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (str1[i] == ' ')
            continue;
        else
            cout << str1[i];
    }

    return 0;
}