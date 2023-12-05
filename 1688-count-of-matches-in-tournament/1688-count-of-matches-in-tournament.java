class Solution {
    public int numberOfMatches(int n) {
        int answer = 0;
        
        while (n != 1)
        {
            if (n % 2 != 0)
            {
                answer += (n - 1) / 2;
                n = (n - 1) / 2 + 1;
            }
            else
            {
                answer += n / 2;
                n /= 2;
            }
        }
        return answer;
    }
}