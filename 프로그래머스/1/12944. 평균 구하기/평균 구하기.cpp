#include <string>
#include <vector>

using namespace std;

double solution(vector<int> arr) {
    double answer = 0;
    
    for (int i = 0; i < arr.size(); i++)
    {
        answer += arr.at(i);
    }
    
    answer = answer/arr.size();
    
    return answer;
}