const path = process.platform === "linux" ? "/dev/stdin" : "input.txt"; 
const input = require("fs").readFileSync(path).toString().trim().split("\n");

const n = Number(input[0]);

let count = 0;
for (let i = 1; i <= n; i++) {
  let stack = [];
  for (let j = 0; j < input[i].length; j++) {
    if (stack.length === 0) {
      stack.push(input[i][j]);
    } else if (!stack.includes(input[i][j])) {
      stack.push(input[i][j]);
    } else if (stack[stack.length - 1] !== input[i][j]) {
      stack.push(input[i][j]);
    } else {
      stack.pop();
    }
  }
  if (stack.length === 0) {
    count++;
  }
}

console.log(count);