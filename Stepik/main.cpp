#include<iostream>
using namespace std;

//#define THE_IARGEST
//#define TWO_INTEGERS
//#define THREE_INTEGERS

int main()
{
#ifdef THE_IARGEST
	int a, b; //Даны два целых числа. Выведите значение наибольшего из них. Если числа равны, выведите любое из них.
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
	/*Даны два целых числа. Программа должна вывести единицу,
	если первое число больше второго, двойку,
	если второе больше первого, или ноль, если они равны.
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
	/*Даны три целых числа. Найдите наибольшее из них (программа должна вывести ровно одно целое число).
Под наибольшим в этой задаче понимается число, которое не меньше, чем любое другое.
Формат входных данных:
Вводятся три числа.
Формат выходных данных:
Выведите ответ на задачу.
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
