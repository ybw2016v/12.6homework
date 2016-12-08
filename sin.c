//这是一个小程序。
#include<stdio.h>
#include<math.h>
main()
{
	float a, b, c;
	double d, e, f;
	printf("请输入正整数。\n");
	scanf("%f", &a);


	b = 0;
	c = 0;
	f = 0;
	while (b <= a)
	{

		e = sin(b);
		printf("sin(%f)=%f\n", b, e);
		{
			if (e >= f)
			{
				f = e;
				c = b;
			}
			else;
		}
		b++;
	}
	printf("%f的正弦最大，\n最大值为%f", c, f);

}