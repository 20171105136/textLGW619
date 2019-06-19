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
    ofstream out("/Users/s20171105136/Desktop/test.txt/test.txt");
    if(out.is_open())
    {
        out <<"1234567890\n";
        out <<"0987654321\n";
        out.close();
        
    }
    return 0;
}
