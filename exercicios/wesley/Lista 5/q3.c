#include <stdio.h>
#include <math.h>
#define tam 2
int main() {
    int i,j,m[tam][tam];

    for(i=0; i < tam; i++){
        for(j=0; j < tam; i++){
            if(i<j){
                m[i][j]=(2*i)+(7*j)-2;
            }
            if(i==j){
                m[i][j]=(3*pow(i,2))-1;
            }
            if(i>j){
                m[i][j]=((4*pow(i,3))-(5*pow(j,2)))+1;
            }
        }
    }
return 0;}