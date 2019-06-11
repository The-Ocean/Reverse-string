//写出一个程序，接受一个字符串，然后输出该字符串反转后的字符串。例如：
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