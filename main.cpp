//
// Created by 이인성 on 2021/07/08.
//

#include <iostream>
#include <cstdio>
#include <queue>

using namespace std;

int main() {
//  ios_base :: sync_with_stdio(false);
//  cin.tie(NULL);
//  cout.tie(NULL);
  priority_queue<int, vector<int>, greater<>> pq;
  int N;
  int x;
//  cin >> N;
  scanf("%d", &N);
  for(int i=0; i<N; i++) {
//    cin >> x;
    scanf("%d", &x);
    if(x == 0) {
      if(pq.empty())
//        cout << 0 << endl;
        printf("%d\n", 0);
      else {
//        cout << pq.top() << endl;
        printf("%d\n", pq.top());
        pq.pop();
      }
    }
    else
      pq.push(x);
  }

  return 0;
}