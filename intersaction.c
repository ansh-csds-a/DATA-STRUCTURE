#include<stdio.h>
int main()
{
    int a [100],b[100],m,n,i,j;
    printf("enter the value of m and n\n");
    scanf("%d%d",&m,&n);
    printf("Enter the element of first array\n");
    for(i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element of second array\n");
    for(j=0;j<n;j++)
    {
        scanf("%d",&b[j]);
    }
    int c[100];
    i=0;
    j=0;
    int k=0;
    while(i<m && j<n)
    {
        if(a[i]<b[j])
        {
            
            i=i+1;
            continue;
        }
        else if(a[i]>b[j])
        {
            
            j=j+1;
            continue;
        }
        else
        {
            c[k]=a[i];
            i=i+1;
            j=j+1;
            k=k+1;
        }
    }
    printf("Intersection of two sets are: \n");
    for(int l=0;l<k;l++)
    {
        printf("%d ",c[l]);
    }
    return 0;
}
