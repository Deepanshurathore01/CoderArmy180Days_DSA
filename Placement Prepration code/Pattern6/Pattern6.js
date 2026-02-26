let n = 5; 
let string = "";

for(let i = n; i >=1; i--) { 
  for(let j = 1; j <= i; j++) { 
    string += i;
  }
  
  string += "\n";
}

console.log(string);