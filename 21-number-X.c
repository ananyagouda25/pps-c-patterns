// Program: Prints the X pattern with numbers. The user inputs the number of rows in half the pattern, including the middle row.
// 1     1
//  2   2
//   3 3
//    4
//   3 3
//  2   2
// 1     1

#include <stdio.h>
int main(){
int n;
printf("Enter n: ");
scanf("%d",&n);
if(n==1)
printf("1");
else{
  // Upper half
for(int i=1;i<=n;i++){
  // Leading spaces
    for (int k=1;k<=i-1;k++)
        printf(" ");
    printf("%d",i);
  // Middle spaces
    for (int k=1;k<=2*(n-i)-1;k++)
        printf(" ");
    if (i==n){
    printf("\n");
    break;}
    printf("%d",i);
    printf("\n");}
  // Lower half
for(int i=1;i<n;i++){
  // Leading spaces
    for (int k=1;k<=n-i-1;k++)
        printf(" ");
    printf("%d",n-i);
  // Middle spaces
    for (int k=1;k<=2*i-1;k++)
        printf(" ");
    printf("%d",n-i);
    printf("\n");}}   
return 0;}  

