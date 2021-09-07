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

