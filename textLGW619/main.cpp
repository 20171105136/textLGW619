//
//  main.cpp
//  textLGW619
//
//  Created by s20171105136 on 2019/6/19.
//  Copyright © 2019 s20171105136. All rights reserved.
//

#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int a,b;

    ofstream test("/Users/s20171105136/Desktop/test.txt/test.txt");
        ifstream lgwin("/Users/s20171105136/Desktop/lgwin.txt");
    if(test.is_open())
    {
        cout <<"file ok"<<endl;
        lgwin>>a>>b;
        cout<<a<<"   "<<b<<endl;
        lgwin.close();
        
    }
    if (test.is_open())
    {
        test<<"c="<<a+b<<endl;
        cout<<"c="<<a+b<<endl;
        test.close();
    }
    return 0;
}
