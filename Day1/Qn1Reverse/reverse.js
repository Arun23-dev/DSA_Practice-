//bruteforce approach 
// 1)first of all create one array and copy the characters 
// from the last of the given string to the first of the created array
// or do simple concatenaion of the characters


function Reverse(s){
    let  lengthString=s.length;
    let ans=Array.from({length:lengthString})
    for(let i=lengthString-1;i>=0;i--)
    {
        ans[lengthString-(i+1)]=s[i];
    }
    return ans.join("");

}
// const answer=Reverse("Geeks")
// console.log(answer);


function Reverse(s){
   let  lengthString=s.length;
   let  ans="";
    for(let i=lengthString-1;i>=0;i--)
    {
        ans+=s[i];
    }
    return ans;

}
// const answer=Reverse("Geeks");
// console.log(answer);

// better optimized  by two pointer first  and last pointer  

function Reverse(s){
    let arr=s.split("")
    let lenghtString=s.length;
    for(let i=0;i<lenghtString/2;i++)
    {
       let temp=arr[i];
        arr[i]=arr[lenghtString-1-i];
        arr[lenghtString-i-1]=temp;
    }
    return arr.join("");
}
// const answer=Reverse("Geeks");
// console.log(answer);