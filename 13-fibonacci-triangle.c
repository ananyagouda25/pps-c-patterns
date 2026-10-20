// Program: Prints the following pattern where number of rows is inputted from user.
// 0
// 1 1
// 2 3 5
// 8 13 21 34
// 55 89 144 233 377

#include <stdio.h>
int main(){
int n,f=0,f1=1,f2=1;
printf("Enter n: ");
scanf("%d",&n);
for(int i=0;i<n;i++){
    for(int j=0;j<=i;j++){
        printf("%d ",f);
        f1=f2;
        f2=f;
        f=f1+f2;}
    printf("\n");}
return 0;}
