var removeDuplicates = function(nums) {
        for(let i = 0; i < nums.length; i++){
                while(true){
                if(nums[i] === nums[i+1]){
                    nums.splice(i,1);
                }else{
                    break;
                }
                }
            }
            return nums.length;
    };
    console.log(removeDuplicates([1,1,2,3,3]));