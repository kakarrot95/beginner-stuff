//#include<iostream>
//
//void HelloWorld(int a)
//{
//	std::cout << "Hello World" << " " << a << std::endl;
//}
//
//void ForEach(int n, void(*func)(int))
//{
//	for (int i = 0; i < n; i++)
//	{
//		func(i);
//	}
//}
//
//
//int main()
//{
//	int a[5];
//	for (int i = 0; i < 5; i++) {
//		a[i] = i + 10;
//	}
//	int s = 5;
//	void(*kakarrot)(int) = HelloWorld;// void(*)()
//	typedef void(*HelloWorldFunction)(int);
//	HelloWorldFunction goku = HelloWorld;
//	auto func = HelloWorld;
//	func(5);
//	goku(4);
//	kakarrot(100);
//	ForEach(5, [](int a) {std::cout << "Value :" << a << std::endl; });
//	ForEach(10, HelloWorld);
//	ForEach(10, goku);
//	ForEach(10, kakarrot);
//	ForEach(10, func);
//	std::cin.get();
//}