#include<stdio.h>

int main()
{
   
    int i,j,k,l,a,m;
 
    for(i=65 ;i<=73;i++){
    
    printf("%c ",i);
    
    }
     
      printf("\n");
 
  for(a=0;a<=4;a++) {

    for(j=65;j<=(68-a);j++){
    
      printf("%c ",j);
    }
     
    for(k=1;k<=a+1;k++){
    
    printf("  ");
    
    }
    for(l=1;l<=a;l++){
    
    printf("  ",l);
    
    }
 
    for(m=70+a;m<=73;m++){
    
    printf("%c ",m);
    
    }
    printf("\n");
    
    }
    
       return 0;
}

/*


OUT PUT

A B C D E F G H I 
A B C D   F G H I
A B C       G H I
A B           H I 
A               I





