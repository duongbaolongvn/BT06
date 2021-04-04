#include <iostream>

using namespace std;

int Find(int a[], int& i)
{
    int x[10];
    cout << i++ << endl;
    return Find(x, i) + 1;
}
int main()
{
    int a[10], i =0;
    cout << Find(a, i);
}