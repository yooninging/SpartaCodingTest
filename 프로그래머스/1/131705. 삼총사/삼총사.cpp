#include <string>
#include <vector>

using namespace std;

int solution(vector<int> number) {
    int answer = 0;
    
    for (int for1 = 0; for1 < number.size(); for1++)
    {
        for (int for2 = for1 + 1; for2 < number.size(); for2++)
        {
            for (int for3 = for2 + 1; for3 < number.size(); for3++)
            {
                if (number[for1] + number[for2] + number[for3] == 0) answer++; 
            }
        }
    }
    
    return answer;
}