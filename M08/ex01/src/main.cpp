#include "Span.hpp"

void test_normal(void) {
  Span sp = Span(5);

  sp.addNumber(5);
  sp.addNumber(3);
  sp.addNumber(17);
  sp.addNumber(9);
  sp.addNumber(11);
  Span s(0);
  s = sp;
  // s.addNumber(5);
  std::cout << s.shortestSpan() << std::endl;
  std::cout << s.longestSpan() << std::endl;
}

void test_max(void) {
  Span sp = Span(10000);

  for (int i = -5000; i <= 4999; i++)
    sp.addNumber(i);
  std::cout << sp.shortestSpan() << std::endl;
  std::cout << sp.longestSpan() << std::endl;
}

void test_container_range(void) {
  std::vector<int>  v;
  Span sp(9);

  for (int i = 1 ; i < 10 ; i++)
    v.push_back(i * 3);
  sp.insertNumbers(v.begin(), v.end());
  std::cout << sp.shortestSpan() << std::endl;
  std::cout << sp.longestSpan() << std::endl;
}

void test_array_range(void) {
  int a[9] = {3, 6, 9, 12, 15, 18, 23, 24, 27};
  Span sp(9);

  sp.insertNumbers(std::begin(a), std::end(a));
  std::cout << sp.shortestSpan() << std::endl;
  std::cout << sp.longestSpan() << std::endl;
}

void test_no_span(void) {
  try {
    Span sp(0);
    std::cout << sp.shortestSpan() << std::endl;
  } catch (std::exception &e) {
    std::cerr << "Exception caught: "<< e.what() << std::endl;
  }
  try {
    Span sp(0);
    std::cout << sp.longestSpan() << std::endl;
  } catch (std::exception &e) {
    std::cerr << "Exception caught: "<< e.what() << std::endl;
  }
}

void test_no_store(void) {
  try {
    Span sp(0);
    sp.addNumber(0);
  } catch (std::exception &e) {
    std::cerr << "Exception caught: "<< e.what() << std::endl;
  }
  try {
    Span sp(1);
    int a[2] = {3, 6};
    sp.insertNumbers(std::begin(a), std::end(a));
  } catch (std::exception &e) {
    std::cerr << "Exception caught: "<< e.what() << std::endl;
  }
}

void test_const()
{
  const std::vector<int> container(5, 10);
  Span sp(5);
  try
  {
    sp.insertNumbers(container.cbegin(), container.cend());
  }
  catch(const std::exception& e)
  {
    std::cerr << e.what() << '\n';
  }
  
}

int main(void) {
  
  std::cout <<  "----- Normal test -----"<< std::endl;
  test_normal();
  std::cout << "----- 10,000 spans -----"<<std::endl;
  test_max();
  std::cout << "----- Container adding -----" <<std::endl;
  test_container_range();
  std::cout<< "----- Array range -----"<< std::endl;
  test_array_range();
  std::cout << "----- Empty span -----"<<std::endl;
  test_no_span();
  std::cout << "----- Add to empry span -----"<<std::endl;
  test_no_store();
  std::cout << std::endl;
  // test_const();
  return 0;
}