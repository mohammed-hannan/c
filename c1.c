#include <stdio.h>
int main(){
    char prenom[14], nom[15], sexe[30], adresse[30];
    int age;
    printf("sisair votre prenom :");
    scanf("%s",&prenom);
    printf("sisair votre nom :");
    scanf("%s",&nom);
    printf("sisair votre sexe :");
    scanf("%s",&sexe);
    printf("sisair votre adresse :");
    scanf("%s",&adresse);
    printf("sisair votre age :");
    scanf("%d",&age);

    printf("votre prenom : %s \n" ,prenom );
    printf("votre nom: %s \n",nom);
    printf("votre sexe :%s\n",sexe );
    printf("votre adresse :%s\n",adresse);
    printf("votre age :%d\n" ,age);
     return 0;

}




