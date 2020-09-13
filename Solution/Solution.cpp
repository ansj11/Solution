//
//  Solution.cpp
//  Solution
//
//  Created by anshijie on 2020/9/13.
//  Copyright © 2020 anshijie. All rights reserved.
//

#include <cmath>
#include "Solution.h"


int Solution::hasPrimeInN(int n){
    if (n < 2){
        return 0;
    }
    // 计算合数的个数；
    int count = 0;
    for (int i = 2; i <= sqrt(n); i++){
        for (int j = i; i*j <= n; j++)
            count ++;
    }
    return n-1-count;
}

bool Solution::isPrime(int n){
    if (n < 2){
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++){
        if (n % i == 0){
            return false;
        }
    }
    return true;
}
