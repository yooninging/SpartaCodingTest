#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string) {
    string answer = "";
    
    reverse(my_string.begin(), my_string.end());
    
    answer = my_string ;
    
    return answer;
}