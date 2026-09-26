// Program: Prints the following pattern. No. of rows is inpputed from user.
//     1
//    1 1
//   1   1
//  1     1
// 111111111

#include <stdio.h>
int main(){
int n;
printf("Enter n: ");
scanf("%d",&n);
if (n==1)
    printf("1");
else{ 
    for(int i=1;i<=n;i++){
        for(int k=1;k<=(n-i);k++)
            printf(" ");
        if (i==1)
            printf("1\n");
        else if (i==n){
            for(int i=1;i<=((2*n)-1);i++)
                printf("1");
            printf("\n");}
        else{
            printf("1");
            for (int j=2;j<(2*i-1);j++)
                printf(" ");
            printf("1\n");}}}
return 0;}

