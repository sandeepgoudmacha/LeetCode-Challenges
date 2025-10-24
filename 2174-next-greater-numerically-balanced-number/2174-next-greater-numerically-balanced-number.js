/**
 * @param {number} n
 * @return {number}
 */
var nextBeautifulNumber = function(n) {
    let count=n+1;
    let arr_num=[];
        while(true)
        {
            arr_num=[...String(count)].map(Number); 
            let number_of_occurance=[];
            for(let i=0;i<arr_num.length;i++) {
                number_of_occurance[arr_num[i]]=(number_of_occurance[arr_num[i]]  || 0 ) +1;
            }
            let balanced=true;
            for(let j=0;j<number_of_occurance.length;j++) {
                    if(typeof number_of_occurance[j]==='number'&&number_of_occurance[j]!=j){
                            
                        balanced=false;
                        break ;        
                    }    
            }
            if(balanced)return count;       
            count++; 
        }
};