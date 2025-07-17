#include <string>
#include <vector>

using namespace std;

int gcd(int a, int b);

vector<int> solution(int n, int m) {
    vector<int> answer;
    
    answer.resize(2, 0);
    
    answer[0] = gcd(n,m);
    answer[1] = n*m/answer[0];
    
    return answer;
}

int gcd(int a, int b)
{
    int r;
    while(1)
    {
        int r = a%b;
        
        if (r==0)
            return b;
        a = b;
        b = r;
    }
}