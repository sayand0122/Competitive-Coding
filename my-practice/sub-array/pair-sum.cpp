// Naive method is to take 2 loops and traverse through it ------- time = O(n^2)

// Better way take 2 pointers at high and low and keep on adding to check if the
// result is higher or lesser than the required sum and accordingly moving the
// pointers ------ time = O(n)

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k, flag = 0;
  cin >> n >> k;
  int a[n];
  for (int i = 0; i < n; i++)
    cin >> a[i];
  sort(a, a + n);
  int low = 0, high = n - 1, sum = 0;
  while (low < high) {
    sum = a[low] + a[high];
    if (sum == k) {
      cout << low << " " << high << endl;
      flag = 1;
      break;
    } else if (sum > k) {
      high--;
    } else {
      low++;
    }
  }
  if (!flag)
    cout << "Not possible" << endl;
}
