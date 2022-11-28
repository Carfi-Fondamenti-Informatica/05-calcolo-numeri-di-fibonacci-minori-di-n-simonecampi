#include <iostream>
using namespace std;
int main() {
   int a=1, b=1, c=0, n=0;
   cin>>n;
   cout<<a<<endl;
   cout<<b<<endl;
   while (c<=n)
   {
      c = a + b;
      if (c<=n) {cout << c << endl;}
      a = b;
      b = c;
   }

   return 0;
}
