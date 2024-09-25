#include <stdio.h>
int main (){
    float temperature;
    printf("entrer la temperature en celsius");
    scanf("%f",&temperature);
    if(temperature>0){
        printf("l'etat de l'eau est solide\n");}
        else if(temperature>=0 && temperature<100){;
        printf("l'etat de l'eau eat liquide\n");}
        else if("temperature <=100"){
        printf("l'etat de l'eau est gazeux" );}
        return 0;
}
