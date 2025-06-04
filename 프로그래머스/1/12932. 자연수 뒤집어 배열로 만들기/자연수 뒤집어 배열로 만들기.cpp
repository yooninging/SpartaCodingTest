#include <string>
#include <vector>

using namespace std;

vector<int> solution(long long n) {
    vector<int> answer;
    int temp;

    string number = to_string(n);
        
    for (int i = 0; i < number.size(); i++)
    {
        temp = number[number.size()-i-1]-'0';
        answer.push_back(temp);
    }
    
    
    return answer;
}