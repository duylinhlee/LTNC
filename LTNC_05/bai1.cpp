#include <stdio.h>
#include <stdlib.h>
void update(int *a,int *b) {
    // Complete this function 
     int *prt_a = a;
    int *prt_b = b;
    *a = *prt_a + *prt_b;
    *b = abs(*prt_a - 2* *prt_b);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d \n%d", a, b);

    return 0;
}

