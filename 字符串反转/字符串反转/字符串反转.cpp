//д��һ�����򣬽���һ���ַ�����Ȼ��������ַ�����ת����ַ��������磺
//abcd
//dcba
#include<iostream>

void ReverseStr(char* str1)
{
	if (*str1 == '\0')
	{
		return;
	}
	ReverseStr(str1+1);
	std::cout << *str1;
	return;
}

int main()
{
	char str[1024];
	while (std::cin >> str)
	{
		ReverseStr(str);
		printf("\n");
	}

	return 0;
}