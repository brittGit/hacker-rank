#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
  int inputSize = 0;
  cout << "How big you want the array: ";
  cin >> inputSize;

  int* arr = new int[inputSize];

for(int i = 0; i < inputSize ; i++){
    cout << "What numbers do you want in the array: ";
    cin >> arr[i];
}
  
  cout << "Array: ";
  for(int i = 0; i < inputSize; i++){
    cout << arr[i] << " ";
  }

  cout << "Backwards array: ";
  for(int i = inputSize - 1; i >= 0; i--){
      cout << arr[i] << " ";
  }
    delete[] arr;   
    return 0;
}
