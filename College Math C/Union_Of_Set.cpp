#include<stdio.h>
//#include<iostream>

int main()
{
    int a[10],b[10],c[10],d[10],result[20],n1,n2;
    printf("Enter number of element in Set A : ");
    scanf("%d",&n1);
    printf("Enter element of Set A : ");
    for(int i=0;i<n1;i++)
    {
        scanf("%d",&a[i]);
    }
   printf("Enter number of element in Set B : ");
    scanf("%d",&n2);
    printf("Enter element of Set B : ");
    for(int i=0;i<n2;i++)
    {
        scanf("%d",&b[i]);
    }
    int k=0;
    for(int i=0;i<n1;i++)
    {
        int j=i+1;
        for(;j<n1;j++)
        {
            if(a[i]==a[j])
            {
                break;
            }
        }
        if(j==n1)
        {
        c[k]=a[i];
        k++;
        }
    } 
    int l=0;
    for(int i=0;i<n2;i++)
    {
        int j=i+1;
        for(;j<n2;j++)
        {
            if(b[i]==b[j])
            {
                break;
            }
        }
        if(j==n2)
        {
        d[l]=b[i];
        l++;
        }
    }
   /* printf("Printing Unique element of Set A : ");
    for(int i=0;i<k;i++)
    {
        printf("%d ",c[i]);
    }
    printf("\n");
    printf("Printing Unique element of Set B : ");
    for(int i=0;i<l;i++)
    {
        printf("%d ",d[i]);
    }*/
    printf("Printing Union of Given Sets \n");
    int n=0;
    for(int i=0;i<k;i++)
    {
        int j=0;
        for(;j<l;j++)
        {
            if(c[i]==d[j])
            {
                break;
            }
        }
        if(j==l)
        {
            result[n]=c[i];
            n++;
        }
    }
    for(int i=0;i<l;i++)
    {
        result[n]=d[i];
        n++;
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",result[i]);
    }
}