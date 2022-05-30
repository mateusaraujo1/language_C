#include<stdio.h>
#include<math.h>
int bhaskara(double a,double b,double c, double *x1, double *x2);

int main(){
    double a,b,c,x1,x2;
    int r;
    printf("Informe os valores de a,b e c: \n");
    scanf("%lf %lf %lf",&a,&b,&c);
    r=bhaskara(a,b,c,&x1,&x2);
    printf("Quantidade de raizes: %d\n",r);
 
return 0;}

int bhaskara(double a,double b,double c, double *x1, double *x2){
    double delta=0;
    int r;
    delta=pow(b,2)-4*a*c;
    if(delta>=0){
        *x1=(-b + sqrt(delta))/(2*a);
        *x2=(-b - sqrt(delta))/(2*a);
      /*printf("delta: %lf\n",delta);
        printf("delta2: %lf\n",sqrt(delta));
        printf("raizes %lf %lf\n",*x1,*x2);*/
    }
    if(delta==0){
        r=1;}
    if(delta>0){
        r=2;}
    if(delta<0){
        r=0;}        
return r;}