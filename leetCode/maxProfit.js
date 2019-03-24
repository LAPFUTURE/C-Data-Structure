/**
 * @param {number[]} prices
 * @return {number}
 */
var maxProfit = function(prices) {
    if(prices.length === 0 || prices.length === 1){
       return 0;
    }
    let used = [];
    used[0] = prices[0];
    used[1] = prices[1];
    let max = used[1] - used[0];
    let min;
    for(let i = 2, length = prices.length; i < length; i++){
        min = Math.min.apply(Math,used);
        if((prices[i] - min) > max){
            max = prices[i] - min;
        }
        used.push(prices[i]);
    }
    if(max < 0){
       return 0;
    }
    return max;
};