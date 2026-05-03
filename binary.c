#include<stdio.h>

int main()
{
    int i,n,temp,found=0,key;

    printf("enter how many element you want to insert");
    scanf("%d",&n);

    int a[n],high=n-1,low=0,mid;

    for(i=0;i<n;i++)
    {
        printf("enter array element");
        scanf("%d",&a[i]);
    }
     printf("enter key");
     scanf("%d",&key);

    while(low<=high)
    {
        mid=(low+high)/2;

        if(mid==key)
        {
            found=1;
            printf("key found %d",key);
            break;
        }
        else if(mid<key)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }

    if(found==0)
    {
        printf("key is not present in thhe list");
    }
    return 0;;
}
