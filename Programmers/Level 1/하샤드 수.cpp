#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    int sum = 0;
    int number = x;
    
    while(number > 9) {
        sum += number % 10;
        number /= 10;
    }
    
    sum += number;
    
    return x % sum == 0;
}
