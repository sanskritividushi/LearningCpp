#include<iostream>
using namespace std;

  
void towerOfHanoi(int n, char s, char e, char d)
{
    if (n == 0) {
        return;
    }
    towerOfHanoi(n - 1, s, d, e);
    cout << "Move " << n << " from " << s << " to " << e << endl;
    towerOfHanoi(n - 1, d, e, s);
}
  
int main()
{
    int N = 3;
    towerOfHanoi(N, 'A', 'C', 'B');
    return 0;
}