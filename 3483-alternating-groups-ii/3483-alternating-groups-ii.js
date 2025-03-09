/**
 * @param {number[]} colors
 * @param {number} k
 * @return {number}
 */
var numberOfAlternatingGroups = function(colors, k) {
    let count = 0, valid = 1;
    const n = colors.length;
    for (let i = 1; i < n + k - 1; i++) {
        let currIndex = i % n;
        let prevIndex = (i - 1) % n;
        if (colors[currIndex] !== colors[prevIndex]) {
            valid++;
        } else {
            valid = 1; 
        }
        if (valid >= k) count++;
    }
    
    return count;
};