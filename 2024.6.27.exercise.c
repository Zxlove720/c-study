//我们定义，在以下情况时，单词的大写用法是正确的：
//全部字母都是大写，比如 "USA" 。
//单词中所有字母都不是大写，比如 "leetcode" 。
//如果单词不只含有一个字母，只有首字母大写， 比如 "Google" 。
//给你一个字符串 word 。如果大写用法正确，返回 true ；否则，返回 false 。
# include<stdbool.h>
bool detectCapitalUse(char* word) {
    int cnt = 0;
    int n = strlen(word);

    for (int i = 0; i < n; ++i) {
        if (isupper(word[i])) {
            ++cnt;
        }
    }

    return cnt == 0 || cnt == n || (cnt == 1 && isupper(word[0]));
}