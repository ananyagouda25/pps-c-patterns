// Program: Prints the X pattern. The user inputs the number of rows in half the pattern, including the middle row.
// *     *
//  *   *
//   * *
//    *
//   * *
//  *   *
// *     *

#include <stdio.h>
int main(){
int n;
printf("Enter n: ");
scanf("%d",&n);
if(n==1)
printf("*");
else{
  // Upper half
for(int i=1;i<=n;i++){
    for (int k=1;k<=i-1;k++)
        printf(" ");
    printf("*");
  // Middle spaces
    for (int k=1;k<=2*(n-i)-1;k++)
        printf(" ");
    if (i==n){
    printf("\n");
    break;}
    printf("*");
    printf("\n");}
  // Lower half
for(int i=1;i<n;i++){
    for (int k=1;k<=n-i-1;k++)
        printf(" ");
    printf("*");
  // Middle spaces
    for (int k=1;k<=2*i-1;k++)
        printf(" ");
    printf("*");
    printf("\n");}}   
return 0;} 
