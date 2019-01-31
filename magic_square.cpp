#include <bits/stdc++.h>

using namespace std;

int main() {

  /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  int a[3][3];
  int cost[9] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
  int sq1[3][3] = {{8, 1, 6}, {3, 5, 7}, {4, 9, 2}};
  int sq2[3][3] = {{6, 1, 8}, {7, 5, 3}, {2, 9, 4}};
  int sq3[3][3] = {{4, 9, 2}, {3, 5, 7}, {8, 1, 6}};
  int sq4[3][3] = {{2, 9, 4}, {7, 5, 3}, {6, 1, 8}};
  int sq5[3][3] = {{8, 3, 4}, {1, 5, 9}, {6, 7, 2}};
  int sq6[3][3] = {{4, 3, 8}, {9, 5, 1}, {2, 7, 6}};
  int sq7[3][3] = {{6, 7, 2}, {1, 5, 9}, {8, 3, 4}};
  int sq8[3][3] = {{2, 7, 6}, {9, 5, 1}, {4, 3, 8}};
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      scanf("%d", &a[i][j]);
      cost[1] += abs(a[i][j] - sq1[i][j]);
      cost[2] += abs(a[i][j] - sq2[i][j]);
      cost[3] += abs(a[i][j] - sq3[i][j]);
      cost[4] += abs(a[i][j] - sq4[i][j]);
      cost[5] += abs(a[i][j] - sq5[i][j]);
      cost[6] += abs(a[i][j] - sq6[i][j]);
      cost[7] += abs(a[i][j] - sq7[i][j]);
      cost[8] += abs(a[i][j] - sq8[i][j]);
    }
  }
  int min = cost[1];
  for (int i = 2; i <= 8; i++)
    if (cost[i] < min)
      min = cost[i];
  printf("%d", min);
  return 0;
}


