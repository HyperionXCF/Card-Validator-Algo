#include <bits/stdc++.h>
using namespace std;

int getDigit(const int digit){
    // to split 18 we need to extract last digit, add it to first to return overall sum already
    return (digit%10 + (digit/10 % 10));
    // this will return 1+8 = 9 
}

int even(const std::string cardNumber){
    // temporary var to store sum
    int sum = 0;
    // iterating from right to left starting with secondlast index to to 0th with 2 steps at once 
    for(int i=cardNumber.size() - 2 ; i>=0 ; i-=2){
        sum += getDigit((cardNumber[i] - '0')*2);
    }
    return sum;
}

int odd(const std::string cardNumber){
    int sum = 0;
    // iterating from right to left starting with last index to the 0th with 2 steps at once 
    for(int i=cardNumber.size() -1 ; i>=0; i-=2){
        sum += getDigit(cardNumber[i] - '0');
    }
    
    return sum;
}


int main() {
    // credit card validator 
    // using luhn's algorithm
    
    // steps 
    // 1. double every second digit from right to left, if double number is 2 digits, split them 
    // 2. add all the single digits from step 1
    // 3. add all odd numbered digits from og number,right to left
    // 4. sum results from step 2 and 3
    // 5. if result %10 == 0 then valid card else not valid.
    
    // implementation
    
    // fn to find sum of even digits
    // fn to find sum of odd digits
    // fn to split the double digits numbers to single digit 
    
    std::string cardNumber;
    int result = 0;
    
    std::cout << "enter credit card number : ";
    std::cin >> cardNumber;
    // for debugging
    // std::cout << even(cardNumber) << " " << odd(cardNumber) << endl;
    result = even(cardNumber) + odd(cardNumber);
    if(result % 10 == 0){
        cout << cardNumber << " is valid" << endl;
    }else{
        cout << cardNumber << " is not valid" << endl;
    }
    
    return 0;
}
