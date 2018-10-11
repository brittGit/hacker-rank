#include <stdio.h>
#include <cstdlib> 
#include <iostream> 

void update(int *aPtr,int *bPtr) {
    int p1, p2;
    //printf("Entry: %d %d\n", aPtr, bPtr);
    //printf("Entry: %d %d\n", *aPtr, *bPtr);
    p1 = *(aPtr) + *(bPtr);
    p2 = abs(*aPtr - *bPtr);
    *aPtr = p1;
    *bPtr = p2;
    //printf("Exit: %d %d\n", aPtr, bPtr);
    //printf("Exit: %d %d\n", *aPtr, *bPtr);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}