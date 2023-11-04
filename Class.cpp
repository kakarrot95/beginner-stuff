//#include<iostream>
//#include<string>// STRING 
//#include<memory>// PTRS 
//
//class String
//{
//private:
//	char* m_Buffer;
//	unsigned int m_Size;
//public:
//	String(const char* string) 
//	{
//		m_Size = strlen(string);
//		m_Buffer = new char[m_Size+1];
//		memcpy(m_Buffer, string, m_Size);
//		m_Buffer[m_Size] = 0;
//	}
//	//CPY CONSTRUCTOR
//	String(const String& other) 
//		//= delete
//		:m_Size(other.m_Size)
// 	{
//		memcpy(m_Buffer, other.m_Buffer, m_Size + 1);
//	}
//	~String()
//	{
//		delete[] m_Buffer;
//	}
//	friend std::ostream& operator <<(std::ostream& stream, const String& string);
//	
//};
//
//std::ostream& operator <<(std::ostream& stream, const String& string)
//{
//	stream << string.m_Buffer;
//	return stream;
//}
//
//class Entity
//{
//public:
//	Entity()
//	{
//		std::cout << "CREATED" << std::endl;
//	}
//	~Entity()
//	{
//		std::cout << "DESTROYED" << std::endl;
//	}
//	void Print() const
//	{
//
//	}
//};
//
//class ScopedPtr
//{
//private:
//	Entity* m_Obj;
//public:
//	ScopedPtr(Entity* entity)
//		: m_Obj(entity)
//	{}
//	~ScopedPtr()
//	{
//		delete m_Obj;
//	}
//
//	Entity* operator ->()
//	{
//		return m_Obj;
//	}
//};
//
//class Vector2 
//{
//public:
//	float x, y;
//	Vector2()
//		: x(0.0f), y(0.0f) {};
//	Vector2(float x, float y)
//	{
//		this->x = x;
//		this->y = y;
//	}
//	Vector2 Add(const Vector2& other)const
//	{
//		return Vector2(x + other.x, y + other.y);
//		//return operator+(other);
//		//return *this+other;
//
//	}
//	Vector2 Multipy(const Vector2& other)const
//	{
//		return Vector2(x * other.x, y * other.y);
//	}
//	Vector2 operator +(const Vector2& other)const
//	{
//		return Add(other);
//	}
//	Vector2 operator *(const Vector2& other)const
//	{
//		return Multipy(other);
//	}
//	void operator +=(const Vector2& other)
//	{
//		*this = Add(other);
//	}
//
//};
//std::ostream& operator << (std::ostream & stream, const Vector2 & other)
//{
//	stream << other.x << " , " << other.y;
//	return stream;
//}
//
//int main()
//{
//	ScopedPtr entity = new Entity();
//	entity->Print();
//	//String s = "kakarrot";
//	//std::cout << s << std::endl;
//	//SMART PTR
//	//{
//	//	std::shared_ptr<Entity> share;
//	//	{
//	//		std::unique_ptr<Entity> u = std::make_unique<Entity>();
//	//		std::shared_ptr<Entity> s = std::make_shared<Entity>();
//	//		std::weak_ptr<Entity> w = s;// wont increase the ref count;
//	//		share = s;
//	//	}
//	//	std::cout << "OUT OF SCOPE 1" << std::endl;
//	//}
//	// 
//	//Vector2 pos1(1, 1);
//	//Vector2 pos2(1, 1);
//	//Vector2 speed(3.6f, 4.5f);
//	//std::cout << speed << std::endl;
//	//Vector2 acc(10.2f, 100.11f);
//	////std::cout << acc.x << " " << acc.y << std::endl;
//	//pos1 = pos1 + speed * acc;	
//	//pos2 += (speed * acc);
//	//std::cout << pos1 << std::endl;
//	//std::cout << pos2 << std::endl;
//
//	std::cin.get();
//}