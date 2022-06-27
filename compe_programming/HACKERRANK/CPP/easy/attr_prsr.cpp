#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
// using namespace std;

std::vector<std::string> tag_stack;
std::map<std::string, std::string> attrs;

void insert_attr(std::string &name, std::string &val)
{
  std::string full;
  for (std::string &str : tag_stack)
    full += str + ".";
  full.pop_back();
  full += "~" + name;
  attrs[full] = val;
}

int main()
{
  int n, q;
  std::cin >> n >> q;

  for (int i = 0; i < n; ++i)
  {
    char c;
    std::cin >> c;
    if (std::cin.peek() == '/')
    {
      std::string cn;
      std::cin >> cn;
      tag_stack.pop_back();
    }
    else
    {
      std::string name;
      std::cin >> name;
      if (name.back() == '>')
      {
        name.pop_back();
        tag_stack.push_back(name);
      }
      else
      {
        tag_stack.push_back(name);

        for (;;)
        {
          std::string attr_name, attr_val, eq;
          std::cin >> attr_name >> eq >> attr_val;
          if (attr_val.back() == '>')
          {
            attr_val.pop_back();
            attr_val.pop_back();
            attr_val = attr_val.substr(1);
            insert_attr(attr_name, attr_val);
            break;
          }
          else
          {
            attr_val.pop_back();
            attr_val = attr_val.substr(1);
            insert_attr(attr_name, attr_val);
          }
        }
      }
    }
  }

  for (int i = 0; i < q; ++i)
  {
    std::string qry;
    std::cin >> qry;
    if (attrs.find(qry) != attrs.end())
      std::cout << attrs[qry] << std::endl;
    else
      std::cout << "Not Found!" << std::endl;
  }

  return 0;
}