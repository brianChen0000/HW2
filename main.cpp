//
//  main.cpp
//  homework1
//
//  Created by Mac on 2019/3/10.
//  Copyright © 2019年 Mac. All rights reserved.
//
#include<iostream>
using namespace std;

int main(int argc,char** argv)
{
    int key,key1,key2;
    cout<<"請輸入您的出生年月日"<<endl;
    cout<<"年份為";
    cin>>key;
    cout<<"月份為";
    cin>>key1;
    cout<<"日期為";
    cin>>key2;
    cout<<"您的出生年月日為:"<< key<< "年" << key1 << "月" << key2 << "日" << endl;
    return 0;
}
