let n = 5; 
let string = "";
let start =1;

for(let i = 0; i < n; i++) { 

   if(i%2 ==0 ) start =1;
   else start=0;

  for(let j = 0; j <= i; j++) { 
    string += start;
    start = 1 - start;
  }
  
  string += "\n";
}

console.log(string);