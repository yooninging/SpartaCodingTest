#include <string>
#include <vector>
#include <cmath>

using namespace std;

long long solution(int a, int b) {
    long long answer = 0;
    
    if (a == b)
        return a;
    else if (a<b)
        for (long long i = a; i <= b; i++)
            answer += i;
    else 
        for (long long i = b; i <= a; i++)
            answer += i;
    
    
    
    return answer;
}