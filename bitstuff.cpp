#include <stdio.h>

int main() {
    int a[30], b[60], i = 0, j = 0, k = 0, n, count = 0;
    
    printf("Enter frame size: ");
    scanf("%d", &n);
    
    printf("Enter the binary bit stream (0s and 1s separated by space): ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    i = 0;
    j = 0;
    count = 0;
    
    while (i < n) {
        if (a[i] == 1) {
            count++;
            b[j] = a[i];
        } else {
            count = 0;
            b[j] = a[i];
        }
        
        if (count == 5) {
            j++;
            b[j] = 0; 
            count = 0;
        }
        i++;
        j++;
    }
    
    printf("Stuffed Bit Stream: 01111110 "); 
    for (i = 0; i < j; i++) {
        printf("%d", b[i]);
    }
    printf(" 01111110\n"); 
    
    return 0;
}

