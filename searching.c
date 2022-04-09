#include <stdio.h>

int main()
{
    int a[]={1,2,3,5};
    int i,m;
    printf("Enter the no to be searched\t");
    scanf("%d",&m);
    for(i=0;i<4;i++)
    {
        if(a[i]==m)
            printf("Element found at %d",i+1);
            break;
    }
    if(a[i]!=m)
    printf("Element not found");
}
