#include<stdio.h>


int main()
{
    int i,j,n,temp,mindex;

    printf("enter how many element you want to insert");
    scanf("%d",&n);

    int a[n];

    for(i=0;i<n;i++)
    {
        printf("enter array element");
        scanf("%d",&a[i]);
    }

    for(i=0;i<n-1;i++)
    {
        mindex=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[mindex])
            {
                mindex=j;
            }
        }
        temp=a[i];
        a[i]=a[mindex];
        a[mindex]=temp;
    }
      for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);

    }


    return 0;
}
