//
//  main.cpp
//  7_reverseInteger
//
//  Created by HeLynn on 2020/6/10.
//  Copyright © 2020年 HeLynn. All rights reserved.
//

#include <iostream>
#include <math.h>

using namespace std;

class Solution {
public:
    int reverse(int x) {
        long temp = 0;
        while (x) {
            temp = temp * 10 + x % 10;
            x /= 10;
        }
        if (temp > INT_MAX || temp < INT_MIN ) {
            return 0;
        }
        return int(temp);
    }
};


int main(int argc, const char * argv[]) {
    Solution sol;
    cout << sol.reverse(-1234) << endl;
    cout << sol.reverse(1534236469) << endl;
    return 0;
}
