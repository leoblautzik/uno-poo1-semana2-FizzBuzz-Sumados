#include<stdio.h>

int sumados(int);

int main(){
    for(int i=1; i<=10;i++)
        printf("%d\n",sumados(i));
}

int sumados(int n){
    int suma=0;
    for(int i=1;i<=n;i++)
        suma+=i;
    return suma;
}

