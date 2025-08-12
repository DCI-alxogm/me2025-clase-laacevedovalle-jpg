# include <stdio.h>
#include <math.h>
int main(){
float x[5];
int i ;

printf("introduce 5 numeros:\n");
for (i=0;i<5;i++){
    printf("x[%d]:",i +1);
    scanf("%f",& x[i]); 
}

printf ("\n los n[umeros introducidos son:|n]");
for(i=0; i<5; i++){
    printf("%.4f\n",x[i]);
}
return 0 ;
}