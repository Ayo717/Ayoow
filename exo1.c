#include <stdio.h>
int main() {
    int A, B, C, tmp;
    printf("Donner A, B et C : ");
    scanf("%d %d %d", &A, &B, &C); 
    if (A > B) {          
        tmp = A;
        A = B;
        B = tmp;
    }
    if (B > C) {        
        tmp = B;
        B = C;
        C = tmp;
    }
    if (A > B) {          
        tmp = A;
        A = B;
        B = tmp;
    }
    printf("Les valeurs triees : %d %d %d\n", A, B, C);
    return 0;
}
