#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int Stack[100], ind;

void push(int x)
{
    ++ind;
    Stack[ind] = x;
}

bool isEmpty()
{
    if(ind>=1) return false;
    else return true;
}

void pop()
{
    Stack[ind] = 0;
    --ind;
}

void top()
{
    cout<<Stack[ind];
}

int main()
{
    cout<<isEmpty();

    return 0;
}