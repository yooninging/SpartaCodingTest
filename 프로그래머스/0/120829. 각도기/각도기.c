#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int angle) {
    int answer = 0;
  
    if (angle < 90)
        answer = 1;
    else if (angle == 90)
        answer = 2;
    else if (180 > angle && angle > 90)
        answer = 3;
    else if (angle == 180)
        answer = 4;
    else
        return answer;
    
    
    return answer;
}