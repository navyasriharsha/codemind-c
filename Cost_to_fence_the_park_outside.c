# include<stdio.h>
int main()  
{  int l,b,w,c;
    int area,area1,area2;  
 
    scanf("%d", &l);  
     scanf("%d", &b);  
      scanf("%d", &w);  
       scanf("%d", &c);  
    area1=l*b;
    area2=(l+(2*w))*(b+(2*w));
    area=(area2-area1)*c;
    printf("%d ", area);  
       
    return 0;  
}   
