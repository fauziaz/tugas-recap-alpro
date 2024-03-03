#include <stdio.h>

int main() {
    int jumel, t = 0;
    scanf("%d", &jumel);    
    
    int array[jumel];
    for (int i = 0; i < jumel; i++) {
        scanf("%d", &array[i]);
        t += array[i];
    }

    printf("%d\n", t);

    return 0;
}