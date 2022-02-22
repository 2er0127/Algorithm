#include <iostream>

using namespace std;

int main() {
    string str;
    
    cin >> str;
    
    // 일단 s를 입력받고 출력을 하는데, 만약 10으로 나누어서 0이되면 줄바꿈
    for(int i = 0; i < str.size(); i++) {
        cout << str[i];
        
        if((i+1) % 10 == 0)
            cout << "\n";
    }
}
