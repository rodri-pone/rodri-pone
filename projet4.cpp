
#include<iostream>

int main(int argc, char**argv){
 float c1,c2,c3;
 printf("Entrer le premier cote du triangle :\n");
 scanf("%f",&c1);
 printf("Entrer le deuxieme cote du triangle :\n");
 scanf("%f",&c2);
 printf("Entrer le troisieme cote du triangle :\n");
 scanf("%f",&c3);
 if(c1==c2 && c2==c3 && c1==c3)
  printf(" le triangle c1 c2 et c3 est un triangle equilateral \n");
 else if(c1!=c2 && c2 !=c3 && c1!=c3)
  printf(" le triangle c1 c2 et c3 est un triangle quelconque \n");
 else if(c1==c2 && c2!=c3 || c2==c3 && c2!=c1 || c3==c1 && c1 != c2)
  printf(" le triangle c1 c2 et c3 est un triangle isole \n");
  return 0;
}
