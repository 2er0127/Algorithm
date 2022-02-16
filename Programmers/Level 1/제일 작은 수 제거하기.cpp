#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer(arr);
    int min_ele = *min_element(answer.begin(), answer.end());
    
    for(int i = 0; i < arr.size(); i++) {
          /* if(answer.empty() == true) {
            answer.push_back(-1);
            return answer;
        } */
        
        if(answer.size() == 1) {
            answer.clear();
            answer.push_back(-1);
            return answer;
        }
        
        answer.erase(remove(answer.begin(), answer.end(), min_ele), answer.end());
        
        return answer;
    }
}
