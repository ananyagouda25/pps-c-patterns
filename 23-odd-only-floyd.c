// Program: Prints floyd's triangle with only odd numbers. number of rows is inputted from user.
// 1
// 3 5
// 7 9 11
// 13 15 17 19
// 21 23 25 27 29

#include <stdio.h>
int main(){
int n,num=1;
printf("Enter n: ");
scanf("%d",&n);
for(int i=1 ;i<=n;i++){
   for(int j=1;j<=i;j++){
        printf("%d ",num);
        num+=2;}
    printf("\n");}
return 0;}
