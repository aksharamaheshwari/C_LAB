#include <stdio.h>
void rev(int a[],int s,int e)
{
    int temp;
    if(s>=e)
    return;
    temp=a[s];
    a[s]=a[e];
    a[e]=temp;
    rev (a,s+1,e-1);
}
 
int main()
{
    int a[100], n, i;
    printf("Enter no of elements");
    scanf("%d",&n);
    printf("Enter %d elements:" , n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    rev(a,0,n-1);
    printf("Reversed array");
    for(i=0;i<n;i++)
    {
        printf("%d/n",a[i]);
    }
    return 0;
}
