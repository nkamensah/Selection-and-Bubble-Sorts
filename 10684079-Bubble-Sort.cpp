//10684079

#include <iostream>
using namespace std;

    int main()
    {
       int A[] = {5, 7, 8, 2, 4, 3};
       int j = 1;
       int tmp;

       for(int i = 0; i < 6; i++){
          for(j = 0; j < 6-i-1; j++){
              if(A[j] > A[j + 1]){
                  tmp = A[j];
                  A[j] = A[j + 1];
                  A[j + 1] = tmp;
              }

          }
       }

       cout << "The sorted data in order: " << endl;
       for(int i = 0; i < 6; i++){
          cout << A[i] << endl;
       }


      return 0;
    }
