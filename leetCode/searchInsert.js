var searchInsert = function(nums, target) {
    if(nums.indexOf(target) >= 0){
        return nums.indexOf(target);
   }else{
       if(target > nums[nums.length-1]){return nums.length;}
       if(target < nums[0]){return 0;}
       for(let i = 0; i < nums.length-1; i++){
           if(nums[i] < target && target < nums[i+1]){return i+1;}
       }
   }
};