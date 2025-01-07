#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'camelcase' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts STRING s as parameter.
 */

int camelcase(string s)
{
    int result = 1;
    
    for (int i = 0; i < s.length(); ++i)
    {
        if (std::isupper(s[i]) != 0)
        {
            result++;
        }
    }
    
    return result;
}

