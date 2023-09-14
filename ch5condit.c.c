#include <stdio.h>
#include <stdlib.h>

int main()
{ int annee;
printf("entrer le nbr d'annee que vous voulez convertir");
scanf("%d",&annee);
printf ("convertir en mois choisissez 1\nconvertir en jour choisissez 2\n convertir en heures choisissez 3\n convertir en minutes choisissez 4\n convertir en secondes choisissez 5\n");
int a;
scanf("%d",&a);
if(a==1){
    printf("%d",annee*12);
}else if(a==2){
printf("%d",annee*365);
}
else if(a==3){
    printf("%d",annee*365*24);
}
else if(a==4){
    printf("%d",annee*365*24*60);
}
else if(a==5){
    printf("%d",annee*365*24*3600);
}
else {
    printf("voir menu");
}

    return 0;
}

/*Ecrire un programme C piloté par menu pour convertir une année donnée en,

Mois
Jours
Heures
Minutes
Secondes Pour plus de simplicité, n'incluez pas l'année bissextile (sauf si vous êtes courageux pour le faire). 1 an = 365 jours 1 mois = 30 jours*/


