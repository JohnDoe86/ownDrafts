#include <iostream>
#include <unordered_set>

using namespace std;

void test() {
  int a = 1, b = 2;
  std::unordered_set<int *> UnorderedPtrSet = {&a, &b};

  std::cout<<&a<<" "<<&b<<"\n";
  for (const auto i : UnorderedPtrSet) // warn
    cout<<i<<" "<<&i<<" "<<*i<<"\n";
}

int main()
{
    test();

    return 0;
}
