const [n, ...arr] = require('fs').readFileSync('/dev/stdin').toString().trim().split(/\s/).map(Number);

let answer = [];

let max = arr[0];
let min = arr[0];

for (let i = 0; i < n; i++) {
  if(min > arr[i]){
    min = arr[i];
  }
  else if(max < arr[i]){
    max = arr[i];
  }
}

answer.push(min);
answer.push(max);

console.log(answer.join(' '));