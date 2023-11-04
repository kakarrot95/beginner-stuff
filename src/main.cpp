#include<iostream>
#include<thread>

static bool s_Finished = false;

void DoWork()
{
	using namespace std::literals::chrono_literals;

	while (!s_Finished)
	{
		std::cout << "Working...\n";
		std::this_thread::sleep_for(1s);
	}

	std::cout << "Out of while .. \n";
}

int main()
{
	std::thread worker(DoWork);
	
	std::cin.get();
	s_Finished = true;

	worker.join();

	std::cout << "Stop Working...\n";
	std::cin.get();
}