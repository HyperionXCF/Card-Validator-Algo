# Card & IMEI Validator
Implementation of **Luhn's Algorithm** for Credit Card Validation in C++

Luhn's Algorithm is aka mod 10 algorithm is a check digit algorithm and is widely used validate common indentification numbers, designed to protect against accidental errors.
It detects all single-digit errors, as well as almost all transpositions of adjacent digits.
But transposition of the two-digit sequence (09 to 90) can't be detected.   

## Steps 
1. double every second digit from right to left, if double number is 2 digits, split them 
2. add all the single digits from step 1
3. add all odd numbered digits from og number,right to left
4. sum results from step 2 and 3
5. if result %10 == 0 then valid card else not valid.

## Learn More

<a href="https://en.wikipedia.org/wiki/Luhn_algorithm">
  <img src="https://img.shields.io/badge/Wikipedia-Article-000000?logo=wikipedia" style="height:30px; border-radius:8px;">
</a>
