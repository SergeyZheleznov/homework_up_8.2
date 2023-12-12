#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
#include <set>

template<typename T>
void print_container(T b)
{
	std::for_each(std::begin(b), std::end(b), [](std::string a)
		{
			std::cout << a << " ";
		});
}

int main()
{

	std::set<std::string> test_set = { "one", "two", "three", "four" };
	print_container(test_set);
	std::cout << std::endl;

	std::list<std::string> test_list = { "one", "two", "three", "four" };
	print_container(test_list);

	std::cout << std::endl;
	std::vector<std::string> test_vector = { "one", "two", "three", "four" };

	print_container(test_vector);
	std::cout << std::endl;
	return 0;
}