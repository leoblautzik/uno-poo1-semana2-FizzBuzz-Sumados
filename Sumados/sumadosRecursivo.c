#include<stdio.h>
int gauss(int);

int main(){

    for(int i=1; i<=10;i++)
        printf("%d\n", gauss(i));

}
int gauss(int n){
    if(n==1)
        return 1;
    else
        return n+gauss(n-1);
}
