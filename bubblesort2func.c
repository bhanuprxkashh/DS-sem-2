#include <stdio.h>
int bubble(int ,int);
int bubbleprint(int , int);
int main() 
{   
    int a[100],n,i;
    int *p;
    
    printf("Enter no. of elemnts : ");
    scanf("%d",&n);
    
    printf("\nEnter array elemnts : ");
    for(i=0;i<n;i++)
     scanf("%d",&a[i]);
     
    *p=a;
    
    printf("\nArray before sorting\n");
    bubbleprint(*p,n);
    
    bubble(*p,n);
    
    printf("\nSorted array\n");
    bubbleprint(*p,n);
    
    return 0;
}
int bubbleprint(int *p,int n)
{
    int i;
    for(i=0;i<n;i++){
     printf("%d  ",*(p+i));
    }
}
int bubble(int *p,int n)
{
    int j,i,temp;
    
    for(i=0;i<n-1;i++)
     {
       for(j=0;j<n-i-1;j++){
        if(*(p+i)>*(p+i+1))
        {
            temp=*(p+i);
            *(p+i)=*(p+i+1);
            *(p+i+1)=temp;
        }
       } 
     }
    
    return 0;
}
