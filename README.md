# Card-Validator
Implementation of **Luhn's Algorithm** for Credit Card Validation in C++


## steps 
1. double every second digit from right to left, if double number is 2 digits, split them 
2. add all the single digits from step 1
3. add all odd numbered digits from og number,right to left
4. sum results from step 2 and 3
5. if result %10 == 0 then valid card else not valid.
