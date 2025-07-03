using namespace std;

long long solution(int price, int money, int count)
{
    long long answer = -1;
    long long SumCount = 0;

    
    for (int i = 1; i <= count; i++)
    {
        SumCount += i*price;
    }
    answer = (SumCount > money ? SumCount - money : 0);
        
    
    
    return answer;
}