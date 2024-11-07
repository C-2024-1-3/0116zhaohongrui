
#include<iostream>
#include <iomanip>
using  namespace std;

const int MAX = 100;
void test1_1()
{
		int k = 0;
		int i = k + 1;
		cout << i++ << endl;
		cout << i++ << endl;
		cout << "Welcome to C++" << endl;
}
void test1_2()
{
	float r, h;
	const float �� = 3.14;
	cout << "������Բ׶�ĵױ߰뾶�͸�" << endl;
	cin >> r>> h;
	float v = (�� * r * r) * h / 3;

}
void test1_3()
{
	cout << "char length:" << sizeof(char) << endl;
	cout << "int length:" << sizeof(int) << endl;
	cout << "short int length:" << sizeof(short int) << endl;
	cout << "long int length:" << sizeof(long int) << endl;
	cout << "float length:" << sizeof(float) << endl;
	cout << "double length:" << sizeof(double) << endl;
	cout << "long double length:" << sizeof(long double) << endl;
	cout << "bool length:" << sizeof(bool) << endl;
}
void test1_4()
{
	unsigned int testUnint = 65534;
	cout << "output in unsigned int type:" << testUnint << endl;
	cout << "output in char type:" << static_cast<char>(testUnint) << endl;
	cout << "output in short type:" << static_cast<short>(testUnint) << endl;
	cout << "output in int type:" << static_cast<int>(testUnint) << endl;
	cout << "output in double type:" << static_cast<double>(testUnint) << endl;
	cout << "output in double type:" << setprecision(4) << static_cast<double>(testUnint) << endl;
	cout << "output in Hex unsigned int type:" << hex << testUnint << endl;
	cout << "Output in octal: " << oct << testUnint << endl;
}

void test1_5()
{
	double fahrenheit;
	std::cout << "�����뻪���¶ȣ�";
	std::cin >> fahrenheit;

	double celsius = (fahrenheit - 32) * 5 / 9;

	cout <<fixed <<setprecision(2);
	cout << "��Ӧ�������¶�Ϊ��" << celsius << endl;
}
void test2_1()
{
		char ch;
		cout << "������һ���ַ���";
		cin >> ch;

		if (ch >= 'a' && ch <= 'z') {
			cout << char(ch - 32) << endl;
		}
		else {
			cout << int(ch + 1) << endl;
		}
 }
void test2_2()
{
	float x;
	cin >> x;
	float y = 0;
	if (x < 1 && x>0)
	{
		y = 3 - x * 2;
	}
	else if (1 <= x && x < 5)
	{
		y = 2 / (x * 4) + 1;
	}
	else if (5 <= x && x < 10)
	{
		y = x * x;
	}
	else
	{
		cout << "����������ֲ��ڸ�����Χ��" << endl;
		system("pause");
	}
	cout << y << endl;
}
void text2_3()
{
	int a, b, c;
	cout << "�����������ε������߳���" << endl;
	cin >> a>> b>> c;
	if (a + b > c && a + c > b && b + c > a)
	{
		if (a == b && b == c && a == c)
		{
			cout << "��������ǵ���������" << endl;
		}
		else
		{
			cout << "������Ĳ��ǵ���������" << endl;
		}
	}
	else
	{
		cout << "������Ĳ���������" << endl;
	}
}
void test2_4()
{
	float a, b;
	char c;
	cout << "�������һ������" << endl;
	cin >> a;
	cout << "������ڶ�������" << endl;
	cin >> b;
	cout<< "�����������" << endl;
	cin >> c;
	if (c == '+')
	{
		cout << "����ǣ�" << a + b << endl;
	}
	else if (c == '-')
	{
		cout << "����ǣ�" << a - b << endl;
	}
	else if (c == '*')
	{
		cout << "����ǣ�" << a * b << endl;
	}
	else if (c == '/')
	{
		if (b == 0)
		{
			cout << "��������Ϊ��" << endl;
			return;
		}
		else
		{
			cout << "����ǣ�" << a / b << endl;
		}
	}
	else if (c == '%')
	{
		if (b == 0)
		{
			cout << "��������Ϊ��" << endl;
			return;
		}
		else {
			cout << "����ǣ�" << (int)a % (int)b << endl;
		}
	}
	else
	{
		cout << "����������������ȷ" << endl;
	}
}
void test2_5()
{
	char str[1000];
	cout << "������һ���ַ���";
	cin.getline(str, 1000);

	int letterCount = 0;
	int spaceCount = 0;
	int digitCount = 0;
	int otherCount = 0;

	int length = strlen(str);
	for (int i = 0; i < length; i++) {
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
			letterCount++;
		}
		else if (str[i] == ' ') {
			spaceCount++;
		}
		else if (str[i] >= '0' && str[i] <= '9') {
			digitCount++;
		}
		else {
			otherCount++;
		}
	}

	cout << "Ӣ����ĸ������" << letterCount << endl;
	cout << "�ո������" << spaceCount << endl;
	cout << "�����ַ�������" << digitCount << endl;
	cout << "�����ַ�������" << otherCount << endl;
}
void test2_6()
{
	int a, b;
	cin >> a >> b;
	int arr1[1000];
	int arr2[1000];
	for (int i = 1; i < 1000; i++)
	{
		arr1[i] = a * i;
	}
	for (int j = 1; j < 1000; j++)
	{
		arr2[j] = b * j;
	}
	for (int i = 1; i < 1000; i++)
	{
		bool breakall = false;
		for (int j = 1; j < 1000; j++)
		{
			if(arr1[i]==arr2[j])
			{
				cout << "a��b����С�������ǣ�" << arr1[i]<<endl;
				breakall = true;
				break;
			}
			else
			{
				continue;
			}
		}
		if (breakall)
		{
			break;
		}
	}
	while (b != 0)
	{
		int temp = b;
		b = a % b;
		a = temp;
	}
	cout << "���Լ���ǣ�" << a << endl;
}
void test2_7()
{
	for (int p = 1; p < 6; p++)
	{
		for (int m = 0; m < p; m++)
		{
			cout << "*"  ;
		}
		cout << endl;
	}
}
void test8()
{	{
		double a;
		cout << "������һ���� a��";
		cin >> a;

		double xn = a;
		double xn1;
		do {
			xn1 = (xn + a / xn) / 2;
			if (fabs(xn1 - xn) < 1e-5) {
				break;
			}
			xn = xn1;
		} while (true);

		cout << "a ��ƽ����ԼΪ��" << xn1 << endl;

	
	}
}
void test9()
{
	
	float price = 0.8;
	float days=1, apples=2,allprice=0;
	while (apples*2<= MAX)
	{
		allprice += apples * price;
		apples = apples * 2;
		days++;
	}
	float average = allprice / days;
	cout <<allprice<< "ÿ��ƽ����" << average << "Ԫ" << endl;
}


int main()
{

}