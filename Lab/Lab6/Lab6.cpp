#include <stdio.h>

int main(void){
    int N;

    printf("Enter value: ");
    if (scanf("%d", &N) != 1) {
        printf("please enter number only.\n");
        return 1;
    }
    
    if (N % 2 == 1) {
        printf("Series: ");
        for (int i = 1; i <= N; i += 2) {
            printf("%d ", i);
        }
    }

    else {
        printf("Series: ");
        for (int i = N; i >= 0; i -= 2) {
            printf("%d ", i);
        }
    }

    return 0;

}
