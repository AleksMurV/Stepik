#include<iostream>
using namespace std;

//#define THE_IARGEST
//#define TWO_INTEGERS
//#define THREE_INTEGERS

int main()
{
#ifdef THE_IARGEST
	int a, b; //���� ��� ����� �����. �������� �������� ����������� �� ���. ���� ����� �����, �������� ����� �� ���.
	cin >> a >> b;
	if (a < b)
	{
		cout << b;
	}
	else {
		cout << a;
	}
#endif // THE_IARGEST

#ifdef TWO_INTEGERS
	/*���� ��� ����� �����. ��������� ������ ������� �������,
	���� ������ ����� ������ �������, ������,
	���� ������ ������ �������, ��� ����, ���� ��� �����.
	*/
	int a, b;
	cin >> a >> b;
	if (a > b)
	{
		cout << 1;
	}
	else if (b > a)
	{
		cout << 2;
	}
	else if (a == b)
	{
		cout << 0;
	}
#endif // TWO_INTEGERS

#ifdef THREE_INTEGERS
	/*���� ��� ����� �����. ������� ���������� �� ��� (��������� ������ ������� ����� ���� ����� �����).
��� ���������� � ���� ������ ���������� �����, ������� �� ������, ��� ����� ������.
������ ������� ������:
�������� ��� �����.
������ �������� ������:
�������� ����� �� ������.
Sample Input:

1
2
3
Sample Output:

3
*/
	int a, b, c;
	cin >> a >> b >> c;
	if (a >= b && a >= c)
	{
		cout << a;
	}
	else if (c >= a && c >= b)
	{
		cout << c;
	}
	else
	{
		cout << b;
	}
#endif // THREE_INTEGERS
}
