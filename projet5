#include<iostream>
#include<cmath>
int main(int argc, char**argv)
{
 float A1,B1,C1,A,B,C,A1x,A1y,B1x,B1y,C1x,C1y;
 float ax,ay,bx,by,cx,cy,A12,B12,C12;
 printf(" Entrer les coordonnees du point A: \n");
 scanf("%f %f",&ax, &ay);
 printf(" Entrer les coordonnees du point B: \n");
 scanf("%f %f",&bx ,&by);
 printf(" Entrer les coordonnees du point C: \n");
 scanf("%f %f",&cx, &cy);
 //calcul des coordonnees des points
 A1x=(bx-ax);
 A1y=(by-ay);
 B1x= (cx-bx);
 B1y=(cy-by);
 C1x=(cx-ax);
 C1y=(cy-by);
 // elever les coordonnees de chaque point au carre
 A1= pow(A1x,2);
 A12=pow(A1y,2);
 B1= pow(B1x,2);
 B12=pow(B1y,2);
 C1= pow(C1x,2);
 C12=pow(C1y,2);
 // mettre la racine carre pour trouver la distance entre les point A,B et C
 A=sqrt(A1+ A12);
 B=sqrt(B1+B12);
 C=sqrt(C1+C12);
 printf("les distances entres les points A,B et C sont :%f %f %f\n",A,B,C);
 return 0;
 }
