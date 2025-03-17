#include <iostream>

using namespace std;

int main()
{
   int *a = new int [3];
   a = new int[5];

   int b[5];

   cout << sizeof(a)<< endl;
   cout << sizeof(b) / sizeof(b[0])<< endl;

   return 0;
}