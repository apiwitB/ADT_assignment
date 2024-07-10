// week2.cpp : This file contains the 'main' function. Program execution begins and ends there.


#include <iostream>
using namespace std;
int result = 0;

int fibonacci(int x)
{
    if (x == 0)
    {
        return 0;
    }
    else if (x == 1)
    {
        return 1;
    }
    else if (x > 1)
    {
        int firesult = fibonacci(x - 1) + fibonacci(x - 2);
        return firesult;
    }
}



void fibo(int x ,int n)
{
    if (x > n)
    {
        return;
    }
    if (x == 1)
    {
        result++;
    }
    else if (x == 0) 
    {
        result = result + 0;
    }
    else if (x > 1)
    {
        result = fibonacci(x);
    }
    
    cout << "F("<< x << ")"<<" = "<<result<<endl;
    fibo(x+1,n);
}



int main()
{
    int x = 0,y;
    cout << " Fibonacci = ";
    cin >> y;
    fibo(x,y);
}



