#include <stdio.h>
#include <stdlib.h>

#include "head1.h"

int main()
{
    printf("\n\n\n");
    char anything;
    int i=1;

    while(i)
    {
        printf("Select the operation : ");
        scanf("%s",&anything);
        switch(anything)
        {
        case '1' :
            three_num_line();
            break;
        case '2' :
            square_cube();
            break;
        case '3' :
            p_line_q_number();
            break;
        case '4' :
            mathematic();
            break;
        case '5' :
            value_S();
            break;
        case '6' :
            calculate_S();
            break;
        case '7' :
            divisor();
            break;
        case '8' :
            seven_array();
            break;
        case '9' :
            three_time_array();
            break;
        case 'a' :
            less_five();
            break;
        default :
            printf("Select a valid option.");
        }
    }
    return 0;
}
