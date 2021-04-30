//
//  冒泡排序.cpp
//  C
//
//  Created by  森 王 on 2021/4/28.
//

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{

    int arr[5];
    int arrLength = sizeof(arr) / sizeof(arr[0]);
    for (int j = 0; j < arrLength; j++)
    {
        arr[j] = rand() % 10 + 1;
        cout << arr[j] << endl;
    };

    // 要考虑到如果数组本来就是有序的情况
    // 如果数组本来就是有序的话，那么arr[begin]<arr[begin-1]就永远不会成立

    for (int k = arrLength; k <= arrLength; k--)
    {
        bool flag = true; // 为什么放在这里，因为如果某一次循环的时候，已经有序了，就不用再往下执行了
        for (int begin = 1; begin < arrLength; begin++)
        {
            if (arr[begin] < arr[begin - 1])
            {
                int temp = arr[begin];
                arr[begin] = arr[begin - 1];
                arr[begin - 1] = temp;
                flag = false;
            }
        };
        if (flag)
            break;
    }

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        cout << arr[i] << endl;
    };
    return 0;
}
