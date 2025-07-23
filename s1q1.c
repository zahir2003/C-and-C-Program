#include<stdio.h>
int main()
{
    int arr[105];
    int n,i,j,k,mn;
    scanf("%d",&n);
    printf("Enter array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int a=0,b=0,as=0,bs=0;
    for(k=0;k<n;k++)
    {
        for(i=0;i<k+1;i++)
        {
            if(arr[i]==1)
            {
                as+=1;
            }
            else if(arr[i]==0)
            {
                as-=1;
                break;
            }
        }
        for(j=i+1;j<n;j++)
        {
            if(arr[j]==1)
            {
                bs+=1;
            }
            else if(arr[j]==0)
            {
                bs-=1;
                break;
            }
        }
        if(as>bs)
        {
            mn=k+1;
            
            break;
        }
    }
    //0printf("isiabnad");
    printf("Min is %d",mn);
}
