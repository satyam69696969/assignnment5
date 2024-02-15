#include <stdio.h>
int main() {
    int x,y,z;
    printf("Enter Three Numbers:");
    scanf("%d %d %d",&x,&y,&z);
    x>y?(x>z? printf("maximun of the three is %d",x):printf("maximum of the three is %d",z)):(y>z? printf("maximum of the three is%d",y):printf("maximum of the three is %d,z"));
    return 0;

}