// Program: Prints the folowing pattern where number of rows is inputted from user.
// 123454321
//  1234321
//   12321
//    121
//     1

#include <stdio.h>
int main(){
int n;
printf("Enter n: ");
scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++)
    a[i]=i+1;
for(int i=0;i<=n;i++){
    for(int k=n;k>(n-i);k--)
        printf(" ");
    for (int j=0;j<(n-i);j++)
        printf("%d",a[j]);
    for(int j=n-i-2;j>=0;j--)
        printf("%d",a[j]);
    printf("\n");}
return 0;}
