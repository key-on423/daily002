#include <stdio.h>

//��1!+2!+....+20!
//int main()
//{
//	int x = 1;
//	int y = 0;
//	int sum = 0;
//	int jie = 1;
//	for (x = 1;x <= 20;x++)
//	{
//		for (y = 1;y <= x;y++)
//		{
//			jie *= y;
//		}
//		sum += jie;
//		jie = 1;
//	}
//	printf("1!+2!+....+20!=%d", sum);
//	return 0;
//}

//��������ַ����෴˳���ӡ
//
//#define max 30
//char* s_gets(char* st, int n);
//int main()
//{
//	printf("��һ���������ַ��������ӡ�ĳ���\n");
//	printf("������һ���ַ�����<=30��\n");
//	char arr1[max];
//	s_gets(arr1, max);
//	int n = strlen(arr1);
//	int x ;
//	printf("strlen arr1 = %d\n", n);
//	for (x = n-1;x >= 0;x--)
//	{
//		printf("%c", arr1[x]);
//	}
//	return 0;
//}
//char* s_gets(char* st, int n)
//{
//	char* ret_val;
//	ret_val = fgets(st, n, stdin);
//	if (ret_val)
//	{
//		while (*st != '\n' && *st != '\0')
//			st++;
//		if (*st == '\n')
//			*st = '\0';
//		else
//			while (getchar() != '\n')
//				continue;
//	}
//	return ret_val;
//}

 