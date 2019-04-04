var twoSum = function(nums, target) {
    for (let i = 0, length = nums.length; i < length; i++) {
                let temp = target - nums[i];
                if ( (nums.indexOf(temp) >= 0) && (i !== (nums.indexOf(temp))) ) {
                    return [nums.indexOf(temp),i];
                };
            }
};

var twoSum2 = function(numbers, target) {
    for(let i = 0, length = numbers.length; i < length;i++){
            if(i < numbers.lastIndexOf(target-numbers[i])){
                return [i+1,numbers.lastIndexOf(target-numbers[i])+1];
            }
        }
};