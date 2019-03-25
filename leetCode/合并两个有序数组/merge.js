/**
 * @param {number[]} nums1
 * @param {number} m
 * @param {number[]} nums2
 * @param {number} n
 * @return {void} Do not return anything, modify nums1 in-place instead.
 */
var merge = function(nums1, m, nums2, n) {
    nums1.splice(m);
    nums2.splice(n);
    let result = nums1.concat(nums2).sort((a,b)=>a-b);
    nums1.length = nums1.length + nums2.length;
    for(i = 0; i < nums1.length; i++){
        nums1[i] = result[i];
    }
};