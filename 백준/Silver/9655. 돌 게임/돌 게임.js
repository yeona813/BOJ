const fs = require("fs");
const path = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
let N = Number(fs.readFileSync(path).toString());

if (N % 2 === 0) {
  console.log("CY");
} else {
  console.log("SK");
}
