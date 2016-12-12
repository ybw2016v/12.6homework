 // 作者邮箱：yubowen@mail.sdu.edu.cn
#include<stdio.h>
main()
{
	char cat;
	cat = 'y';
	while (cat == 'y')
	{
		{
			float a, b, c, d, e;
			d = 0;
			e = 0;
			char dog;
			printf("请输入算式。\n");
			scanf("%f%c%f", &a, &dog, &b);
			{
				switch (dog)
				{
				case '+':
					{
						c = a + b;
						d++;
					}
					break;
				case '-':
					{
						c = a - b;
						d++;
					}
					break;
				case '*':
					{
						c = a * b;
						d++;
					}
					break;
				case '/':
					{
						d++;
						if (b == 0)
						{
							e = 1;
						}
						else
							c = a / b;
					}
					break;

				}
			}
			if (d == 0)
				printf("逻辑错误，CPU即将自毁！\n");
			else
			{
				if (e == 1)
					printf("%f%c%f=∞\n", a, dog, b);
				else
					printf("%f%c%f=%f\n", a, dog, b, c);
			}
		}
		{
			getchar();
				/* 受键盘缓冲区的影响,
								   没有此语句会导致程序出错。
								   此语句的作用是吸收掉缓冲区的回车键 
								 */
				printf("是否要继续计算？（y/n）\n");
			cat = getchar();
		}
	}
}