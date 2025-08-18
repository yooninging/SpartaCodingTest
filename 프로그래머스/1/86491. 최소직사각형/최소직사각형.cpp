#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> sizes) {
     int answer = 0;
    int bigger = 0, smaller = 0;

    if (sizes[0][0] > sizes[0][1]) smaller = sizes[0][1];
    else smaller = sizes[0][0];
    
    for (int i = 0; i < sizes.size(); i++)
    {
        if (sizes[i][0] > sizes[i][1]) 
        {
            if (bigger < sizes[i][0]) bigger = sizes[i][0];
            if (smaller < sizes[i][1]) smaller = sizes[i][1];
        }
        else 
        {
            if (bigger < sizes[i][1]) bigger = sizes[i][1];
            if (smaller < sizes[i][0]) smaller = sizes[i][0];
        }
    }
    
    answer = bigger * smaller;
    
    return answer;
}