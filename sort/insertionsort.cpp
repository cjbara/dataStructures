//This implements an insertion sort for integers
#include <iostream>
using namespace std;

void insertionsort(int data[], int n){
  int temp;
  for(int i=0; i<n; i++){
    for(int j=0; j<i; j++){
      if(data[i] < data[j]){
	temp = data[i];
	data[i] = data[j];
	data[j] = temp;
      }
    }
  }
}
  
int main(int argc, char **argv){

  int data[10] = {3, 4, 5, 2, 1, 7, 8, 9, 6, 0};
  int n = 10;
  insertionsort(data, n);

  for(int i=0; i<n; i++)
    cout << data[i] << ", ";
  cout << endl;
}
  
