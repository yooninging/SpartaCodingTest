#include <string>
#include <vector>

using namespace std;

int solution(int left, int right) {
    int answer = 0;
    int k = 0;

    for (int i = left; i<=right; i++)
    {
        k = 0;
        for (int e = 1; e<i; e++)
        {
            if (i%e == 0) k++;    
        }
        (k&1) ? answer+=i : answer-=i;
    }
    
    return answer;
}