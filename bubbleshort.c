#include<stdio.h>

int main()
{
    int i,n;
    printf("enter hhow many element you want to insert");
    scanf("%d",&n);

   int a[n],temp;
    for(i=0;i<n;i++)
    {
        printf("enter array element %d",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<=n-1;i++)
    {
        for(int j=0;j< n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("the element are %d \n",a[i]);
    }


    return 0;
}
