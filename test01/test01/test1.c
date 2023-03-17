#define _CRT_SECURE_NO_WARNINGS 
//#include<stdio.h>
//#include<string.h>

//1到 n!的阶乘相加

//int main() {
//	int a = 0;
//	int b = 0;
//	int c = 1;
//	int n = 0;
//	 for(n=1; n <=4;n++)
//	 { 
//		c = 1;
//	    for (a = 1;a <= n; a++)
//		{
//			c *= a; 
//		}
//			
//			b += c;
//	 }
//	
//  	      printf("%d", b);
//	
//	return 0;
//}

// 二分法查找有序数组中的整型n

//int main() {
//
//	int arr [] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;
//	int left = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int right = sz-1;
//	
//	while (left <= right) 
//	{
//	int mid = (left + right) / 2;
//	if (arr[mid] < k) {
//
//		left = mid + 1;
//	}
//	else if (arr[mid] > k) {
//		right = mid - 1;
//	}
//	else {
//		printf("找到了，下标是%d", mid);
//		break;
//
//	}
//	}
//	if(left>right)
//	{
//		printf("找不到了");
//		
//	}
//	return 0;
//}

//模拟三次登录操作，登录失败退出
//int main() {
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码:");
//		scanf("%s", password);
//		if (strcmp(password, "12345") == 0)
//		{
//			printf("登录成功");
//			break;
//		}
//		else 
//		{
//			printf("密码错误，请重新输入\n");
//		}
//		
//	}
//	if (i == 3)
//		printf("三次密码输入错误，退出程序");
//	
//	return 0;
//}

//1-100随机数 猜数字
//void game() {
//
//	int ret = rand()%100+1;
//	int guess = 0;
//	while (1)
//	{
//		printf("请猜1~100的数字\n:>");
//		scanf("%d", &guess);
//
//		if (guess < ret) {
//			printf("猜小了\n");
//		}
//		else if (guess >ret){
//			printf("猜大了\n");
//		}
//		else {
//			printf("恭喜你猜对了！\n");
//			break;
//		}
//
//	}
//	
//}
//
//void begin() {
//	printf("*****1.开始游戏*****\n");
//	printf("*****0.退出游戏*****\n");
//}
//int main() {
//	
//	int input = 0;
//	srand((unsigned int)time(null));
//	
//	do 
//	{
//		begin();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//			{
//			case 1:
//				game();
//			case 0:
//				printf("退出游戏\n");
//				break;
//			default:
//				printf("请重新选择\n");
//				break;
//			}
//
//	} while (input);
//	
//	
//	return 0;
//
//}
/*
//判断闰年的函数
//int is_leap_year(int a) {
//
//	if (a % 4 == 0 && a % 100 != 0)
//	{
//		return 1;
//	}
//	else if (a % 400 == 0)
//	{
//		return 1;
//	} 
//	else
//		return 0;
//}
//
//int main() {
//	int count = 0;
//	int y = 0;
//	for (y = 1000;y < 2000;y++)
//	{
//		
//		if (is_leap_year(y) == 1)
//		{
//			count++;
//			printf("%d\n", y);
//
//		}
//		
//	}
//	printf("总数=%d\n", count);
//	return 0;
//}
//void my_strcpy(char *arr1,char *arr2) {
//
//	while(*arr1++ = *arr2++){
//	}
//}
*/

/* 字符函数练习
//int main() {
//
//	char arr1[] = { "1234578" };
//	char arr2[] = { "xx0108" };
//	my_strcpy(arr1, arr2);
//	printf("% s \n", arr1);
//
//
//}

int main() {
	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int arr2[10] = { 0 };
	memcpy(arr2, arr1, 21);
	
	return 0;
}*/

/*给出一个5位数，判断它是不是回文数，个位与万位相同，十位与千位相同即为回文数，如12321
* 编程思路：定义5个长整型变量，使用scanf接收键盘输入的5位数，通过除数取模运算获得十、百、千、万位数对比判断
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	12321;
//	long ge, shi, qian, wan, x;
//	scanf("%ld", &x);
//	wan = x / 10000;
//	qian = x % 10000/1000;// X/1000 % 10 都可以
//	shi = x / 10 % 10;
//	ge = x  % 10;
//	if (wan == ge && qian == shi)
//	{
//		printf("%ld\n%ld\n%ld\n%ld\n%ld是回文数\n", x,wan,qian,shi,ge);
//	}
//	else
//	{
//		printf("%ld\n%ld\n%ld\n%ld\n%ld不是回文数\n", x, wan, qian, shi, ge);
//	}
//	return 0;
//}*/


/*从键盘输入若干整数（数据个数应少于50个），其值再0~4的范围内，用-1作为结束输入的标志，统计每个整数的个数。
* 编程思路：使用scanf接收键盘传参吗，使用while判断-1为结束标志，使用for循环统计每个整数个数

//#include <stdio.h>
//#define m 50
//void main() 
//{
//	int a[m],c[5] = { 0 }, i, n = 0,x;
//	printf("请输入0~4范围内的整数（最多输入50个），以-1结束\n");
//	scanf("%d", &x);
//	while (x != -1)
//
//	{
//		if (x >= 0 && x <= 4)
//		{  
//			a[n] = x;  
//			n++;
//		}
//		scanf("%d", &x);
//
//	}
//		for (i = 0; i < n; i++)
//		{
//			c[a[i]]++;
//		}
//		printf("每个整数的个数是：\n");
//		for (i = 0;i <= 4;i++)
//		{
//			printf("%d:%d\n", i, c[i]);
//		}
//		
//	*/
//}
//#include <stdio.h>
//void main()  //1~9 乘法表
//{
//	int i, j ,sum = 0;
//	for (j = 1;j<=9;j++)
//	{
//		for (i = 1;i <= j;i++)
//		{
//			sum = i * j;
//			printf("%d * %d = %d"" ",i, j, sum);
//		}printf("\n");
//	}
//
//}

//#include <stdio.h>
//#include <string.h>
//#define N 50
//void main() 输入一组字符串以空格为间隔，判断单词数量
//{
//	char str[N];
//	int num = 0;
//	int i = 0;
//	int word = 0;
//	printf("请输入一组字符串，可用空格作为间隔:\n");
//	gets(str);
//	for (i = 0;i < N && str[i] != '\0'; i++)
//	{
//		if (str[i] == ' ')
//		{
//			word = 0;
//		}
//		else
//		{
//			word = 1;
//			num = num + word;
//		}
//	}
//	printf("单词个数为：%d", num);
//}
//#include <stdio.h>
//void main()
//{
//    char a[5][10] = { "one","two","three","four","five" };//定义一个二维字符数组，简单赋值
//    int i, j;//用作下面循环的变量
//    char t;//用作交换的中间变量
//    for (i = 0;i < 4;i++)//冒泡法的标准格式，详见下面
//        for (j = i + 1;j < 5;j++)
//            {
//                t = a[i][0];
//                a[i][0] = a[j][0];
//                a[j][0] = t;
//            }
//    puts(a[1]);//输出交换后的第二个字符串
//}

//从键盘输入一个正整数，判断它是不是3和5的倍数，如果是，输出yes，否则输出no
//思路：使用scanf接收键盘输入的正整数，使用if语句判断输入的正整数是否为3和5的倍数，使用printf语句按要求输出内容
//临时记忆 ：算法的五大特性 可行性、确切性、输入、输出、有穷性 衡量算法优劣的特征：可读性、正确性、健壮性、时间复杂度、空间复杂度
//#include <stdio.h>
//int  main() {
//	int a = 0;
//	scanf("%d", &a);
//	if (a % 3 == 0 && a % 5 == 0)
//	{
//		printf("yes");
//	}
//	else
//	{
//		printf("no");
//	}
//	return 0;
//}

//现有36块砖，规定由36个人搬，共有男人、女人、小孩若干。
//已知：男人一次搬4块，女人一次搬3块，两个小孩抬一块，要求一次性刚好办完，问男人、女人，小孩各多少人？
//编程思路：设置3个变量，运用简单的三元一次方程判断即可(错误)
//根据题意，男人应少于9人（9个男人一次性能将砖办完），女人应少于12人，可以采用穷举法实现（正确）

//#include <stdio.h>
//int main() {
//	/*int men = 0, women = 0, kid = 0;
//	(men + women + kid) == 36;
//	(4 * men + 3 * women + kid/2) == 36;
//	printf("男人：%d女人：%d小孩：%d", men, women, kid);*/
//
//	int men, women, children;
//	for (men = 0;men < 9;men++)
//	{
//		for (women = 0;women < 12;women++)
//		{
//			children = 36 - women - men;
//			if ((4 * men + 3 * women + children / 2) == 36 && children % 2 == 0)
//			{
//				printf("男人：%d个\n女人：%d个\n小孩：%d个\n", men, women, children);
//			}
//		}
//	}
//	return = 0;
//
//}

/*求1+1（1+2）+（1+2+3）+...+(1+2+3+...+n)，其中n是从键盘输入的正整数。
* 编程思路：scanf接收键盘输入的正整数，for循环将n的阶乘的阶乘相加求和

#include <stdio.h>
int main() {
	int i,n,all=0,sum = 0;
	scanf("%d", &n);

	for (i = 1;i <= n;i++) 
	{
		sum = sum + i;
		all = all + sum;
	}
	printf("%d", all);


	return 0;
}*/
/*从键盘输入若干个字符，直至按Enter键为止，分别统计其中的英文的字母，空格，数字和其他字符的个数。*/
 //编程思路：错误 gets()函数接收从键盘输入的字符串，for循环遍历字符，if语句判断字符类型分别叠加
//			正确：调用getchar()函数，将从键盘输入的数据暂存到键盘缓冲区，直到输入结束（遇到Enter键）后，
//将缓冲区中的数据一起输入到计算机中，利用while循环对每个字符进行判断和统计，知道遇到Enter键为止。
//#include <stdio.h>
////#define N 100
//int main() 
//{
//	char c;
//	int words = 0, spaces = 0, nums = 0,others=0;
//	 while((c=getchar())!='\n') 
//	{
//		if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
//		{
//			words++;
//		}
//		else if (c == ' ')
//		{
//			spaces++;
//		}
//		else if (c >= '0' && c <= '9')
//			nums++;
//		else
//			others++;      
//	}
//	printf("英文字母=%d\n空格=%d\n数字=%d\n其他字符=%d\n", words, spaces, nums, others);
//	return 0;
//
//}

/* 从键盘输入输入两个整数，使用库函数，计算这两个整数的差的绝对值*/
//编程思路：调用库函数<math.h>,利用scanf()函数从键盘接收2个整数，
//使用abs()函数计算两数差的绝对值，进行输出即可。
//#include <stdio.h>
//#include<math.h>
//
//int main() 
//{
//	int x,y,z;
//	printf("请输入两个整数:\n");
//	scanf(" %d%d", &x, &y);
//	z=abs(x - y);
//	printf("%d", z);
//	return 0;
//
//}

/* 求一个整数的任意次方的最后3位数，即求a的b次方的最后3位数，要求a和b从键盘输入*/
//编程思路：scanf函数从键盘接收两个整数，for循环遍历解得a的b次方结果，
//最后取模运算加if判断语句解得任意次方最后3位数

//ps:想了小半小时写出加字符串的代码，一看参考答案在printf语句里加个限制输出的标识 %03d 即可...还是学艺不够精呐
// 由于题目只需要末三位数 为免越界每次乘积都只取末3位数
//#include <stdio.h>
//int main() 
//{
//	int a,b,i,total=1,rear=0;
//	char x[3] = { 0 };
//	printf("请输入两个整数:\n");
//	scanf(" %d%d", &a, &b);
//	for (i = 1;i <= b;i++)
//	{
//		total = total * a;
//	}
//	rear = total % 1000;
//
//	if(rear % 100 == 0 && rear % 1000 == 0 )
//		{
//		  x[0] = '0';
//		  x[1] = '0';
//		 printf("%d\n%s%d",x,rear);	
//		}
//	else if (rear % 1000 == 0)
//	{
//		x[0] = '0';
//		
//		printf("%d\n%s", x,rear);
//	}
//	else
//	{
//		printf("%d\n%d", rear);
//	}
//	
//	return 0;
//
//}
//简化语句版：
//#include <stdio.h>
//int main()
//{
//	int a, b, i, total = 1;
//	printf("请输入两个整数:\n");
//	scanf(" %d%d", &a, &b);
//	for (i = 1;i <= b;i++)
//	{
//		total = total * a;
//		total = total % 1000;
//
//	}
//	printf("%03d\n", total);
//	return 0;
//}

/*为了使电文保密，往往按一定的规律将原文转换为密码，收报人再按原先约定的规律将其译回原文。
用以下规律将原文转换成密码；原文中的字母变成该字母后的第4个，如A→E，B→F，...V→Z，
小写字母也按同样的规则进行转换，其他字符保持不变，请编写程序实现输入一个字符串，输出其密码，如输入
“China”，输出“Glmre”*/
//编程思路：使用gets函数接收键盘输入的字符串，while循环依次调整每个字符,if语句判断是否需要调整
//参考答案是用getchar函数接收单个字符判断，用一个字符变量存储缓存而不需要数组变量存储
//#include <stdio.h>
//#define N 100
//int main()
//{
//	int i=0;
//	char a[N] = {0};
//	gets(a);
//	while (a[i] != '\0')
//	{
//		
//		if (a[i] >= 'A' && a[i] <= 'Z' || a[i] >= 'a' && a[i] <= 'z')
//		{
//			a[i] = a[i] + 4;
//		}
//		i++;
//	}
//	printf("%s", a);
//}

/*编写程序实现通过键盘输入一个百分制成绩，并输出成绩等级A,B,C,D,E,其中，90分以上为A，80分~89分为B，70~79分为C
60~69分为D，60分以下为E*/
//编程思路：scanf()获取键盘输入的单精度整型数，if()函数判断数值属于哪类等级，printf()函数输出
//#include <stdio.h>
//int main()
//{
//	float a=0;
//	scanf("%f", &a);
//	if (a < 60 )
//	{
//		printf("成绩为：E");
//	}
//	else if (a >= 60 && a < 70)
//	{
//		printf("成绩为：D");
//	}
//	else if (a >= 70 && a < 80)
//	{
//		printf("成绩为：C");
//	}
//	else if (a >= 80 && a < 90)
//	{
//		printf("成绩为：B");
//	}
//	else if (a >= 90 && a < 100)
//	{
//		printf("成绩为：A");
//	}
//	return 0;
//}
/*编写一个函数计算两个整数差的绝对值，将差值返回调用函数，并用main()函数来调用该函数，
求2和-3两个数差的绝对值
编程思路：自定义绝对值函数newabs(),设置两个形参接收调用传值，取其最大值减去最小值作差，输出返回值即可*/
//#include<stdio.h>
//int newabs(int x, int y)
//{
//	if (x > y)
//	{
//		return x - y;
//	}
//	else
//		return y - x;
//
//}
//int main()
//{
//	printf("%d", newabs(2, -3));
//	return 0;
//}
/*输入一个字符，如果它是一个小写字母，则把它变成对应的大写字母；如果它是一个大写字母，则把它变成
对应的小写字母；其它字符不变
编程思路：scanf()接收键盘输入的字符，判断大小写字母，运用大小写字母的ASCII码差值转换即可*/

//#include <stdio.h>
//int main()
//{	
//	char a='0';
//	scanf("%c",&a);
//	if (a >= 'a' && a <= 'z')
//	{
//		a = a - 32;
//	}
//	else if (a >= 'A' && a <= 'Z')
//	{
//		a = a + 32;
//	}
//	
//	printf("%c\n", a);
// return 0;
//}

/*已知数组a中的元素均为正整数，求a中偶数的个数和所有偶数的平均值。
编程思路：定义一组正整数数组，for循环遍历数组元素，分别解得偶数个数及偶数平均值*/

//#include <stdio.h>
//int main()
//{
//	int a[10] = {1,2,3,4,5,6,7,8,9,10};
//	int i = 0,x=0,sum=0;
//	for(i=0;i<10;i++)
//	{
//		if (a[i] % 2 == 0)
//		{
//			x++;
//			sum = sum + a[i];
//		}
//		
//	}
//	printf("偶数个数：%d\n偶数平均值：%d", x, sum / x);
//	return 0;
//}

/*设计一个模拟计算器，要求从键盘输入两个数，再输入算术运算符，输出计算结果
scanf()接收键盘输入的数和运算符，switch()判断不同的算数运算符进行对应运算*/
//#include<stdio.h>
//int main()
//{
//	int a=0, b=0,sum=0;
//	char ope='0';
//	printf("依次输入两个数和一个运算符(逗号相隔)\n");
//	scanf("%d,%d,%c", &a, &b,&ope);
//	switch (ope)
//	{
//	case '+':
//		sum = a + b;
//		break;
//	case '-':
//		sum = a - b;
//		break;
//	case '*':
//		sum = a * b;
//		break;
//	case '/':
//		sum = a / b;
//		break;
//	default:
//		break;
//	}
//	printf("%d\n运算结果为：", sum);
//	return 0;
//}

/*编写一个程序，求解使1+2+3+...+n成立的最小的n值及1+2+3+...+n的结果，
编程思路：for循环计算n的阶乘与200比较大小即可*/ 
//用do while 亦可
//
//#include <stdio.h>
//
//int main()
//{
//	int sum = 0, n = 0;

	//for (n = 0;sum < 200;)
	//{
	//	n++;
	//	sum = sum + n;
	//}

//	do {
//		n++;
//		sum = sum + n;
//	} while (sum < 200);
//
//	printf("n的值是：%d\nn阶乘的值是：%d", n, sum);
// return 0;
//}

/*输入3个数，按从小到大的顺序排列*/
//编程思路：定义4个变量，1个变量接收其他3个变量值暂存，if判断最大值，依次交换即可
//#include <stdio.h>
//
//int main()
//{
//	int a, b, c,t;
//	printf("请输入3个数:\n");
//	scanf("%d%d%d", &a, &b, &c);
//		if (a > b) {
//			t = a;a = b;b = t;
//		}
//		if (a > c) {
//			t = a;a = c;c = t;
//		}
//		if (b > c) {
//			t = b;b = c;c = t;
//		}//三个数排序完成 
//		
//		printf("%d<=%d<=%d", a, b, c);
//	
//
//
//	return 0;
//}
//

/*编程将能被11整除且不包含重复数字的三位数进行输出，并记录它们的个数
编程思路：for函数循环遍历计算，限制条件在三位数内，
采用取模运算得到个十百位值，if函数判断若满足条件进行输出并记录个数*/

//#include<stdio.h>
//int main()
//{
//	int i,ge,shi,bai,n=0;
//	for (i = 100;i < 1000;i++)
//	{
//		if( i % 11 == 0)
//		{
//			ge = i % 10;
//			shi = i/10 % 10;
//			bai = i /100 ;
//			if (ge != shi && shi != bai && ge != bai)
//			{
//				printf("%d\n", i);
//				n++;
//			}
//		}
//	}printf("满足条件的数共有%d个", n);
//
//	return  0;
//}
/*从输入的5个字符串中找出最长的一个字符并输出
编程思路：创建一个二维数组，gets函数依次接收从键盘输入的字符串，strlen函数求得字符串长度
指针sp指向最长的字符串*/
//#include<stdio.h>
//int main()
//{
//	char a[5][50], * sp;
//	int i;
//	for (i = 0;i < 5;i++)
//	{
//		gets(a[i]);
//	}
//	sp = a[0];
//	for (i = 1;i < 5;i++)
//	{
//		if (strlen(sp) < strlen(a[i]))
//		{
//			sp = a[i];
//		}
//		
//	}printf("\n最长的字符串是：%s", sp);
//	return 0;
//
//}



/*请输出26个大写字母的ASCII码值，要求3个数一行。
编程思路：for循环遍历大写字母，定义1个整型变量接收字符变量转换即可*/
//#include <stdio.h>
//
//int main()
//{
//	int  b,n=0;
//	char a;
//	for (a = 'A';a <= 'Z';a++)
//	{
//		b = a;
//		printf("%d ", b);
//		n++;
//		if (n == 3)
//		{
//			printf("\n");
//			n = 0;
//		}
//	}
//	return 0;
//
//}

/*通过键盘输入年月日，计算该日是这一年的第几天
编程思路：把平年的每一月的天数存入数组中，使用if语句进行判断年份是否为闰年
若为闰年且月份大于等于3，即输出结果需要进行加1操作*/

//#include <stdio.h>
//int main()
//{
//	int month_day[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//	int i, year, month, day, * p;
//	p = month_day;
//	printf("请输入年-月-日:\n");
//	scanf("%d-%d-%d", &year, &month, &day);
//	for (i = 1;i < month;i++)
//	{
//		day = day + p[i];
//	}
//	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//	{
//		day++;
//	}
//	printf("该日是%d年的第%d天", year, day);
//
//	return 0;
//
//}

/*从键盘输入两个正整数，求他们相除的余数
编程思路：定义3个整数变量，scanf()函数接收键盘输入的两个正整数
一个变量接收输入整数相除的余数的值*/

//#include <stdio.h>
//int main()
//{
//	int x, y, z = 0;
//	scanf("%d%d", &x, &y);
//	z = (x % y);
//	printf("%d", z);
//	return 0;
//}

/*将一个数的数字倒过来所得到的新数称位原数的反序数。
如果一个数等于它的反序数，则这个数称位对称数。
求不超过1933的所有的对称数
编程思路：for()函数循环遍历从10到1933的数
通过取模运算取得不同位数的值，通过if()函数嵌套判断是否为对称数*/
//（1）这个方法有点冗余
//#include <stdio.h>
//int main()
//{
//	int sum=0,t,ge,shi,bai,qian,i = 0;
//	for (i = 10;i <= 1993;i++)
//	{
//		if (i < 100) 
//		{
//  		ge = i % 10;
// 		shi = i / 10 % 10;
//		
//   			if (ge == shi)
//			{
//			printf("%d ", i);
//			sum++;
//			}
//		}
//		if (i>=100 && i < 1000)
//		{
//			ge = i % 10;
//			shi = i / 10 % 10;
//			bai = i / 100 % 10;
//			t = bai;
//			bai = ge;
//			ge = t;
//			if (ge == bai)
//			{
//				printf("%d ", i);
//				sum++;
//			}
//		}
//		if (i >= 1000 && i < 1993)
//		{
//			ge = i % 10;
//			shi = i / 10 % 10;
//			bai = i / 100 % 10;
//			qian = i / 1000;
//			t = qian;
//			qian = ge;
//			ge = t;
//			t = bai;
//			bai = shi;
//			shi = t;
//			if (ge == qian && shi==bai)
//			{
//				printf("%d ", i);
//				sum++;
//			}
//
//		}
//		
//	}printf("满足条件的对称数有：%d个 ", sum);
//	return 0;
//
//}
//（2）for循环+while循环 参考答案

//#include <stdio.h>
//int main()
//{
//	int a, d, i, x,sum=0;
//	for (i = 10;i <= 1993;i++)
//	{
//		a = i;x = 0;
//		while (a != 0) //a最后被拆光等于0了跳出循环
//		{
//			d = a % 10; //每次把末尾的数拆下来
//			x = x * 10 + d;//把拆下来的数赋给x
//			a = a / 10;//把a值缩小10倍
//
//		}
//		if (x == i)//将原数值i和颠倒后的x对比
//		{
//			printf("%d\t", x);
//			sum++;
//		}
//	}printf("总计：%d\n",sum);
//	return 0;
//}




/*通过键盘输入数组元素，将该数组中的值按逆序重新存放后输出
编程思路：定义一个整型数组存放整型元素,for()循环依次遍历数组下标地址,
scanf()接收键盘将参数传至数组对应下标地址,while()函数使用左右指针交换数组元素*/

//#include <stdio.h>
//#define N 5
//int main()
//{
//	int a[N] = {0};
//	int i,x,t;
//	for (i = 0;i < N;i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	for (i = 0;i <N/2;i++)
//	{
//		t = a[i];
//		a[i] = a[N - i - 1];
//		a[N - i - 1] = t;
//	}
//	for (i = 0;i < N;i++)
//	{
//		printf("%d ", a[i]);
//	}
//	return 0;
//}


/*某次比赛，有6个评委打分，对一名参赛者，6个评委给出的分数分别为
* {92，85，66，89，95，79}，去掉一个最高分和一个最低分，求该参赛者的平均得分
编程思路：使用数组a存储分数，零最大值和最小值取a[0],依次和数组中的i+1个元素比较
0<=i<=5 ,数组元素总和减去max和min值后即可求平均数*/

//#include<stdio.h>
//int main()
//{
//	int a[6] = { 92,85,66,89,95,79 };
//	int max = a[0], min = a[0],i,sum=0;
//	float  aver;
//	for (i = 1;i <= 5;i++)
//	{
//		if (max < a[i])
//			max = a[i];
//		if (min > a[i])
//			min = a[i];
//	}
//	for (i = 0;i <= 5;i++)
//	{
//		sum = sum + a[i];
//	}
//	aver = (float)(sum - max - min) / 4;
//	printf("%.2f", aver);
//		return 0;
//}

