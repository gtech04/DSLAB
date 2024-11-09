#include <stdio.h>
int main()
{
int a[50], n,i, temp=0, j;
printf ("Enter the Limit.. : ");
scanf ("%d",&n);
printf ("Enter the %d element of the array \n",n);
for (i=0;i<n;i++)
{
scanf ("%d", &a[i]);
}
for (i=0;i<n-1;i++)
{
for (j=0;j<n-i-1;j++)
{
if (a[j]>a[j+1])
{
temp = a[j];
a[j] = a[j+1];
a[j+1] = temp;
}
}
}
printf ("Displaying Sorted Array\n");
for (i=0;i<n;i++)
{
printf (" %d ",a[i]);
}
}

