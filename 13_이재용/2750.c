#include <stdio.h>

void swap(int *pNum1, int *pNum2)
{
    int iTmp;
    iTmp = *pNum1;
    *pNum1 = *pNum2;
    *pNum2 = iTmp;
}

int main()
{
    int iArrIdx = 0;
    scanf("%d", &iArrIdx);
    
    int iArr[iArrIdx];
    for(int i = 0; i < iArrIdx; i++)
    {
        scanf("%d", &iArr[i]);
    }

    for(int i = 0; i < iArrIdx-1; i++)
    {
        for(int j = i+1; j < iArrIdx; j++)
        {
            if(iArr[j] < iArr[i])
            {
                swap(&iArr[i], &iArr[j]);
            }
        }
    }

    for(int i = 0; i < iArrIdx; i++)
    {
        printf("%d\n", iArr[i]);
    }
    
    return 0;
}