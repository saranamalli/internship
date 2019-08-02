int oddeven(int a[],int n)
{
    int i=0,count=0;
    if(a[0]%2!=0)
    {
          for(i=0;i<n;i++)
          {
               for(;i<n;i++)
               {
                    if(a[i]%2!=0)
                    {
                        count++;
                        break;
                    }
               }
               i++;
               for(;i<n;i++)
               {
                    if(a[i]%2==0)
                    {
                        count++;
                        break;
                    }
               }
          }      
    }
    if(a[0]%2==0)
    {
          for(i=0;i<n;i++)
          {
               for(;i<n;i++)
               {
                    if(a[i]%2==0)
                    {
                        count++;
                        break;
                    }
               }
               i++;
               for(;i<n;i++)
               {
                    if(a[i]%2!=0)
                    {
                        count++;
                        break;
                    }
               }
          }      
    }
				return count;
}   
    
#include<stdio.h>
int main()
{
    int a[]={1,2,3,4,5},n=5,b;
    b=oddeven(a,n);
    printf("%d",b);
}
