#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* str1, const char* str2) {
    int answer = 0;
    int e = 0;
    int temp = 0;
    
    for (int i = 0 ; i < strlen(str1); i++)
    {
        if (str1[i] == str2[e])
        {
            for (e=0;;e++)
            {
                if (e==strlen(str2))
                {
                    temp = 1;
                    break;
                }
                else if (str1[i]==str2[e])
                {
                    i++;
                }
                else
                    break;
            }
        }
    }
    
    if (temp == 1)
        answer = 1;
    else answer = 2;
    
   
    return answer;
}