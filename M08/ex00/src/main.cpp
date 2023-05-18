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
  try
  {
	  std::cout << easyfind(d , 5) << std::endl;
  }
  catch(std::exception &e)
  {
    std::cout << "Exception caught: " << e.what() << std::endl;
  }

  try
  {
	  std::cout << easyfind(l , 10) << std::endl;
  }
  catch(std::exception &e)
  {
    std::cout << "Exception caught: " << e.what() << std::endl;
  }

  try
  {
	  std::cout << easyfind(v , -1) << std::endl;
  }
  catch(std::exception &e)
  {
    std::cout << "Exception caught: " << e.what() << std::endl;
  }
}