#include<stdio.h>
int main()
{
    int a[6]={5,2,4,6,1,3},key;
    for(int i=1;i<6;i++)
    {
        key=a[i];
        while(i>0 && a[i-1]>key)
        {
            a[i]=a[i-1];
            a[i-1]=key;
            i--;
        }
    }
    for(int j=0;j<6;j++)
    {
    printf("%d",a[j]);
    }
    return 0;
    
}