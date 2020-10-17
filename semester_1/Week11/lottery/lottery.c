#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

#include "lottery.h"

const char *EURO = "euro";

const int DEFAULT_TICKETS = 10;

const int MAX_5_OF_90 = 90;
const int COUNT_5_OF_90 = 5;

const int MAX_6_OF_45 = 45;
const int COUNT_6_OF_45 = 6;

const int MAX_EURO_1 = 50;
const int COUNT_EURO_1 = 5;

const int MAX_EURO_2 = 10;
const int COUNT_EURO_2 = 2;

enum lottery_type_t { T_5, T_6, T_EURO, T_UNKNOWN};

enum lottery_type_t get_type(const char *str)
{
    if (!(str&&*str))
        return T_UNKNOWN;

    switch(atoi(str))
    {
        case 5: return T_5;
        case 6: return T_6;

        case 0: if (strcasecmp(str, EURO) == 0)
                    return T_EURO;

        default :
            return T_UNKNOWN;
    }
}

int get_tickets(const char *str)
{
    if(!(str&&*str))
        return DEFAULT_TICKETS;

    int res = atoi(str);

    return res > 0? res : DEFAULT_TICKETS;
}

int process(int argc, char **argv)
{
    if (!argv)
        return EXIT_FAILURE;
    enum lottery_type_t type=get_type(argv[1]);
    if(type==T_UNKNOWN)
    {
        printf("Unknown type %s\n", argv[1]);
        return EXIT_FAILURE;
    }

    int tickets = get_tickets(argv[2]);
    for (int i=0;i<tickets;++i)
    {
        switch(type)
        {
            case T_5 : gen_serious(MAX_5_OF_90, COUNT_5_OF_90, 1);
                continue;
            case T_6 : gen_serious(MAX_6_OF_45, COUNT_6_OF_45, 1);
                continue;
            case T_EURO :
                gen_serious(MAX_EURO_1, COUNT_EURO_1, 0);
                gen_serious(MAX_EURO_2, COUNT_EURO_2, 1);
                continue;
            default :
                return EXIT_FAILURE;
        }
    }

}
