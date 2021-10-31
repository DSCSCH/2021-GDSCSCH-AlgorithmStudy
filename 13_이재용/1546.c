#include <stdio.h>

int main(void)
{
    int subNum = 0, i = 0;
    double avg = 0, big = 0;
    double subArr[1000] = {};

    scanf("%d", &subNum);
    // printf("%d", subNum);
    
    for(i = 0; i < subNum; i++)
    {
        scanf("%lf ", &subArr[i]);
    }

    // printf("\n");
    for(i = 0; i < subNum; i++)
    {
        if(subArr[i] > big)
            big = subArr[i];
    }

    for(i = 0; i < subNum; i++)
    {
        subArr[i] = subArr[i]/big*100;
    }

    for(i = 0; i < subNum; i++)
    {
        avg += subArr[i];
    }
    avg = avg / subNum;

    printf("%lf", avg);


    return 0;
}