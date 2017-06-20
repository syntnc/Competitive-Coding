#include <iostream>
using namespace std;

int main() 
{
	int n;
	while(true) {
		cin >> n;
		if (n != 0) {
			int ans = (n + 1) + (n * (n + 1) * 3 / 2);
			cout << ans << endl;
		} else {
			break;
		}
	}
	return 0;
}