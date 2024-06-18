#include<stdio.h>
void insertionsort(int a[],int n)
{
    int x,j,i;
    for(i=2;i<n;i++)
    {
 	    x=a[i];
  	    for(j=i-1;j>=0;j--)
        {
  		    if(x<a[j])
  	            a[j+1]=a[j];
  		    else
  				break;
  		}
  		a[j+1]=x;
 	}
}
void main()
{
    int a[50],n,i;
    printf("Enter the limit:");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    insertionsort(a,n);
	printf("Sorted array is:\n");
    for(i=0;i<n;i++)
        printf("%d  ",a[i]);
}

/*OUTPUT

Enter the limit:5
Enter the elements:1 9 4 8 2
Sorted array is:
1  2  4  8  9 */
