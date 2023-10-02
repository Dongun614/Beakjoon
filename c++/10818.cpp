/*
<Baekjoon No.10818 . c++ ver . Bronze 3>
문제:
N개의 정수가 주어진다. 이때, 최솟값과 최댓값을 구하는 프로그램을 작성하시오.

입력:
첫째 줄에 정수의 개수 N (1 ≤ N ≤ 1,000,000)이 주어진다. 
둘째 줄에는 N개의 정수를 공백으로 구분해서 주어진다. 
모든 정수는 -1,000,000보다 크거나 같고, 1,000,000보다 작거나 같은 정수이다.

출력:
첫째 줄에 주어진 정수 N개의 최솟값과 최댓값을 공백으로 구분해 출력한다.
*/

/*
<문제 풀이>
1. 정수 n을 입력받는다.
2. n만큼 숫자를 입력받아서 리스트에 담는다.
    2.1 리스트를 동적으로 할당하고 싶은데
3. 리스트 안에서 최대값과 최소값을 찾는다.
    3.1 i==0 이면 list[i]를 max, min으로 지정한다.
    3.2 그 다음부턴 max보다 크면 max값을 list[i]로, min 값보다 작으면 min 값을 list[i]로 바꿔준다.
4. 최대값과 최소값을 출력한다.
*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int* n_list = new int[n];

    for(int i=0; i<n; i++){
        cin >> n_list[i];
    }

    int max, min;

    for(int i=0; i<n; i++){
        if(i == 0){
            max = n_list[i];
            min = n_list[i];
        }
        else{
            if(max < n_list[i]){
                max = n_list[i];
            }
            if(min > n_list[i]){
                min = n_list[i];
            }
        }
    }

    cout << min << " " << max << endl;


    return 0;
}