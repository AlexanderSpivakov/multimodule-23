speaker.cpp
#include "speaker.h"
#include <cstdio>

static int LogFormattedNameAge(const char* name, const char* age)
{
    printf("Hi, my name is %s I'm %s year old. What about you?\n", name, age);
    return 0;
}

extern "C" int LogNameAge(const char* name, const char* age) // Добавлено extern "C"
{
    if (name && age)
    {
        return LogFormattedNameAge(name, age);
    }
    else
    {
        printf("* INVALID PARAMETERS *\n");
        return 1;
    }
}