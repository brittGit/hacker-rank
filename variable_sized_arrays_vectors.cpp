#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
/*
It turns out "queries" are in fact just user input in the expected format. Take a look at this in the Sample Input:

"...The first line contains two space-separated integers denoting the respective values of (the number of variable-length arrays) and (the number of queries)..."

This means the first line of input should be a value for "n" and a value for "q". "n" will be the number of arrays in the array of arrays.
"q" will be the number of queries. The next lines in the input are expected to be one line per array, then one line per query.
*/
/* 
2 2                                    <-- n q
3 1 5 4                                <-- first array
5 1 2 8 9 3                            <-- second array
0 1                                    <-- query
1 3                                    <-- query
*/

int main() {

  	int n, q, k;
    cout << "Enter values for n and q: "; //size of 2d array
  	cin >> n >> q;
  
  	// Declaring/initializing an vector that will contain a vector of int's (AKA 2D vector)
    vector<vector<int> > a;
    //int** a = new int*[n];
  	
  //how big the arrays will be then filling with numbers, k = size of vector
    for(int i = 0; i < n; i++){
      cout << "How big you want the vector: "; //size of each array in the 2D array
      cin >> k;

      // Initializing a[i] to an array of int's
      //a[i] = new int[k];
      vector<int> temp;
      
      //filling temp vector with numbers
      for(int j = 0; j < k; j++){
        int value;
    	  cout << "What numbers do you want in the array: ";
    	  cin >> value;
        temp.push_back(value);
      /*
      k = 3         k = 5
          i  j        i  j
        a[0][0]     a[1][0]
        a[0][1]     a[1][1]
        a[0][2]     a[1][2]
                    a[1][3]
                    a[1][4]
      */
    }
    a.push_back(temp);
  }

  /*
      2 2
      3 1 5 4
      5 1 2 8 9 3
  */
    //getting queries
    for(int x = 0; x < q; x++){
      int i, j = 0;
      cout << "What numbers do you want in query (i and j) " << x << ": \n";
      cin >> i >> j;

   /*
      2 2
      1 5 4
      1 2 8 9 3
      0 1 
      1 3
  */
      cout << a[i][j] << "\n";
    }
    return 0;
}