#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {   
    char str[100];
    char str1[100];
    gets(str);
    int count,i,j;
    for(j=48;j<=57;j++)
    {
        count=0;
        for(i=0;i<strlen(str);i++)
        {
            if(str[i]==j)
            {
                count++;
            }
        }
        printf("%d ",count);
    }
    return 0;
}

