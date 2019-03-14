var reverse = function(x) {
    if(x === 0 || x=== -0){return x;}
    let tag = 1;
    if(x < 0){tag = 0;}
    let strArray = ('' + x).split('');
    strArray = strArray.reverse();
    x = parseInt(strArray.join(''),10);
    if(tag === 0){
       x = -x;
       }
    if(x < -2147483648 || x > 2147483647){
       return 0;
       }
    return x;
};