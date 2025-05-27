#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    
    for (int i = n/2; i>0; i--)
        answer += i*2;
    
    return answer;
}