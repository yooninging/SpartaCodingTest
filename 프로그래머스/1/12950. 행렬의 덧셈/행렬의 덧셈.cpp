#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) 
{
    vector<vector<int>> answer;
    
    answer.resize(arr1.size(), arr1[0]);
    
    for (int i = 0; i< arr1.size(); i++)
    {
        for (int e = 0; e< arr1[0].size(); e++)
        {
            answer[i][e] = arr1[i][e] + arr2[i][e];
        }
    }
    
    return answer;
}