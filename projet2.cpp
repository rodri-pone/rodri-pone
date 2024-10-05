#include<iostream>
int main( int argc,char**argv){
 float r,A,P;
 const float pi=3.14;
 printf(" Entrer le rayon du cercle \t");
 scanf("%f",&r);
 if(r>0){
  A=r*r*pi;
  P=2*pi*r;
  printf("l'aire du cercle est: %f \n",A);
  printf("Le perimetre du cercle est :%f \n",P);
 }
 else
  printf(" impossible \n");
 return 0;
}
