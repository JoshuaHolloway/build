void f(int x) {	x += 1; }

struct X 
{
	int g() 
	{
		f(6666);
		return 42;
	}
};
