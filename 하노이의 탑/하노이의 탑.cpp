//프로그래머스 하노이의 탑 문제

/*
    유명한 하노이의 탑 재귀문제.
    개인적으로 문제를 풀 때 해결안되는 부분이 원판의 갯수가 홀수냐 짝수냐에 따라서 첫 원판의 이동 경로가 달라진다는 점을 생각하는데 고생좀 한 거 같다. 
    개인적으로 이부분도 핵심중 하나 인 거 같은데 풀이 한 사람들 보니 아무도 언급을 안하는걸로 봐선 내가 멍청했던건가 싶기도..?
*/

#include <string>
#include <vector>
#include <optional>

using namespace std;
vector<vector<int>> answer;

void recursive(int n, int from, int mid, int to)
{
    vector<int> r;
    if (n == 1) {  //가장 꼭대기의 원판
        r.push_back((int)from);
        r.push_back((int)to);
        answer.push_back(r);
        return;
    }


    recursive(n - 1, from, to, mid);
    r.push_back((int)from);
    r.push_back((int)to);
    answer.push_back(r);
    recursive(n - 1, mid, from, to);
}

vector<vector<int>> solution(int n) {
    recursive(n, 1, 2, 3);
    return answer;
}

int main()
{
    cout    <<  "Hello, word"   <<  endl;
}

 