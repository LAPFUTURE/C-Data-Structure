/**
 * @param {number[]} digits
 * @return {number[]}
 */
var plusOne = function(digits) {
    let len = digits.length;
        for (let i = len-1; i >= 0; i--){
            if(digits[i] == 9){
                digits[i] = 0;
            }else{
                digits[i]++;
                break;
            }
        }
        if(digits[0] === 0){
            digits.length++;
            digits[0] = 1;
            for(let i = 1; i < digits.length; i++){
                digits[i] = 0;
            }
        }
        return digits;
};