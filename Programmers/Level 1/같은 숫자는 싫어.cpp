#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int check = arr[0];
    answer.push_back(check);
    
    for(int i = 0; i < arr.size(); i++) {
        if(check != arr[i]) {
            check = arr[i];
            answer.push_back(check);
        }
    }

    return answer;
}
