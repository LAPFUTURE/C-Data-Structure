/**
 * @param {number[]} prices
 * @return {number}
 */
var maxProfit = function(prices) {
    let min = Math.min.apply(Math,prices);
    let max = Math.max.apply(Math,prices);
    if(prices.indexOf(min) < prices.indexOf(max)){
       return max - min;
       }else{
           return 0;
       }
    
};