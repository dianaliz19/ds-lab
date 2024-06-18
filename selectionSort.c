#include<stdio.h>
void swap(int a[],int b,int c)
{ 
    int t;
    t=a[b];
    a[b]=a[c];
   	a[c]=t;
}
void selectionsort(int a[],int n)
{
    int i,k,j;
    for(i=0;i<=n-1;i++)
    {
   	 	k=i;
   	 	for(j=i+1;j<n;j++)
   		 	if(a[j]<a[k])
   			 	k=j;
   	 	swap(a,i,k);
    }
}
void main()
{
    int a[50],n,i;
    printf("Enter the limit:");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for(i=0;i<n;i++)
   	 	scanf("%d",&a[i]);
    selectionsort(a,n);
    printf("Sorted array is:\n");
    for(i=0;i<n;i++)
   	 	printf("%d\n",a[i]);
}
/*OUTPUT

Enter the limit:5
Enter the elements:
3 5 1 2 4
Sorted array is:
1
2
3
4
5

*/