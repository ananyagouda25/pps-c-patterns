// Program: Prints the pascal's trinagle. Number is rows is taken from user.
//      1
//     1 1
//    1 2 1        (For n=6)
//   1 3 3 1
//  1 4 6 4 1
// 1 5 10 10 5 1


#include <stdio.h>
int main(){
int n,curr=1;
printf("Enter n: ");
scanf("%d",&n);
for(int i=0;i<n;i++){
    for(int k=1;k<n-i;k++)
        printf(" ");
    for(int j=0;j<=i;j++){
        if (j==0)
        curr=1;
        else
        curr=curr*(i-j+1)/j;
        printf("%d ",curr);}
    printf("\n");}
return 0;}
