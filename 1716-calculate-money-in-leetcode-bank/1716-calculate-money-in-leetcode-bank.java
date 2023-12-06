class Solution {
    public int totalMoney(int n) {
        int answer = 0;
        int putMoney = 1;
        
        for (int i = 0; i < n; ++i)
        {
            if (i != 0 && i % 7 == 0)
                putMoney++;
            answer += i % 7 + putMoney;
        }
        return answer;
    }  
}