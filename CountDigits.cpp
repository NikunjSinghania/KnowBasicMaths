#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007
#define p 31
int main()
{
    int N;
    cin >> N;
    int rem = 0;
        int count = 0;
        int temp = N;
        while(temp) { 
            rem = temp%10;
            temp = temp/10;
            if(rem!=0 && N%rem == 0)
                count++;
        }
    cout << count;
    return 0;
}