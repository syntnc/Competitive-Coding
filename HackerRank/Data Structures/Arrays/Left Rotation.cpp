#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long n, d;
    cin >> n >> d;
    long long arr[n];
    for(int i = 0; i < n; i++) {
    	cin >> arr[i];
    }
    for(int i = 0; i < n; i++) {
    	cout << arr[(i + d) % n] << " ";
    }
    cout << endl;
    return 0;
}