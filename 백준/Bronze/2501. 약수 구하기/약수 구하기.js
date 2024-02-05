const input = require('fs').readFileSync('/dev/stdin').toString().trim().split(' ');
let n = input[0];
let k = input[1];
let array = [];

for(let i = 1; i<=n; i++){
  if(n % i === 0){
    array.push(i);
  }
}

if(array.length >= k){
  console.log(array[k-1]);
}
else{
  console.log(0);
}