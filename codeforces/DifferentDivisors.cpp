#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
#include<string>
#include<math.h>
#include<stack>
using namespace std;
int findNextPrime(int n);
bool isPrime(int n);


int c[100000], temp, K, I, N, d1;
long long int t,k,sum,num, n1, d, n2,n3, i, j, c1,c2,c3,c4,sum2,l;
string s, T;
long long gcd(long long int a, long long int b)
        {
            if (b == 0)
                return a;
            return gcd(b, a % b);
        }
        long long lcm(int a, int b)
        {
            return (a / gcd(a, b)) * b;
        }
int findNextPrime(int n)
{
    int nextPrime = n;
    bool found = false;

    //loop continuously until isPrime returns true for a number above n
    while (!found)
    {
        nextPrime++;
        if (isPrime(nextPrime))
            found = true;
    }

    return nextPrime;
}
bool isPrime(int n)
{
    //loop from 2 to n/2 to check for factors
    for (int i = 2; i <= n/2; i++)
    {
        if (n % i == 0)     //found a factor that isn't 1 or n, therefore not prime
            return false;
    }

    return true;
}
int main()
{
    cin>>t;
    long long int count=0, count1=0;
    for(int r=0; r<t; ++r)
    {
        cin>> d;
        if(isPrime(1+d))
        {
            cout<< (1+d)* (1+(2*d))<<endl;
        }
        else{
        num = findNextPrime(3+d);
        cout<<num*3<<endl;
        }


    }
    return 0;
}