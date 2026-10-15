// Program: Prints the following pattern. Number of rows is inputted from user.
// A
// BA
// ABA
// BABA
// ABABA

#include <stdio.h>
int main(){
int n;
char a[2]={'A','B'};
printf("Enter n: ");
scanf("%d",&n);
for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        int k=(i+j)%2;
        printf("%c ",a[k]);}
    printf("\n");}}
