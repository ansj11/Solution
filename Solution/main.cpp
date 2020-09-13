//
//  main.cpp
//  Solution
//
//  Created by anshijie on 2020/9/13.
//  Copyright © 2020 anshijie. All rights reserved.
//

#include <iostream>
#include "Solution.h"

int main() {
    Solution solution;
    int n;
    std::cout << "input a int number: ";
    std::cin >> n;
    std::cout << solution.hasPrimeInN(n) << std::endl;
    std::cout << solution.isPrime(n) << std::endl;
    std::cout << "Done!\n";
    return 0;
}
