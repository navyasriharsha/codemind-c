#include<stdio.h>  
int main()  
{  

int num, rem, sum = 0, i; 
scanf("%d", &num);      

for(i = 1; i < num; i++)  
                     {  
                              rem = num % i;  
                             if (rem == 0)  
                                        {  
                                               sum = sum + i;  
                                         }  
                        }  
if (sum == num)  
                      printf("True");  
           else  
                      printf("False");  
 
}  