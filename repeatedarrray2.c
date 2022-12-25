#include<stdio.h>
int main()
{
    int n,max,A[100];
    
    printf("Enter the number of n");
    scanf("%d",&n);
    
    int DAT[10]={0};
    for(int i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    max=A[0];
    for(int i=0;i<n;i++)
    {
        if(A[i]>max)
        {
            max=A[i];
        }
    }
    for(int j=0;j<=n;j++)
    {
        DAT[A[j]]++;
    }
    printf("\n");
    for(int k=1;k<=max;k++)
    {
        if(DAT[k]>1)
        printf("%d ",k);
    }
    return 0;
}