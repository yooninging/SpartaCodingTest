#include <string>
#include <vector>

using namespace std;

string solution(vector<string> seoul) {
    string answer = "";
    
   for (int i = 0; i < seoul.size(); i++)
   {
       if (seoul.at(i) == "Kim")
       {
           answer = "김서방은 ";
           answer += to_string(i);
           answer += "에 있다";
           break;
       }
    }

    
    return answer;
}