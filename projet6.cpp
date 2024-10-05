#include<iostream>
int main(int argc, char**argv){
 float h,b,c1,c2,c3,P,A;
 printf(" entrer les cotes du triangle \n");
 scanf("%f %f %f",&c1, &c2, &c3);
 printf(" entrer la base du triangle \n");
 scanf("%f",&b);
 printf(" Entrer la hauteur du triangle \n");
 scanf("%f",&h);
 A= (b*h)/2;
  printf(" L'aire du triangle est :%f\n",A);
 if(c1>0 && c2>0 && c3>0){
  P=c1+c2+c3;
  
  printf(" Le perimetre du triangle est :%f\n",P);
 
  }
  else
   printf("impossible \n");
 return 0;
}
