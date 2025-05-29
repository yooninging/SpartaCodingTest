#include <string>
#include <vector>

using namespace std;

string solution(int num) {
    string answer = "";
    bool flag;
    
    flag = (num & (1 << 0));
    
    if (flag)
        answer = "Odd";
    else
        answer = "Even";
    
    
    
    return answer;
}