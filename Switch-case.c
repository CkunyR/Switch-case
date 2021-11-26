#include <stdio.h>

int main()
{
	int day = 0;
	scanf("%d", &day);
	switch (day)//switch-case语句----只能为整形变量！！
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("工作日\n");
		break;
	case 6:
	case 7:
		printf("休息日\n");
		break;
	default:
		printf("输入错误！\n");
	}
	return 0;
}