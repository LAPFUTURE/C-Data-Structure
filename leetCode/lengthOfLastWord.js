var lengthOfLastWord = function(s) {
    let strArray = s.split(' ');
    let tage = strArray.length-1;
    let success = false;
    while(true){
        if(strArray[tage] === ''){
            tage--;
            if(tage < 0){
                success = 0;
                break;
            }
        }else{
            success = tage;
            break;
        };
    }
    if(success === false){
        return 0;
    }else if(success === 0){
        return strArray[0].length;
    }else{
        return strArray[success].length;
    }
};
console.log(lengthOfLastWord('a'));