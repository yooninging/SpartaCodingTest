#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    string answer = "";
    
    for (int i = 0; i < s.size(); i++)
    {
        if ( s.at(i) == ' ')   
        {
            answer.push_back(' ');
            continue;
        }
        if ( s.at(i) <= 'z' && s.at(i)+n > 'z') 
        {
            answer.push_back('a' + ( s.at(i) + n - 'z' ) - 1 );
        }
        else if ( s.at(i)+n > 'Z' && s.at(i) <= 'Z')  
        {
            answer.push_back('A' + ( s.at(i) + n - 'Z' ) - 1 ) ;
        }
        else answer.push_back( s.at(i) + n );
    }
    
    return answer;
}