

//though  process first check the right rotation 
// if all test case fails then 

// do second check for the left rotation

// at first thought after writing and dry and run no need to do 
//  left rotation its is done implicitly 

// code time compleixty O(n*(n+n))  i.e n^2 answer 
// for the optimization of the code i have to implement the KMP algorithm 

function rightRotation(s){

        let array=s.split("");
        let lastChar=array[array.length-1];
        for(let i=array.length-1;i>0;i--){
            array[i]=array[i-1];
    
        }
        array[0]=lastChar;
        return array.join("");
}
 function  areRotations(s1, s2) {
       
        let lengthString=s1.length;
        let temp=s1;
            for(let i=0;i<lengthString;i++){
            
                temp=rightRotation(temp);
        
                let j=0;
                for(j;j<s1.length;j++){
                    if(temp[j]!==s2[j])
                        break;
                }
                if(j===lengthString)
                    return true;
        
            }
            return false ;
    
    }

let s1="abcd";
let s2="cdab"
const answer=areRotations(s1,s2);
console.log(answer)