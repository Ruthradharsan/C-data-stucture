#include<stdio.h>
void swap(int *x, int *y)
{
    int t;
    t = *x;
    *x = *y;
    *y = t;
}
int main()
{
    int num1,num2;
    printf("Enter value of number 1 : ");
    scanf("%d",&num1);
    printf("Enter value of number 2 : ");
    scanf("%d",&num2);
    printf("Before swapping, number 1 is %d and number 2 is %d.",num1,num2);
    swap(&num1,&num2);
    printf("\nAfter swapping, number 1 is %d and number 2 is %d.", num1,num2);
    return 0;
}
