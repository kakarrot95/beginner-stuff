//#include<iostream>
//#include<chrono>
//#include<thread>
//
//struct Timer
//{
//	std::chrono::steady_clock::time_point start, end;
//
//	Timer()
//	{
//		start = std::chrono::high_resolution_clock::now();
//	}
//
//	~Timer()
//	{
//		end = std::chrono::high_resolution_clock::now();
//		std::chrono::duration<float> duration = end - start;
//		float ms = duration.count() * 1000.0f;
//		std::cout << "\n Time taken = " << ms << "ms\n";
//	}
//};
//
//void Log()
//{
//	Timer time;
//	for (int i = 0; i < 100; i++)
//	{
//		std::cout << "Hello\n";
//	}
//}
//
//int main()
//{
//	Log();
//	std::cin.get();
//}