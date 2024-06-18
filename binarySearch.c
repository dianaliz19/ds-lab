#include<stdio.h>
int binary(int a[],int l,int r,int x)
{
 	int m;
    if(l<=r)
    {
        m=(l+r)/2;
        if(a[m]==x)
            return m;
        else if(x<a[m])
            return binary(a,l,m-1,x);
        else
            return binary(a,m+1,r,x);
    }
    return -1;
}
void sort(int a[],int n)
{
    int i,pass,cmp,temp;
    for(pass=1;pass<n;pass++)
        for(cmp=0;cmp<n-pass;cmp++)
            if(a[cmp]>a[cmp+1])
            {
                temp=a[cmp+1];
                a[cmp+1]=a[cmp];
                a[cmp]=temp;
            }
}
void main()
{
    int a[25],i,n,x,pos;
    printf(“Enter the limit:”);
    scanf("%d",&n);
    printf("Enter the elements:");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    sort(a,n);
    printf("Sorted array:\n");
    for(i=0;i<n;i++)
        printf("%d  ",a[i]);
    printf("\nEnter the element to be searched:");
    scanf("%d",&x);
    pos=binary(a,0,n,x);
    if(pos==-1)
        printf("Element not found\n");
    else
        printf("Element found at position %d\n",pos+1);
}

/*
Enter the limit:5
Enter the elements:
3 5 1 2 4
Sorted array:
1  2  3  4  5  
Enter the element to be searched:4
Element found at position 4
*/
