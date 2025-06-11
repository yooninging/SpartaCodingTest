#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    int answer = 0;
    int i = 0;
    long q = (long) num;
    
    while (1)
    {
        if (q == 1 ) 
            break;
        else if 
            (q % 2 == 0) q = q / 2;
        else 
            q = q * 3 + 1;
        i++;
        if (i>500) 
            return -1;
    }    
    answer = i;
    
    
    return answer;
}