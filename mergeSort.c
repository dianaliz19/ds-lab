#include<stdio.h>
int merge(int a[],int l,int r,int m)
{
    int i=l,j=m,k=l;
    int b[50];
    while(i<=m && j<=r)
        if(a[i]<a[j])
            b[k++]=a[i++];
        else
            b[k++]=a[j++];
    while(i<m)
        b[k++]=a[i++];
    while(j<=r)
        b[k++]=a[j++];
    for(i=l;i<=r;i++)
        a[i]=b[i];
}
void mergesort(int a[],int l, int r)
{
    int m;
    if(l<r)
    {
        m=(l+r)/2;
        mergesort(a,l,m);
        mergesort(a,m+1,r);
        merge(a,l,r,m+1);
    }
}
void main()
{
    int a[50],n,i;
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    mergesort(a,0,(n-1));
    for(i=0;i<n;i++)
        printf("\n %d",a[i]);
}
/*OUTPUT

Enter the size of array:5
Enter the elements:
3 5 1 4 2

 1
 2
 3
 4
 5
*/