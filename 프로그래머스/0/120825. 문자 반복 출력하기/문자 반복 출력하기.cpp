#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int n) {
    string answer = "";
    
    for (int i = 0; i<my_string.size(); i++)
    {
        for (int e = 0; e<n; e++)
        {
            answer.push_back(my_string.at(i));
        }
    }
    return answer;
}