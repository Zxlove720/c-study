//���Ƕ��壬���������ʱ�����ʵĴ�д�÷�����ȷ�ģ�
//ȫ����ĸ���Ǵ�д������ "USA" ��
//������������ĸ�����Ǵ�д������ "leetcode" ��
//������ʲ�ֻ����һ����ĸ��ֻ������ĸ��д�� ���� "Google" ��
//����һ���ַ��� word �������д�÷���ȷ������ true �����򣬷��� false ��
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