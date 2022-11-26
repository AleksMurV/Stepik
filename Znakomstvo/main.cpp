#include <iostream>
using namespace std;

//#define ZNAKOMSTVO
//#define HELLO_STEPIK

int main() {
#ifdef ZNAKOMSTVO
	cout << "Hello, World!";// put your code here
	return 0;
#endif // ZNAKOMSTVO

#ifdef HELLO_STEPIK
	cout << "Hello, Stepik!";// put your code here
	return 0;
#endif // HELLO_STEPIK
}