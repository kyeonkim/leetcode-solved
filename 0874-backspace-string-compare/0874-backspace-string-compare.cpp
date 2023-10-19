class Solution {
public:
    bool backspaceCompare(string s, string t) {
        if (backspaceString(s) == backspaceString(t))
            return true;
        else
            return false;
    }

    string backspaceString(string str)
    {
        string result = "";
        int sharpCnt = 0;
        int size = str.size();

        for (int i = size - 1; i >= 0; i--)
        {
            if (str[i] == '#')
                sharpCnt++;
            else if (sharpCnt != 0)
                sharpCnt--;
            else
                result += str[i];
        }
        return result;
    }
};