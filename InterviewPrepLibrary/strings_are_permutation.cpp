#include "stdafx.h"

_declspec(dllexport) bool strings_are_permutation(char *str1, char *str2)
{
    if (nullptr == str1 || nullptr == str2)
    {
        return false;
    }

    int len1 = strlen(str1);
    int len2 = strlen(str2);

    if (len1 != len2)
    {
        return false;
    }

    char character_map[128] = { 0 };
    for (unsigned int i = 0; i < len1; i++)
    {
        character_map[(int)str1[i]]++;
    }

    for (unsigned int j = 0; j < len2; j++)
    {
        if (--character_map[(int)str2[j]] < 0)
        {
            return false;
        }
    }

    return true;
}