#include <iostream>
#include <string>
#include <cstring>

// tool.cpp
int charToInt(char n);
int compareLength(std::string a, std::string b);
std::string initBigNum(int length);
std::string initBigNum(int length, std::string num);
bool isBigRegroup(std::string num);
std::string removeLeadingZero(std::string num);

std::string bigTwoAdd(std::string a, std::string b);


/*
bigAdd
1. tool.compareLength을 이용하여 입력 받은 두 수 중 큰 수의 길이를 생성.
2. 올바른 자리수를 맞추기 위하여 tool.initBigNum을 이용하여 자리수 맞추기.

bigTwoAdd
3. 각 자리수를 더하며 10이 넘어가는 경우 올림 배열에 저장을 하며 1의 자리를 result 값에 저장.
4. 올림 배열에 숫자가 있는 경우 두 수 더하기 함수를 재호출하여 올림이 없을 때 까지 반복
*/

std::string bigAdd (std::string a, std::string b){
    int biglengh = 0; 
    biglengh = compareLength(a,b);
    
    std::string initA = initBigNum(biglengh, a);
    std::string initB = initBigNum(biglengh, b);

    std::string resultStr = bigTwoAdd(initA, initB);
    resultStr = removeLeadingZero(resultStr);

    return resultStr;
}

std::string bigTwoAdd(std::string a, std::string b){
    if(!isBigRegroup(b)) {
        return a;
    }
    int numberLength = a.length();
    std::string regroup = initBigNum(numberLength);
    std::string result = initBigNum(numberLength);

    int tmpNum = 0;
    for (int i = 0; i < numberLength ; i++){
        tmpNum = charToInt(a[numberLength -i -1]) + charToInt(b[numberLength -i -1]);
        result[numberLength-i-1] = (tmpNum%10) +'0';

        if (tmpNum / 10 >= 1.0) {
            regroup[numberLength -i -2] = '1';
        }
    }
    result = bigTwoAdd(result, regroup);

    return result;
}