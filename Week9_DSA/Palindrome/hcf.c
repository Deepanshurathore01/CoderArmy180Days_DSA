#include<stdio.h>
#include<conio.h>

void main()
{
  int n1 , n2 , hcf , lcm ,i  ;
  printf("Enter first number : ");
  scanf("%d",&n1);
  printf("Enter first number : ");
  scanf("%d",&n2);

  hcf =1;
  for( i =1; i<= n1 && i<=n2 ;i++)
  {
    if(n1 % i ==0 && n2 % i==0)
    hcf =i;
  }

  lcm =(n1 * n2)/hcf ;

   printf("\nHCF of %d and %d is %d", n1, n2, hcf);
   printf("\nLCM of %d and %d is %d", n1, n2, lcm);

  
}