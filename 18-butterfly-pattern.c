// Program: It prints the following pattern. Value of n is inputted from user. Max number of rows in increasing half.
// *      *
// **    **
// ***  ***
// ********
// ***  ***
// **    **
// *      *

#include <stdio.h>
int main(){
int n;
printf("Enter n: ");
scanf("%d",&n);
  // Upper half
for(int i=1;i<=n;i++){
  // Left side
    for (int j=1;j<=i;j++)
        printf("*");
  // Spaces
    for (int k=1;k<=2*(n-i);k++)
        printf(" ");
  // Right half
    for (int l=1;l<=i;l++)
        printf("*");
    printf("\n");}
  // Lower half
for(int i=1;i<n;i++){
  //Left side
    for (int j=n-i;j>=1;j--)
        printf("*");
  // Spaces
    for (int k=1;k<=2*i;k++)
        printf(" ");
  // Right side
    for (int l=n-i;l>=1;l--)
        printf("*");
    printf("\n");}   
return 0;}  
