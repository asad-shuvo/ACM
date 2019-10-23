// pair::swap example
/*
#include <utility>      // std::pair
#include <iostream>     // std::cout

int main () {
  std::pair<int,char> foo (10,'a');
  std::pair<int,char> bar (90,'z');

  foo.swap(bar);

  std::cout << "foo contains: " << foo.first;
  std::cout << " and " << foo.second << '\n';

  return 0;
}
*/


#include <bits/stdc++.h>     // std::pair   // std::cout
using namespace std;
int main ()
{
 std:: pair<int,char> foo(10,'z');
 std:: pair<int,char> bar(90,'a');


  if (foo==bar) std::cout << "foo and bar are equal\n";
  if (foo!=bar) std::cout << "foo and bar are not equal\n";
  if (foo< bar) std::cout << "foo is less than bar\n";
  if (foo> bar) std::cout << "foo is greater than bar\n";
  if (foo<=bar) std::cout << "foo is less than or equal to bar\n";
  if (foo>=bar) std::cout << "foo is greater than or equal to bar\n";

  return 0;
}

