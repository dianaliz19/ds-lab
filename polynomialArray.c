#include<stdio.h>
struct poly
{
    int c;
    int e;
};
struct poly p1[50],p2[50],p[50];
int readPoly(struct poly q[])
{
    int n,i;
    printf("\nEnter the total number of terms in the polynomial:");
    scanf("%d",&n);
    printf("Enter the coefficients and exponents\n(exponents in descending order)\n");
    for(i=0;i<n;i++)
    {
   	    printf("Enter the coefficient %d: ",i+1);
   	    scanf("%d",&q[i].c);
   	    printf("Enter the exponent 	: ");
   	    scanf("%d",&q[i].e);  	 
    }
    return n;
}
int addPoly(struct poly p1[],struct poly p2[],struct poly p[],int n1,int n2)
{
    int i=0,j=0,k=0;
    while(i<n1 && j<n2)
    {
   	    if(p1[i].e==p2[j].e)
   	    {
   		    p[k].c=p1[i].c + p2[j].c;
   		    p[k].e=p1[i].e;
   		    i++;
   		    j++;
   		    k++;
   	    }
   	    else if(p1[i].e>p2[j].e)
   	    {
   		    p[k].c=p1[i].c;
   		    p[k].e=p1[i].e;
   		    i++;
   		    k++;
   	    }
   	    else
   	    {
   		    p[k].c=p2[j].c;
   		    p[k].e=p2[j].e;
   		    j++;
   		    k++;
   	    }
    }
    while(i<n1)
    {
   	    p[k].c=p1[i].c;
   	    p[k].e=p1[i].e;
   	    i++;
   	    k++;
    }
    while(j<n2)
    {
   	    p[k].c=p2[j].c;
   	    p[k].e=p2[j].e;
   	    j++;
   	    k++;
    }
    return k;
}
void displayPoly(struct poly q[],int n)
{
    for(int i=0;i<n-1;i++)
   	    printf("%d(x^%d)+",q[i].c,q[i].e);
    printf("%d(x^%d)",q[n-1].c,q[n-1].e);
}
void main()
{
    int n1,n2,n;
    n1=readPoly(p1);
    printf("\nFirst polynomial : ");
    displayPoly(p1,n1);
    n2=readPoly(p2);
    printf("\nSecond polynomial : ");
    displayPoly(p2,n2);
    n=addPoly(p1,p2,p,n1,n2);
    printf("\nResultant polynomial : ");
    displayPoly(p,n);
    printf("\n");
}
/*
Enter the total number of terms in the polynomial:3
Enter the coefficients and exponents
(exponents in descending order)
Enter the coefficient 1: 3
Enter the exponent     : 8
Enter the coefficient 2: 5
Enter the exponent     : 6
Enter the coefficient 3: 9
Enter the exponent     : 2

First polynomial : 3(x^8)+5(x^6)+9(x^2)
Enter the total number of terms in the polynomial:5
Enter the coefficients and exponents
(exponents in descending order)
Enter the coefficient 1: 7
Enter the exponent     : 9
Enter the coefficient 2: 2
Enter the exponent     : 6
Enter the coefficient 3: 8
Enter the exponent     : 4
Enter the coefficient 4: 3
Enter the exponent     : 3
Enter the coefficient 5: 1
Enter the exponent     : 2

Second polynomial : 7(x^9)+2(x^6)+8(x^4)+3(x^3)+1(x^2)
Resultant polynomial : 7(x^9)+3(x^8)+7(x^6)+8(x^4)+3(x^3)+10(x^2)
*/