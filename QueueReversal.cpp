#include <iostream>
#include <string>
#include <math.h>
#include <cmath>
#include <algorithm>
#include <stack>
using namespace std;

int main()
{

    int n = 6;
    stack<int> a;
    stack<int> b;
    int x;

    for (int i = 1; i <= 6; i++)
    {
        a.push(i);
    }

    for (int i = 0; i < n; i++)
    {
        b.push(i);
    }

    while (!a.empty())
    {

        cout << '\t' << a.top();
        a.pop();
    }
}