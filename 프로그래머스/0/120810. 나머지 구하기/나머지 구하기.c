#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num1, int num2) {
    int answer = -1;
    
    int temp = 0;
    
    temp = num1/num2;
    
    answer = num1-(num2*temp);
    
    
    return answer;
}