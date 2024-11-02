#include <stdio.h>

void echanger_ou_calculer (int*a, int*b){
     if ((*a>0 &&*b>a)||(*a<0 && *b<0)){
     int temp=*a;
     *a=*b;
     *b=temp;
    }else{
      int somme=*a+*b;
      int produit=*a**b;
    }
}
int main(){
    int x,y;
    printf("entrer la valeur de x:");
    scanf("%d", &y);
    printf("entrer la valeur de y:");
    scanf("%d", &y);

    printf("apres traitement : x=%d ,y=%d\n",x,y);

       return 0;
}
