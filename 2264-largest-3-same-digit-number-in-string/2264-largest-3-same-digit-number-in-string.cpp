class Solution {
public:
    string largestGoodInteger(string num) {
        char maxNum = 0;
        string answer = "";

        for (size_t i = 2; i < num.size(); ++i)
        {
            if (num[i] == num [i - 1] && num[i] == num[i - 2])
                if (num[i] > maxNum)
                    maxNum = num[i];
        }
        if (maxNum != 0)
        {
            answer = string(3, maxNum);
            return answer;
        }
        return answer;
    }
};