#include <stdio.h>
#include <math.h>

int main(){

int numeros[5];
float resultados[5];
int indx;
float pi=3.1415926536;

  numeros[0]=1;
  numeros[1]=2;
  numeros[2]=3;
  numeros[3]=4;
  numeros[4]=5;

  //printf("  x\t x^2 \t log(x+1) \t exp(x)\n ");

  for(indx=0; indx<5;indx++){
  //  print("%d %d\n",numeros[indx],numeros[indx]%2);
  
 if(numeros[indx]%2==0){
  resultados[indx]=log10(numeros[indx]+1);
  printf(" %d  %f\n", numeros[indx],resultados[indx]);

 }else{
  resultados[indx]=exp(numeros[indx])+cos(numeros[indx]);
  printf("  x=%d \n exp(x)+cos(x)= %f\n", numeros[indx],resultados[indx]);
 }
  }
  printf("\nResultados:\n");
  for(indx=0; indx<5;indx++){

    printf("%f\n", resultados[indx]);
    
  }
  printf("Pi+Pi=%.16lf",pi+pi);


}
