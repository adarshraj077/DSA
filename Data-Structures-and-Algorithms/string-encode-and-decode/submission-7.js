class Solution {
    /**
     * @param {string[]} strs
     * @returns {string}
     */
    encode(strs) {
        let join="";
        for(let i=0;i<strs.length;i++){
          join+=strs[i]+" /";
}
       return join;
    }

    /**
     * @param {string} str
     * @returns {string[]}
     */
    decode(str) {
        return str.split(" /").slice(0,-1)
    }
}
