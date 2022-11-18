#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  deque<int> dQ;
  int t;
  bool rev = false;
  cin >> t;
  while (t--)
  {
    string m;
    cin >> m;
    if (m == "toFront")
    {
      int k;
      std::cin >> k;
      if (rev == false)
      {
        dQ.push_front(k);
      }
      else
      {
        dQ.push_back(k);
      }
    }
    else if (m == "front")
    {
      if (dQ.empty())
      {
        std::cout << "No job for Ada?" << '\n';
      }
      else
      {
        if (rev == false)
        {
          std::cout << dQ.front() << '\n';
          dQ.pop_front();
        }
        else
        {
          std::cout << dQ.back() << '\n';
          dQ.pop_back();
        }
      }
    }
    else if (m == "back")
    {
      if (dQ.empty())
      {
        std::cout << "No job for Ada?" << '\n';
      }
      else
      {
        if (rev == false)
        {
          std::cout << dQ.back() << '\n';
          dQ.pop_back();
        }
        else
        {
          std::cout << dQ.front() << '\n';
          dQ.pop_front();
        }
      }
    }
    else if (m == "push_back")
    {
      int k;
      std::cin >> k;
      if (rev == false)
      {
        dQ.push_back(k);
      }
      else
      {
        dQ.push_front(k);
      }
    }
    else
    {

      rev = !rev;
    }
  }

  return 0;
}
