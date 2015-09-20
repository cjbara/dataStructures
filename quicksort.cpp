//This implements a quicksort for integers with pivot as element 1
#include <iostream>
using namespace std;

void quicksort(int data[], int n){
  //check for base case
  if(n > 1){
    
    //recursive calls
    mergesort(&data[0],n1);
    mergesort(&(data+n1)[0],n2);
    merge(data, n1, n2);
  }
}
  
int main(int argc, char **argv){

  int data[10] = {3, 4, 5, 2, 1, 7, 8, 9, 6, 0};
  int n = 10;
  quicksort(data, n);

  for(int i=0; i<n; i++)
    cout << data[i] << ", ";
  cout << endl;
}
  
