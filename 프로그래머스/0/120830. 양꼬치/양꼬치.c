#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n, int k) {
    int answer = 0;
    int temp;
    
    temp = n/10;
    
    answer = n*12000+(k-temp)*2000;
    
    return answer;
}