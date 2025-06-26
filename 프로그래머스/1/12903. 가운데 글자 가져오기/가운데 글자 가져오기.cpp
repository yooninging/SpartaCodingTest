#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    
    int i = s.size();
    
    if (i%2 == 0)
    {
        answer.resize(2);
        answer[0] = s[(int)i/2-1];
        answer[1] = s[(int)i/2];
    }
    else
    {
        answer.resize(1);
        answer[0] = s[(int)i/2];
    }
    
    return answer;
}