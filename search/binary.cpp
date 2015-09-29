#include <iostream>
#include <vector>
using namespace std;

template <typename T>
int bsearch_helper(const vector<T> &v, int low, int high, const T &x){
  //returns index of element if found, returns -1 if not found
  //check for base case
  if (high < low) //the element is not in the vector
    return -1;

  //find midpoint 
  int mid = low + (high - low)/2;

  //check the three cases
  if (v[mid] == x){
    return mid;
  } else if (v[mid] > x) {
    return bsearch_helper(v, low, mid-1, x);
  } else { //v[mid] < x
    return bsearch_helper(v, mid+1, high, x);
  }

}

template <typename T>
int bsearch(const vector<T> &v, const T &x){
  return bsearch_helper(v, 0, v.size()-1, x);
}

int main() {
  vector<int> v;
  v.push_back(1);
  v.push_back(3);
  v.push_back(4);
  v.push_back(6);
  for(int i = 0; i<7; i++)
    cout << bsearch(v, i) << endl;
  return 0;
}


