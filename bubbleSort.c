#include<stdio.h>
void swap(int a[],int b,int c)
{
    int t;
    t=a[b];
    a[b]=a[c];
    a[c]=t;
}
void bubblesort(int a[],int n)
{
    for(int i=0;i<n;i++)
   	    for(int j=(n-1);j>i;j--)
   		    if(a[j]<a[j-1])
   			    swap(a,j,j-1);
}
void main()
{
    int a[50],n,i;
	printf("Enter the limit:");
	scanf("%d",&n);
	printf("Enter the elements:\n");
	for(i=0;i<n;i++)
     	scanf("%d",&a[i]);
	bubblesort(a,n);
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
5 */
