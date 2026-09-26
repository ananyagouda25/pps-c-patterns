// Program: Prints the following pattern. No. of rows is inputed from user.
//     1
//    121
//   12321
//  1234321
// 123454321

#include <stdio.h>
int main(){
int n;
printf("Enter n: ");
scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++)
    a[i]=i+1;
for(int i=1;i<=n;i++){
    for(int k=1;k<=(n-i);k++)
        printf("  ");
    for (int j=0;j<i;j++)
        printf("%d ",a[j]);
    for(int j=i-2;j>=0;j--)
        printf("%d ",a[j]);
    printf("\n");}
return 0;}
