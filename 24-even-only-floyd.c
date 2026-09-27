// Program: Prints the floyd's pattern with only even numbers. Number of rows is inputted from user.
// 2
// 4 6
// 8 10 12
// 14 16 18 20
// 22 24 26 28 30

#include <stdio.h>
int main(){
int n,num=2;
printf("Enter n: ");
scanf("%d",&n);
for(int i=1 ;i<=n;i++){
   for(int j=1;j<=i;j++){
        printf("%d ",num);
        num+=2;}
    printf("\n");}
return 0;}
