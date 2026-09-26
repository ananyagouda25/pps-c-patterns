// Program: Prints the floy'd triangle where number of rows is inputted from user.
// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15

#include <stdio.h>
int main(){
int n,num=1;
printf("Enter n: ");
scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++)
    a[i]=i+1;
for(int i=1;i<=n;i++){
   for(int j=1;j<=i;j++){
        printf("%d ",num);
        num+=1;}
    printf("\n");}
return 0;}
