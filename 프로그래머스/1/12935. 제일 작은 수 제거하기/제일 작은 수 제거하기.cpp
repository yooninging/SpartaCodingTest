#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int temp = arr.at(0);
    
    if (arr.size() <= 1)
    {
        answer.push_back(-1);
        return answer;
    }
    
    for (int i = 0; i < arr.size(); i++)
    {
        if (temp > arr.at(i))
        {
            temp = arr.at(i);
        }
    }
    
    auto itr = find(arr.begin(), arr.end(), temp);
    arr.erase(itr);
    answer = arr;
    
    return answer;
}