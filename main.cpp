//
// Created by 이인성 on 2021/07/08.
//

#include <iostream>
#include <queue>

using namespace std;

int main() {
  priority_queue<int, vector<int>, greater<>> pq;
  int N;
  int x;
  cin >> N;
  for(int i=0; i<N; i++) {
    cin >> x;
    if(x == 0) {
      if(pq.empty())
        cout << "0" << endl;
      else {
        cout << pq.top() << endl;
        pq.pop();
      }
    }
    else
      pq.push(x);
  }
  return 0;
}