/**
 * @param {string} s
 * @param {string} t
 * @return {boolean}
 */
var isIsomorphic = function(s, t) {
   if(s.length !== t.length){
            return false;
       }else{
           let map = new Map();
            for(let i = 0; i < s.length; i++){
               if(!map.get(s[i])){
                    map.set(s[i],t[i]);
                }
            }
            let temp = [...map.values()];
            if((new Set(temp)).size != temp.length){
                return false;
            }
           let str = '';
           for(let i = 0; i < s.length; i++){
                str += map.get(s[i]);
           }
           console.log(str);
           return str === t ? true : false;
       }
};