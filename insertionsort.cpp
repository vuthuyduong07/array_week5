#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    int j;
    for (int i=0; i<n-1;i++)
    {
        int moc=a[i];
        for (j = i-1; j>= 0&&a[j] > moc;j--)
        {
            a[j+1] = a[j];
        }
        a[j+1] = moc;
    }
        
    for (int i =0; i<n;i++)
    {
        printf("%d",a[i]);
    }
return 0;
}