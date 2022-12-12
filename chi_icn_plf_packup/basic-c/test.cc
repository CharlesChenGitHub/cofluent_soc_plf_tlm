#include <iostream>

int sum(int end) {
	int ans = end;
	for (int i=1; i<end; ++i) {
		ans += i;
	}
	return ans;
}


int main() {
	int a = 6;
	int b = 7;
	a += b;
	a = sum(a);
    std::cout<<a<<std::endl;
	return a;
}