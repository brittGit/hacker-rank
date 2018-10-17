#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {

  vector<int> integers;
  stringstream ss(str);
  
  char ch;
  int number;
  int i = 0;
  
  // Parse the string
  while ( ss >> number ){ //23 4 56
    integers.push_back ( number );  //23 4 56
  	i++;
    ss >> ch; 
  }
  return integers;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);   //initializing to the retrun value of the function
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    } 
    
    return 0;
}