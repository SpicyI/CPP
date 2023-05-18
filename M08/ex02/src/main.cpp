#include "MutantStack.hpp"

void subject_test()
{
  MutantStack<int> mstack;
  mstack.push(5);
  mstack.push(17);
  std::cout << mstack.top() << std::endl;
  mstack.pop();
  std::cout << mstack.size() << std::endl;
  mstack.push(3);
  mstack.push(5);
  mstack.push(737);
  //[...]
  mstack.push(0);
  MutantStack<int>::iterator it = mstack.begin();
  MutantStack<int>::iterator ite = mstack.end();
  ++it;
  --it;
  while (it != ite) {
    std::cout << *it << std::endl;
    ++it;
  }
  std::stack<int> s(mstack);
}

void other_tests()
{
  MutantStack<int> mstack;
  mstack.push(42);
  mstack.push(13);
  mstack.push(37);
  {
  std::cout << "const iterator" << std::endl;
  MutantStack<int>::const_iterator it = mstack.cbegin();
  MutantStack<int>::const_iterator ite = mstack.cend();
  for(;it != ite ; ++it)
    std::cout << *it << ", ";
  }

  {
  std::cout << std::endl << "reverse iterator" << std::endl;
  MutantStack<int>::reverse_iterator it = mstack.rbegin();
  MutantStack<int>::reverse_iterator ite = mstack.rend();
  for(;it != ite ; ++it)
    std::cout << *it << ", ";
  }
}

int main()
{
  subject_test();
  std::cout << std::endl;
  other_tests();

}