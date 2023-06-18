#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007
#define p 31
int main()
{
    int n;
    cin >> n;


        int temp = n;
        int rem = 0;
            
        long long int sum = 0;
        while(temp != 0) {
            rem = temp%10;
            temp = temp/10;
            
            sum += pow(rem, 3);
        }
        
        if(sum == n)
        cout << "Yes";
        
        
        
        cout << "No";

    return 0;
}