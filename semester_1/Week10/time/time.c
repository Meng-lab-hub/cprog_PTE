#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#ifndef __APPLE__
#include <windows.h>
#endif // __linux__


#include "time.h"

const int YEAR_BASE=1900;

const int PREV_MINUTE=60;

int process(const char *input)
{
    if (!input)
        return EXIT_FAILURE;

    time_t now;
    time(&now);

    struct tm *tm=localtime(&now);

    printf("today is %2d/%2d/%4d %02d:%02d:%02d\n",
           tm->tm_mday, tm->tm_mon+1, tm->tm_year+YEAR_BASE,
           tm->tm_hour, tm->tm_min, tm->tm_sec);

    now -= PREV_MINUTE;
    tm = localtime(&now);
    printf("previous minute is %2d/%2d/%4d %02d:%02d:%02d\n",
           tm->tm_mday, tm->tm_mon+1, tm->tm_year+YEAR_BASE,
           tm->tm_hour, tm->tm_min, tm->tm_sec);

    if(!strptime(input, PARSE_FORMAT, tm))
    {
        printf("Parse error in %s\n", input);
        return EXIT_SUCCESS;
    }

        printf("result of input is %2d/%2d/%4d %02d:%02d:%02d\n",
           tm->tm_mday, tm->tm_mon+1, tm->tm_year+YEAR_BASE,
           tm->tm_hour, tm->tm_min, tm->tm_sec);
        return EXIT_SUCCESS;

}
