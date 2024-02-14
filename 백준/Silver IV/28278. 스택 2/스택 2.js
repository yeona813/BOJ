const [n, ...arr] = require("fs")
  .readFileSync("/dev/stdin")
  .toString()
  .trim()
  .split("\n");

const stack = [];
const result = [];

for (let i = 0; i < n; i++) {
  let numbers = arr[i];
  let [cmd, value] = numbers.split(" ");

  switch (cmd) {
    case "1":
      stack.push(Number(value));
      break;
    case "2":
      if (stack.length > 0) {
        result.push(stack.pop());
      } else {
        result.push(-1);
      }
      break;
    case "3":
      result.push(stack.length);
      break;
    case "4":
      if (stack.length > 0) {
        result.push(0);
      } else {
        result.push(1);
      }
      break;
    case "5":
      if (stack.length > 0) {
        result.push(stack[stack.length - 1]);
      } else {
        result.push(-1);
      }
      break;
    default:
      break;
  }
}

console.log(result.join("\n"));