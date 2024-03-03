#include <stdio.h>

int kelilingPersegi(int s) {return 4 * s;}
int luasPersegi(int s) {return s * s;}
int volumeKubus(int s) {return s * s * s;}

int main() {
    int s;
 
    scanf("%d", &s);
  
    int K = kelilingPersegi(s);
    int L = luasPersegi(s);
    int V = volumeKubus(s);
  
    printf("%d\n", K);
    printf("%d\n", L);
    printf("%d\n", V);

    return 0;
}