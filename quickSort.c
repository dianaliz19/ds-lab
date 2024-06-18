#include<stdio.h>
int partition(int a[], int p, int r)
{
    int t,i,q;
    t=a[p];
    q=p;
    for(i=p+1; i<r;i++)
   	    if(a[i]<t)
   	    {
   		    a[q++]=a[i];
   		    a[i]=a[q];
   	    }
    a[q]=t;
    return q;
}
void qs(int a[],int p, int r)
{
    int q;
    if(p<r)
    {
   	    q = partition(a,p,r);
   	    qs(a,p,q-1);
   	    qs(a,q+1,r);
    }
}
void main()
{
    int n,a[100];
    printf("Enter the size of the array:");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for(int i=0;i<n;i++)
   	    scanf("%d",&a[i]);
    qs(a,0,n);
    printf("Sorted array:\n");
    for(int i=0;i<n;i++)
   	    printf("%d ",a[i]);
}
/*OUTPUT

Enter the size of the array:5
Enter the elements:
9
1
7
3
5
Sorted array:
1 3 7 5 9
*/