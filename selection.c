#include <stdio.h>
int main()
{
int a[50],n,i, temp,min ,j;
printf ("Enter the Limit : ");
scanf ("%d",&n);
array : "\n",n;
printf ("Enter the %d Element of the array \n",n);
for (i=0;i<n;i++)
{
scanf ("%d", & a[i]);
}
for (i=1;i<n;i++)
{
temp = a[i];
for (j=i;j>0&&temp<a[j-1];j--)
{
a[j] = a [j-1];
}
a[j] = temp;
}
printf ("Displaying sorted Array\n");
for (i=0;i<n;i++)
{
printf (" %d ", a[i]);
}
}
