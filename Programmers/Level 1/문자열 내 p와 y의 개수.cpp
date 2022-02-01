#include <string>
#include <iostream>
#include <vector>

using namespace std;

bool solution(string s)
{
    int pCount = 0, yCount = 0;

    vector<char> str(s.begin(), s.end());
    
    for(int i = 0; i < str.size(); i++) {
        if(str[i] == 'p' || str[i] == 'P')
            pCount++;
        else if(str[i] == 'y' || str[i] == 'Y')
            yCount++;
    }

    if(pCount == yCount)
        return true;
    else
        return false;
}
