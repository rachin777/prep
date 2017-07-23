#include "stdafx.h"

_declspec(dllexport) char * reverse_string(char *inputString)
{
    if (nullptr == inputString)
    {
        return nullptr;
    }

    unsigned int len = strlen(inputString);
    char temp;
    for (unsigned int i = 0, j = len - 1; i < len /2 ; i++, j--)
    {
        temp = inputString[i];
        inputString[i] =  inputString[j];
        inputString[j] = temp;
    }

    return inputString;
}