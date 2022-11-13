#include <iostream>
using namespace std;
int cnt=0;
void fib(int num) 
{
   int fo = 0, f1 = 1, fn = 0;
   cout << fo << " "<< f1 <<" ";
   cnt=cnt+4;
   for (int i = 2; i < num; i++) 
  {
      fn = fo + f1;
      fo = f1;
      f1 = fn;
      cout << fn << " ";
   }
   cnt=6*num+2;
   cout << endl<< cnt << " ";
}
int main() {
   int num;
   cout << "Enter the number : ";
   cin >> num;
   cout << "\nThe Fibonacci series : " ;
   fib(num);
   return 0;
}


// INPUT 
// 10
