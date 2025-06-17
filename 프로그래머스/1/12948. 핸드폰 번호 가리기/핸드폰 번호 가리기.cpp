#include <string>
#include <vector>

using namespace std;

string solution(string phone_number) {
    string answer = "";
    int len = phone_number.length();
  	answer.resize(phone_number.length());
    
    for (int i = 0; i<len-4; i++)
        answer[i] = '*';
    for (int i = len-4; i<len; i++)
        answer[i] = phone_number[i];
    
    
    return answer;
}