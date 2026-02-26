let n = 5; 
let string = "";
let space = 2*(n-1);

for(let i = 1; i <= n; i++) { 

  for(let j = 1; j <= i; j++) { 
    string += i;
  }
  for(let j = 1; j <= space; j++) { 
    string += " ";
  }
  let spaces =" ";
  for(let j = i; j >= 1; j++) { 
    spaces += i;
  }
  
  string += "\n";
  space -=2;
}

console.log(string + spaces +string);