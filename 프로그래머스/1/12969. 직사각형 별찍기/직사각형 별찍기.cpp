#include <iostream>

using namespace std;

int main(void) {
    int a;
    int b;
    cin >> a >> b; // 정수 n과 m이 입력됨
    
    for (int i = 0; i < b; i++)
    {
        for (int e = 0; e < a; e++)
        {
            cout << "*";
        }
        cout << endl;
    }
    
    
    return 0;
}