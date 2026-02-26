let n = 5; 
let string = "";

for(let i = 1; i <= n; i++) { 
  for(let j = 1; j <= i; j++) { 
    string += j;
  }
  
  string += "\n";
}

console.log(string);