// Program: Prints the following hourglass pattern. The user inputs the number of rows in half the pattern, including the middle row.
// *********
//  *******
//   *****
//    ***
//     *
//    ***
//   *****
//  *******
// *********

#include <stdio.h>
int main(){
int n;
printf("Enter n: ");
scanf("%d",&n);
if(n==1)
printf("1");
else{
  // Upper half
for(int i=0;i<n;i++){
  // Leading spaces
    for (int k=1;k<=i;k++)
        printf(" ");
  // Number of stars
    for (int k=1;k<=2*(n-i)-1;k++)
        printf("*");
    printf("\n");}
  // Lower half
for(int i=2;i<n+1;i++){
  // Leading spaces
    for (int k=1;k<=n-i;k++)
        printf(" ");
  // Number of stars
    for (int k=1;k<=2*i-1;k++)
        printf("*");
    printf("\n");}}   
return 0;}  
