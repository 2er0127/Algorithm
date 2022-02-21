#include <iostream>

using namespace std;

int main() {
    int num, a, b;
    char comma;
    
    cin >> num;
    
    for(int i = 0; i < num; i++) {
        cin >> a >> comma >> b;
        cout << a+b << "\n";
    }
}
