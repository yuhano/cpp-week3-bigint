#include <iostream>
#include <string>
#include <cstring>

int charToInt(char n){
    return n -'0';
}

int compareLength(std::string a, std::string b){
    if(a.length() > b.length()){
        return a.length();
    }
    else {
        return b.length();
    }
}

std::string initBigNum(int length){
    char tmp[length+1];
    for (int i = 0; i < length; i++){
        tmp[i] = '0';
    }
    tmp[length] = 0;
    std::string str(tmp);
    return str;
}

std::string initBigNum(int length, std::string num){
    char result[length+2];
    int numLengh = num.length();
    for (int i = 0; i < length+1; i++){
        if (i >= numLengh){
            result[length-i] = '0'; 
        }
        else{
            result[length-i] = num[num.length()-1-i];
        }
    }
    result[length+1] = 0;
    std::string resultStr (result);
    return resultStr;
}

bool isBigRegroup(std::string num){
    for(int i = 0; i < num.length(); i ++){
        if(num[i] != '0'){ return true; }
    }
    return false;
}

std::string removeLeadingZero(std::string num){
    int tmp = 0;
    for (int i = 0; i < num.length(); i++){
        if(num[i] == '0'){
           tmp += 1; 
        }
        else{
            break;
        }
    }

    if (tmp == num.length() ){
        return num.erase(0, tmp-1);
    }
    else{
        return num.erase(0, tmp);
    }
}