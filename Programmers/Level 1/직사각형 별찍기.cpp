#include <iostream>

using namespace std;

int main(void) {
    int a;
    int b;
    
    cin >> a >> b;
    
    // cout 보다 빠른 printf() 사용
    for(int i = 0; i < b; i++) {
        for(int j = 0; j < a; j++) {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}
