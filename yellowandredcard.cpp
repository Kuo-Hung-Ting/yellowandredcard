#include <iostream>
using namespace std;

int main() {
  int N,Q;
  cin >> N >> Q;
  int y[101], r[101];
  for (int i = 1;i <= Q; i++){
    int a,b;
    cin >> a >> b;
    if (a == 1){
      y[b] += 1;
    } else if (a == 2){
       r[b] += 1;
    } else if (a == 3){
        if (y[b] >= 2 || r[b] >= 1){
          cout << "Yes" << endl;
        } else {
          cout << "No" << endl;
        }
    }
  }
}
