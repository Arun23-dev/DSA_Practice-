

// appraoch 1 with tc ans sc O(n) so I have to optimize this code ok lets do it 
function reverseString(s){
    
    const arr=s.split(".")
    console.log(arr)
    let string1="";
    for(let  i=arr.length-1;i>=0;i--){
        if(arr[i]!=="")
        {
                string1+=arr[i];
                string1+=".";
        }

    }
    
    return string1.slice(0,string1.length-1 );
    
}
// let answer=reverseString("i.like.this.program.very.much")
// console.log(answer);

function reverseString1(s){
    console.log(s[-1]);
    console.log(s);
    let ansString="";
    // for(let i=0;i<s.length;i++){
    //     if(s[i]!==".")
    //     {
    //         ansString+=s[i];
    //     }
    //     else{
    //         if(ansString[ansString.length-1]==="."|| ansString[ansString.length-1]===undefined){
    //             continue;
    //         }
    //         else{
    //             ansString+=s[i];
    //         }
    //     }
    // }
    // ansString= ansString.slice(0,ansString.length-1);

    // let do form backward
   
  
}
let answer=reverseString1("..i.like.this.program.very.much..")
console.log(answer);