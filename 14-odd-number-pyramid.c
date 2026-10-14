// Program: This program prints the following patterning taking number of rows as input from the user.
//         1
//       3 5 7
//     9 11 13 15 17
//   19 21 23 25 27 29 31
// 33 35 37 39 41 43 45 47 49

#include <stdio.h>
int main(){
int n,a=1;
printf("Enter n: ");
scanf("%d",&n);
  // Number of rows
for(int i=1;i<=n;i++){
  // Spaces
    for(int k=1;k<=(n-i);k++)
        printf("  ");
  // Number of elements in a row
    for (int j=1;j<=2*i-1;j++){
        printf("%d ",a);
        a=a+2;}
    printf("\n");}
return 0;}
