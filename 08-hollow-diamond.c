// Program: Prints the following pattern. Number of (upper/lower) rows is inputted from user.
//     *
//    * *
//   *   *
//  *     *
// *       *
//  *     *
//   *   *
//    * *
//     *

#include <stdio.h>
int main(){
int n; 
printf("Enter n: "); 
scanf("%d",&n); 
// Upper half
for(int i=1;i<=n;i++){ 
    for(int k=1;k<=(n-i);k++) 
        printf(" "); 
    printf("*");
    if (i!=1){
        for(int a=1;a<=2*i-3;a++)
            printf(" ");
        printf("*");}
    printf("\n");} 
// Lower half
for(int i=n-1;i>=1;i--){ 
    for(int k=1;k<=(n-i);k++) 
        printf(" "); 
    printf("*");
    if (i!=1){
        for(int a=1;a<=2*i-3;a++)
            printf(" ");
        printf("*");}
    printf("\n");} 
return 0;}
