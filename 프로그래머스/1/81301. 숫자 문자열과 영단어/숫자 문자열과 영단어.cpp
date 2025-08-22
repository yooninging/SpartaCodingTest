#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    vector<string> numWords = {
        "zero", "one", "two", "three", "four",
        "five", "six", "seven", "eight", "nine"
    };
    string temp;
    string result;
    
    for (char c : s) 
    {
        if (isdigit(c)) 
        {
            result.push_back(c);
        } 
        else 
        {
            temp.push_back(c);
            for (int i = 0; i < numWords.size(); i++) 
            {
                if (temp == numWords[i]) 
                {
                    result.push_back('0' + i);
                    temp.clear();             
                    break;
                }
            }
        }
    }
    
    answer = stoi(result);
    
    return answer;
}