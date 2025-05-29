#include <string>
#include <vector>
#include <cstring>


using namespace std;

string solution(string my_string, string letter) {
    string answer = "";
    int e = 0;
    
    for (int i = 0; i < my_string.size(); i++)
    {
         if (my_string.at(i) != letter.front())
         {
             answer.push_back(my_string.at(i));
             e++;
         }
    }
    
    
    return answer;
}