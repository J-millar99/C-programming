#include <stdio.h>
#include <math.h>

double deviation(int* param, int len)
{
    double sum=0, m = 0;
    int i;
    for(i=0; i < len; i++)
        sum += param[i];
    sum = sum / len;

    for(int j=0; j < len; j++)
    {
        param[j] -= sum;
        m += pow(param[j], 2);
    }
    m = m/len;
    m = sqrt(m);
    return m;
}

int main(void)
{
    int n1,n2,n3,n4,n5;
    printf("Enter 5 real numbers: ");
    scanf("%d %d %d %d %d", &n1,&n2,&n3,&n4,&n5);
    int arr[5] = {n1, n2, n3, n4, n5};
    printf("Standard Deviation = %.3f \n", deviation(arr, sizeof(arr) / sizeof(int)));
    return 0;
}