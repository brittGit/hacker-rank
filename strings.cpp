#include <iostream>
#include <string>
using namespace std;

int main() {
  string a, b;

  cin >> a; //abcde
  cin >> b; //bu

  cout << a.size() << " " << b.size() << "\n";
  cout << a + b << "\n";

  
  char c0 = a[0]; // 'a'
  // 'b'
  
  
  a[0] = b[0]; // 'b'
  b[0] = c0;
  
   cout << a << " " << b;

  return 0;
}