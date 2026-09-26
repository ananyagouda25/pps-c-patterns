// Program: Prints the following pattern where row number is inputted from the user.
//     1
//    222
//   33333
//  4444444
// 555555555
//  4444444
//   33333
//    222
//     1

#include <stdio.h>
int main(){
int n; 
printf("Enter n: "); 
scanf("%d",&n); 
for(int i=1;i<=n;i++){ 
    for(int k=1;k<=(n-i);k++) 
        printf(" "); 
   for(int j=1;j<=2*i-1;j++){ 
         printf("%d",i);} 
    printf("\n");} 
for(int i=n-1;i>=1;i--){ 
    for(int k=1;k<=n-i;k++) 
        printf(" "); 
   for(int j=1;j<=2*i-1;j++){ 
         printf("%d",i);} 
    printf("\n");} 
return 0;}
