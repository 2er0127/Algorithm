#include <string>
#include <vector>

using namespace std;

bool solution(string s) {
    bool answer = true;
    
    vector<char> str(s.begin(), s.end());
    
    // 1. 4 or 6인지 확인
    // 2. 문자가 있으면 false
    
    if(str.size() != 4 && str.size() != 6)
        return false;
    
    for(int i = 0; i < str.size(); i++) {
        if('0' > str[i] || str[i] > '9')
            return false;
    }
    
    return answer;
}
