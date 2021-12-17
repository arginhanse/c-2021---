/*
本题要求编写程序，输入若干英文单词，对这些单词按长度从小到大排序后输出。如果长度相同，按照输入的顺序不变。
输入格式：

输入为若干英文单词，每行一个，以#作为输入结束标志。其中英文单词总数不超过20个，英文单词为长度小于10的仅由小写英文字母组成的字符串。

输出格式：

输出为排序后的结果，每个单词后面都额外输出一个空格。

输入样例：
blue
red
yellow
green
purple
#


输出样例：
red blue green yellow purple 
*/
#include<stdio.h>
#include<string.h>
int main()
{
	char str[20][10];
	char string[10];
	int i=0,j,k;
	for (i=0;i<20;i++)
	{
		gets(str[i]);
		if(strcmp(str[i],"#")==0)
		break;
	}
	for(j=0;j<i-1;j++)
	{
		for(k=j+1;k<=i-1;k++)
		{
			if (strlen(str[j])>strlen(str[k]))
			{
				strcpy(string,str[j]);
				strcpy(str[j],str[k]);
				strcpy(str[k],string);
			}
		}
	}
	for(j=0;j<i;j++)
	{
		printf("%s ",str[j]);
	}
	return 0;
}

