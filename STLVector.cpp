//#include<iostream>
//#include<vector>
//
//struct Vertex
//{
//	int x, y, z;
//	Vertex(int x, int y, int z)
//		: x(x), y(y), z(z)
//	{
//		std::cout << "CREATED" << std::endl;
//	}
//	Vertex(const Vertex& vertex)
//		:x(vertex.x), y(vertex.y), z(vertex.z)
//	{
//		std::cout << "COPY" << std::endl;
//	}
//};
//
//int main()
//{
//	std::vector<Vertex> v;
//	v.reserve(3);
//	v.emplace_back(1, 2, 3);
//	v.emplace_back(1, 2, 3);
//	v.emplace_back(1, 2, 3);
//	std::cin.get();
//}