#include <iostream>
using namespace std;
/*2
2
32
32
3
23
2
32
3
2
32
3
23
2
32
32
3
23
2
32
3
23
2
32
32
3
23
23
23
2323232323
23
23
232323232
3
23
23
23
2
32
3
23
23
23
2
32
32
3
23
2
32
32
32
3
23
23
2
32
3
23
23
2
32
323
23
23232
3232
3
2
323
23
23
232
32
323

2
32
32
32
32
32
32
32
323
2
32
32
32
32
32
32
32
32
32
32
32
32
32
32
32
32
32
323
23
2
32
32
32
32
32
2
32
32
32
32
32
3
232
32
3232*/

int add(int a, int b)
{
	return a + b;
}
int sub(int a, int b)
{
	return a - b;
}

int mul(int a, int b)
{
	return a * b;
}
int div(int a, int b)
{
	return a / b;
}
int master(int a, int b, int (*p)(int, int))
{
	int sum;
	sum = (*p)(a, b);
	return sum;
}
main()
{
	int x,y;
	cout<<"Enter two number : "<<endl;
	cin>>x>>y;
	char op;
	cout<<"Enter operator: ";
	cin >> op;
	switch (op)
	{
	case '+':
		cout <<"Result is : "<<master(x,y,add) ;
		break;
	case '-':
		cout<<"Result is : "<<master(x,y, sub);
		break;
	case '*':
		cout<<"Result is : "<<master(x,y, mul);
		break;

	case '/':
	    cout<<"Result is : "<<master(x,y, div);
		break;
	}
}

