/**
 * @Author ：谁书-ss
 * @Date   ：2023-07-09 19:45
 * @IDE    ：IntelliJ Clion
 * @Motto  ：ABC(Always Be Coding)
 * <p></p>
 * @Description ：vector容器 嵌套 vector容器，类似二维数组
 * <p></p>
 */
#include <iostream>

using namespace std;

#include <vector>
#include <algorithm>


void test() {
    vector<vector<int>> v;
    vector<int> v1;
    vector<int> v2;
    vector<int> v3;

    // 子容器添加数据
    for (int i = 1; i < 4; i++) {
        v1.push_back(i);
        v2.push_back(i + 10);
        v3.push_back(i + 20);
    }

    // 子容器添加到父容器中
    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);

    // 遍历
    vector<vector<int>>::iterator itBegin = v.begin();
    vector<vector<int>>::iterator itEnd = v.end();

    for (; itBegin < itEnd; itBegin++) {
        // (*itBegin) == 容器vector<int>
        for (vector<int>::iterator itBegin2 = (*itBegin).begin(); itBegin2 < (*itBegin).end(); itBegin2++) {
            cout << *itBegin2 << "  ";
        }
        cout << endl;
    }

}


int main() {
    test();
}
