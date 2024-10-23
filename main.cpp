#include <iostream>
using namespace std;

int main() {
  const int m = 5;
  int matrix[m][m];
  cout << "Enter matrix: "<< endl;
  for (int i = 0; i < m; ++i) {
  for (int j = 0; j < m; ++j) {
    cin >> matrix[i][j];
  }
  }
  cout << "Even numbers in the matrix: "<<endl;
  for (int i = 0; i < m; ++i) {
    for (int j = 0; j < m; ++j) {
      if (matrix[i][j] % 2 == 0) {
    cout << "The element " << matrix[i][j] << " situated in [" << i << "][" << j << "]" << endl;
  }
  }
  }
  
  return 0;
}
