#include <stdio.h>

int main() {
int i,j;
int num[2][2]; // reading value.
for (i = 0;i<2;i++){
    for (j=0;j<2;j++){
        printf("\n Enter value of num[%d] [%d]:\n ",i,j);
        scanf("%d",&num[i][j]);
        }
    }

// printing value
for (i=0;i<2;i++) {
    for (j=0;j<2;j++) {
        printf("You entered value of num[%d] [%d]: %d\n",i,j,num[i][j]);
        }
    }
return 0;
}
