#include <iostream>

using namespace std;

void hoanvi(string s, int n, char arr[], int& index)
{
    if (index == (n - 1)){
        cout << arr << endl;
        index = 0;
    }
    for (int i = 0; i <= n; i++){
        arr[index++] = s[i];
        hoanvi(s, n, arr, index);
    }
}

int main()
{
    string s;
    cin >> s;
    int n = s.length();
    char arr[n];
    int index = 0;
    hoanvi(s, n, arr, index);
    return 0;
}