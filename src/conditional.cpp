#include <iostream>
using namespace std;
int main() {
  int count_B = 0;
  int count_A_and_B = 0;
  
  for (int i=1; i<=6; i++) {
    for (int j=1; j<=6; j++) {

      bool A = (i==4 && j==4);
      bool B = (i==4 || j==4);

      if(B) {
        count_B++;
        if(A) count_A_and_B++;
      }
    }
  }

  cout << "n(B) = " << count_B << endl;
  cout << "n(A and B) = " << count_A_and_B << endl;
  cout << "P(A|B) = " << (double)count_A_and_B << "/" << count_B << endl;

  return 0;
}
