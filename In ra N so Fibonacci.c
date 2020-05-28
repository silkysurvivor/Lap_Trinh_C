#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
#include <math.h>


int main()
{
    int n,a[1000],i;
    scanf("%d",&n);

    a[0]=0;
    a[1]=1;


    for (i=2;i<n;i++)
    {
        a[i]=a[i-2]+a[i-1];

    }

    for (i=0;i<n;i++)
    printf("%d\t",a[i]);
}
