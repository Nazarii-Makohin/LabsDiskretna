#include <iostream>
#include <math.h>
#include <locale.h>
using namespace std;
void enter(char*arr, int n){
    cout<<"¬ведiть вашi елементи "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
}
int main()
{
    int x,y,n,r=0, w;

    setlocale(LC_ALL, "Ukrainian");
  cout << "¬ведiть кiлькiсть елементiв <<A>>" << endl;
  cin >> x;
  char* A = new char[x];
  enter(A, x);
  cout << "¬ведiть кiлькiсть елементiв <<B>>" << endl;
  cin >> y;
  char* B = new char[y];
  enter(B, y);
  char* U = new char[x+y];

  for (int i = 0; i < x; i++) {
    for (int j = 0; j < y; j++) {
      if (A[i] == B[j]) {
        for (int t = j; t < ((x + y) - 1); t++) {
          B[t] = B[t + 1];
        }
        y--;
      }
      else continue;
    }
  }
  for (int i = 0; i < (x + y); i++) {
    if (i <x) {
      U[i] = A[i];
    }
    else {
      U[i] = B[r];
      r++;
    }
  }

  cout << endl << "Result: {";
  for (int i = 0; i < (x + y); i++) {
    cout << U[i] << " ";
  }
     cout <<"}"<<endl<<"Boolean: "<<endl;
    w=x+y;
    n=pow(2,(w));

    for (int i = 0; i < n; i++ )
    {
        cout<<"{";
        for (int  j = 0; j < w; j++ )
            if ( i & (1 << j) )
              cout<< U[j];
        cout<<"}"<<endl;
    }


    return 0;
}
