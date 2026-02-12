#include <stdio.h>
int insert_sort(int [],int);
int main() 
{   
    int a[100],n,i,sort;
    printf("Enter no. of elemnts : ");
    scanf("%d",&n);
    
    printf("\nEnter array elemnts : ");
    for(i=0;i<n;i++)
     scanf("%d",&a[i]);
     
    printf("\nArray before sorting\n");
    for(i=0;i<n;i++){
     printf("%d  ",a[i]);
    }
    
    insert_sort(a,n);
    
    printf("\nSorted array\n");
    for(i=0;i<n;i++){
     printf("%d  ",a[i]);
    }
    
    return 0;
}
int insert_sort(int a[],int n)
{
    int j,i,temp;
    
    for(i=1;i<n;i++)
     {
         temp=a[i];
       for(j=i-1;j>=0 && a[j]>temp;j--)
        {
          a[j+1]=a[j];   
        }
        a[j+1]=temp;
     }
    
    return 0;
}
