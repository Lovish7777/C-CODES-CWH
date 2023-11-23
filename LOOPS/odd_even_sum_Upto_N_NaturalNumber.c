#include<stdio.h>
int main()
{
    int i,n,odd,even,odd_sum=0,even_sum=0;
    printf("enter number: ");
    scanf("%d",&n);
   

    for(i=1;i<=n;i++)
    {
      odd=2*i-1;
      printf("\t%d",odd);
      odd_sum+= odd;
       even= 2*i;
      printf("\n%d",even);
      even_sum+=even;

     }
     printf("\nSUM OF EVEN: %d",even_sum);
       printf("\nSUM OF ODD: %d",odd_sum);

    
     
      
   
       

    
     return 0; 
     
    
    }




   
