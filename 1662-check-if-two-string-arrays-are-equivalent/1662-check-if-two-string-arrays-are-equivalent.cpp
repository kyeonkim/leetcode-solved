class Solution {
public:
    string makeStr(vector<string>& word)
    {
        string str;

        for (vector<string>::iterator iter = word.begin(); iter < word.end(); ++iter)
        {
            str += *iter;
        }
        return str;
    }

    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string str1 = makeStr(word1);
        string str2 = makeStr(word2);

        if (str1 == str2)
            return true;
        else
            return false;
    }
};