#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){
float a,b,c;
printf("entrer les coefiicients de l'equation" );
scanf("%f \n %f \n %f",&a,&b,&c);
printf("l'equation que vous avez entrer est la suivante: %.1fX^2+%.1fX+%.1f=0\n",a,b,c);
float d=sqrt(pow(b,2)-4*a*c);//racine delta
float x1=(-b+d)/2*a;
float x2=(-b-d)/2*a;
float x3=-b/2*a;
if(d>0){


printf("les solution %f ou %f",x1,x2);

 }
 else if(d==0){
    
    printf("la solution %f",x3);
 }else{
    printf("pas desolution ");
 }
 return 0;
}