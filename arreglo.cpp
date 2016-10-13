#include<stdio.h>
#include<conio.h>
int main(){
int x[10];
int i,j,a;
for (i=0; i <10; i=i++){
printf("De valor de x[%d]:", i+1);
scanf("%d",&x[i]);
}
for (i=0; i <10; i=i++)
for (j=0; j <10; j=j++)
if ( x[i] < x[j] ){
a= x[i];
x[i]=x[j];
x[j]=a;
}
for(i=0; i <10; i=i++)
printf("%3d", x[i]);
getch();
return 0;
}
