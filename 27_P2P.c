#include<stdio.h>  
int main ()  
{  
   int a = 10;  
   int *p;  
   int **pp;   
   p = &a;   
   pp = &p;  
   printf("address of a: %p\n",p);    
   printf("address of p: %p\n",pp);  
   printf("value of p: %d\n",*p);  
   printf("value of pp: %d\n",**pp);  
return 0;
}  
