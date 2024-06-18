#include <stdio.h>
#include <stdlib.h>
struct queue 
{
    int tail, head, size;
    int a[100];
}*q;

void enq(int x) 
{
    if (q->tail == -1 && q->head == -1) 
    {
        q->a[++(q->tail)] = x;
        q->head = 0;
    } 
    else 
    {
        int i = q->tail;
        while (i >= q->head && q->a[i] > x) 
        {
            q->a[i + 1] = q->a[i];
            i--;
        }
        q->a[i + 1] = x;
        q->tail++;
    }
}
int main() 
{
    int n, x;
    printf("Enter no of elements: ");
    scanf("%d", &n);
    q = malloc(sizeof(struct queue));
    q->tail = q->head = -1;
    q->size = n;
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &x);
        enq(x);
    }
    printf("Priority queue(ascending order):");
    for (int i = q->head; i <= q->tail; i++)
        printf("%d ", q->a[i]);
    printf("\n");
    free(q);
    return 0;
}
/*OUTPUT

Enter no of elements:6
Enter the elements:
9
2
7
1
5
8
Priority queue(ascending order):1 2 5 7 8 9
*/