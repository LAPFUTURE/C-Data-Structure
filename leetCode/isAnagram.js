var isAnagram = function (s, t) {
            if((s.length === 0) || (t.length === 0)){
                return true;
            }
            if(s.length !== t.length){
                return false;
            }
            let map1 = {};
            let map2 = {};
            for (let i = 0, length = s.length; i < length; i++) {
                if (map1[s[i]]) {
                    map1[s[i]]++;
                } else {
                    map1[s[i]] = 1;
                }
            }
            for (let i = 0, length = t.length; i < length; i++) {
                if (map2[t[i]]) {
                    map2[t[i]]++;
                } else {
                    map2[t[i]] = 1;
                }
            }
            for(let i = 0, length = s.length; i < length; i++){
                if(map2[s[i]]){
                    if(map1[s[i]] !== map2[s[i]]){
                        return false;
                    }
                }else{
                    return false;
                }
            }
            return JSON.stringify(Object.keys(map1).sort()) === JSON.stringify(Object.keys(map2).sort());
        };