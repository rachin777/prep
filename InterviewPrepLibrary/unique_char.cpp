#include "stdafx.h"

_declspec(dllexport) bool string_has_unique_chars(char *str)
{
    if (nullptr == str)
    {
        return false;
    }

    unsigned int len = strlen(str);
    for (unsigned int i = 0; i < len; i++)
    {
        char searchChar = str[i];
        for (unsigned int j = i + 1; j < len; j++)
        {
            if (str[i] == str[j])
            {
                return false;
            }
        }
    }
    return true;
}