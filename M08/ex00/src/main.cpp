#include "easyfind.hpp"

int main(void)
{
  std::deque<int> d;
  std::list<int> l;
  std::vector<int> v;

  for (int i = 0 ; i < 10 ; ++i) {
    d.push_back(i);
    l.push_back(i);
    v.push_back(i);
  }
	std::cout << easyfind(d , 5) << std::endl;
	easyfind(l , 10);
	easyfind(v , 10);
}