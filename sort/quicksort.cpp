//This implements a quicksort for integers with pivot as element 1
#include <iostream>
using namespace std;

void swap(int *data, int index1, int index2){
  int temp = data[index1];
  data[index1] = data[index2];
  data[index2] = temp;
}


void quicksort(int data[], int n){
  //check for base case
  if(n > 1){
    //create local variables
    int pivot_index;	//Array index for pivot element
    int n1;		//elements before pivot index
    int n2;		//elements after pivot index
    
    //initialize the two indicies
    //to find a pivot, choose a random value, and then swap that witht he first element to make the previous algorithm work
    int random = rand()%n;
    swap(data, 0, random);
    int pivot = data[0];
    int leftindex = 1;
    int rightindex = n-1;

    while(leftindex <= rightindex){
      while(data[leftindex] <= pivot && leftindex < n)
	leftindex++;
      while(data[rightindex] > pivot)
	rightindex--;
      if(leftindex < rightindex){
	swap(data,leftindex,rightindex);
      }
    }
    pivot_index = rightindex;
    data[0] = data[pivot_index];
    data[pivot_index] = pivot;

    n1 = pivot_index + 1;
    n2 = n - n1;

    //recursive calls
    quicksort(data, n1);
    quicksort(data+pivot_index+1,n2);
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
  
