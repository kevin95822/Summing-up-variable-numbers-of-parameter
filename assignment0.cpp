#include <iostream>
#include <stdarg.h>
using namespace std;

//method 1, variadic function
template<typename T>
T sum(T a){
	return a;
}

template<typename T, typename... Args>
T sum(T a, Args... args){
	return a + sum(args...);
}


//method 2, only work with 5 or less parameters
/*int sum(int e){
	return e;
}
int sum(int d, int e){
	return d + sum(e);
}
int sum(int c, int d, int e){
	return c + sum(d,e);
}
int sum(int b, int c, int d, int e){
	return b + sum(c,d,e);
}
int sum(int a, int b, int c, int d, int e){
	return a + sum(b,c,d,e);
}*/

int main() {
	cout << sum(2,3,5);
	return 0;
}
