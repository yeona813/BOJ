const [n, ...arr] = require("fs")
  .readFileSync("/dev/stdin")
  .toString()
  .trim()
  .split("\n")
  .map(Number);

for (let i = 0; i < n; i++) {
  let word = arr[i].toString(2).split("");
  let answer = [];
  word.reverse();
  for (let j = 0; j < word.length; j++) {
    if (word[j] === "1") {
      answer.push(j);
    }
  }
  console.log(answer.join(" "));
}
