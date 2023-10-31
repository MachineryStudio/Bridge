#include <iostream>
#include <string.h>
#include <fstream>
#include <sstream>
#include <vector>
#include <conio.h>
#include <Windows.h>
#include <mmsystem.h>
#include<set>
#include<algorithm>
#include<iterator>
#include<array>
#include<list>
#include<forward_list>


using namespace std;


// An iterator over a vector of vectors.
template<typename T>
class vv_iterator : public iterator<bidirectional_iterator_tag, T>{
public:

  static vv_iterator<T> begin(vector<vector<T>>& vv) {
    return vv_iterator(&vv, 0, 0);
  }
  static vv_iterator<T> end(vector<vector<T>>& vv) {
    return vv_iterator(&vv, vv.size(), 0);
  }

  vv_iterator() = default;
  // ++prefix operator
  vv_iterator& operator++()
  {
    // If we haven't reached the end of this sub-vector.
    if (idxInner + 1 < (*vv)[idxOuter].size())
    {
      // Go to the next element.
      ++idxInner;
    }
    else
    {
      // Otherwise skip to the next sub-vector, and keep skipping over empty
      // ones until we reach a non-empty one or the end.
      do
      {
        ++idxOuter;
      } while (idxOuter < (*vv).size() && (*vv)[idxOuter].empty());

      // Go to the start of this vector.
      idxInner = 0;
    }
    return *this;
  }
  // --prefix operator
  vv_iterator& operator--()
  {
    // If we haven't reached the start of this sub-vector.
    if (idxInner > 0)
    {
      // Go to the previous element.
      --idxInner;
    }
    else
    {
      // Otherwise skip to the previous sub-vector, and keep skipping over empty
      // ones until we reach a non-empty one.
      do
      {
        --idxOuter;
      } while ((*vv)[idxOuter].empty());

      // Go to the end of this vector.
      idxInner = (*vv)[idxOuter].size() - 1;
    }
    return *this;
  }
  // postfix++ operator
  vv_iterator operator++(int)
  {
    T retval = *this;
    ++(*this);
    return retval;
  }
  // postfix-- operator
  vv_iterator operator--(int)
  {
    T retval = *this;
    --(*this);
    return retval;
  }
  bool operator==(const vv_iterator& other) const
  {
    return other.vv == vv && other.idxOuter == idxOuter && other.idxInner == idxInner;
  }
  bool operator!=(const vv_iterator &other) const
  {
    return !(*this == other);
  }
  const T& operator*() const
  {
    return *this;
  }
  T& operator*()
  {
    return (*vv)[idxOuter][idxInner];
  }
  const T& operator->() const
  {
    return *this;
  }
  T& operator->()
  {
    return *this;
  }

private:
  vv_iterator(vector<vector<T>>* _vv,
              size_t _idxOuter,
              size_t _idxInner)
    : vv(_vv), idxOuter(_idxOuter), idxInner(_idxInner) {}

  vector<vector<int>>* vv = nullptr;
  size_t idxOuter = 0;
  size_t idxInner = 0;
};



int main()
{
    vector<std::vector<int>> a = {{3, 5, 2, 6}, {-1, -4, -3, -5}, {100}, {-100}};
    reverse(vv_iterator<int>::begin(a), vv_iterator<int>::end(a));
    for (const auto& v : a)
    {
        cout << "{ ";
        for (auto i : v)
        cout << i << " ";
        cout << "}\n";
    }
}
