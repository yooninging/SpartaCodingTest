#include <iostream>

using namespace std;
int solution(int n)
{
    int answer = 0;
    

    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
//    cout << "Hello Cpp" << endl;
    
    for (int i = 1; i<=n; i*=10)
    {
        answer += (n/i)%10;
    }
    


    return answer;
}