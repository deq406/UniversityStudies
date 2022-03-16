#include <iostream>
int main() {
  setlocale(LC_CTYPE, "Russian");
  using namespace std;
  int n, m, k, b;
 
  int i, j,t,e,r,u, row = 0, column = 0;
  int count = 0;
  cout << "Введите число: " << endl;
  cin >> k;
  cout << "Введите количество строк: " << endl;
  cin >> n;
  cout << "Введите количество столбцов: " << endl;
  cin >> m;
int A[n][m];
  cout << "Введите элементы массива" << endl;
  for (i = 0; i < n; i++) {
    for (j = 0; j < m; j++) {
      cin >> A[i][j];
      
    }
  }
  
  

    for (int row = 0; row < n; row++) {
      if (A[row][k-1] == 0) {
        count++;
        if (count == n) {
          b = 1;
        }
        else { b = 0; }
      }
    }
    cout<<"b=" << b;
    return 0;

}
