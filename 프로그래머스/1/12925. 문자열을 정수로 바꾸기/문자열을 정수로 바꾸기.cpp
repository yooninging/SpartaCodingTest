#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    int pow = 1;
    
    if (s.front() == '+')
    {
        for (int i = 1; i<s.size(); i++)
        {
            
            answer += (s[s.size() - i]-'0')*pow;
            pow *=10;
        }
    }
    else if (s.front() == '-')
    {
        for (int i = 1; i<s.size(); i++)
        {
            
            answer += (s[s.size() - i]-'0')*pow;
            pow *=10;
        }
        answer *= -1;
    }
    else 
    {
        // 이걸 제한할꺼면 좀 자세하고 명확하게 해야하는데 이건 편하게 놓겠음
        // 앞에 부호를 안넣는 경우를 그냥 +인 경우로 가정
       for (int i = 0; i<s.size(); i++)
       {
            
            answer += (s[s.size()-i-1] - '0')*pow;
            pow *=10;
        }        
    }
    
    return answer;
}