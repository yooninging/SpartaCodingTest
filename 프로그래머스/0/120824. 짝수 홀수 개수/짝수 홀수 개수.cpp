#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    int temp = 0;
    
    for (int i = 0; i < num_list.size(); i++)
    {
        if (num_list.at(i) % 2 == 0)
        {
            temp++;
        }
    }
    
    answer.push_back(temp);
    answer.push_back(num_list.size()-temp);
   
    
    return answer;
}