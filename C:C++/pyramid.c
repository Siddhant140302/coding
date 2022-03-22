#include <stdio.h>
void printPattern(int n)
{
    int temp= 1,i;
    for(i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            printf("%d ",temp);
            temp=!temp;
        }
        printf("\n");
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    printPattern(n);
    return 0;
}