#include <iostream>
#include <vector>

using namespace std;
using ll = long long;

int main() {
  int n;
  cin >> n;

  long long ans = 0;

  for (int i = 1; i < n; i++) {
    ans += i;
  }

  cout << ans << endl;
}