#include <stdio.h>
#include <stdbool.h>

bool estbissextile (int annee){
     if ((annee % 4==0 && annee%100!=0)||(annee%400==0)){
        return true ;
    }else{
        return false;
    }
}
int main(){
    int annee;
    printf("entrer une annee:");
    scanf("%d", &annee);

    if (estbissextile(annee)){
       printf("annee %d est bissextile .\n",annee);
    }else{
       printf("annee %d n est pas bissextile .\n",annee);
       }
       return 0;
}
