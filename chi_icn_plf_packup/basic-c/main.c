/*
int sum(int end);

int x = 5;
int y;

int main() {
	int a = 6;
	int b = 7;
	a = a + b + x + y;
	a = sum(a);
	return a;
}
*/

/*
int main(){
	int a = 2;
	int b = 3;
	int c = a + b;
	return c;
}
*/

int sum(int end);

int main() {
	int a = 6;
	int b = 7;
	a += b;
	a = sum(a);
	return a;
}