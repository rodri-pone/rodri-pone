#include<iostream>
int main( int argc, char**argv){
 unsigned long n,i;
 printf(" Entrer un nombre :\t");
 scanf("%ld",&n);
 if(n==0)
  printf(" le factoriel de 0 est 1\n");
 else if (n>0){
  for(i=n-1;i>0;i--){
   n = n*i;
   }
  printf(" le factoriel de n est %ld \n",n);
  }
 else
 printf("impossible \n");
 return 0;
 }
