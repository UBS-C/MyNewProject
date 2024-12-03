#include <iostream>
#include <vector>
#include <algorithm>
#include <random>

int main() {
    std::cout << "Hello, World!" << std::endl;

    // 복권 번호 범위와 개수 설정
    const int minNumber = 1;
    const int maxNumber = 45;
    const int numberCount = 6;

    // 난수 생성기 설정
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(minNumber, maxNumber);

    // 복권 번호 생성
    std::vector<int> lotteryNumbers;
    while (lotteryNumbers.size() < numberCount) {
        int num = dis(gen);
        if (std::find(lotteryNumbers.begin(), lotteryNumbers.end(), num) == lotteryNumbers.end()) {
            lotteryNumbers.push_back(num);
        }
    }

    // 생성된 복권 번호 출력
    std::cout << "Generated lottery numbers: ";
    for (int num : lotteryNumbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}