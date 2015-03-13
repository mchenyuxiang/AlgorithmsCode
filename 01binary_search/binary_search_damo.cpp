/*************************************************************************
	> File Name: binary_search.cpp
	> Author:zhaoyihong 
	> Mail:zhaoyihong_at_126_dot_com 
	> Created Time: 2015年03月13日 星期五 19时46分45秒
 ************************************************************************/

#include  <iostream>
#include  <vector>
#include  <algorithm>
#include  <fstream>
#include    "binary_search.h"
using namespace std;
using namespace alg;

int main(int argc,char *argv[])
{
    if(argc != 2)
    {
        cout << "usage: binary_search path"<< endl;
        return -1;
    }
    
    ifstream white_stream(argv[1]);
    if(!white_stream)
    {
        cout << "open file error" << endl;
        return -1;
    }

    vector<int> nums;
    int input_num;
    while(white_stream >> input_num)
    {
        nums.push_back(input_num);
    }

    white_stream.close();

    sort(nums.begin(),nums.end(),less<int>());

    for(auto i:nums)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "输入需要查找的数" << endl;
    int index;
    while(cin >> input_num)
    {
        if((index=mybinary_search(input_num,nums)) >= 0)
        {
            cout << input_num << "在白名单中的"  << index  << "位置" << endl;
        }
        else
        {
            cout << input_num << "不在白名单中" << endl;
        }
        cout << "输入需要查找的数" << endl;
    }

}
