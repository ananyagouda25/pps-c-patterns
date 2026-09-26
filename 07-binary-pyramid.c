// Program: Prints the following pattern where number of rows is inputterd from user.
//     1
//    010
//   10101
//  0101010
// 101010101

// Hint: Uses (row + column)%2 instead of arrays/hard-coding data.//

#include <stdio.h>
int main(){
int n; 
printf("Enter n: "); 
scanf("%d",&n); 
for(int i=1;i<=n;i++){ 
    for(int k=1;k<=(n-i);k++) 
        printf(" "); 
   for(int j=0;j<2*i-1;j++){ 
         printf("%d",(i+j)%2);} 
    printf("\n");} 
return 0;}
