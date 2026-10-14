// Program: Prints the following pattern. Number of rows of upper/lower half are inputted from user.
// 1
// 22
// 333
// 4444
// 55555
// 4444
// 333
// 22
// 1

#include <stdio.h>
int main(){
int n;
printf("Enter n: ");
scanf("%d",&n);
  // Upper half
for(int i=1;i<=n;i++){
    for (int j=1;j<=i;j++)
        printf("%d",i);
    printf("\n");}
  // Lower half
for(int i=1;i<=n;i++){
    for (int j=1;j<=n-i;j++)
        printf("%d",n-i);
    printf("\n");}    
return 0;}
