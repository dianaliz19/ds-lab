#include<stdio.h>
int linearsearch(int A[],int n,int x)
{
    for(int i=0;i<n;i++)
   		if(A[i]==x)
   			return i;
  	return -1;
}
void main()
{
   	int a[50],n,x,i,l;
   	printf("Enter the limit: ");
   	scanf("%d",&n);
   	printf("Enter the elements:\n");
   	for(i=0;i<n;i++)
   		scanf("%d",&a[i]);
    printf("Enter the element to be searched: ");
   	scanf("%d",&x);
  	l = linearsearch(a,n,x);
  	if(l == -1)
  	 	printf("Element not found\n");
  	else
   		printf("Element found at position %d \n",l+1);
}

/*OUTPUT


Enter the limit: 5
Enter the elements:
1 2 3 4 5
Enter the element to be searched: 3
Element found at position 3*/
