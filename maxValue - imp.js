const fs = require("fs");

function array(length) {
  const numbers = fs.readFileSync("./data/data.txt", "utf-8").split(" ");
  const arr = numbers.map(Number);

  while (arr.length < length) {
    const number = Math.floor(Math.random() * length) + 1;
    if (arr.indexOf(number) === -1) arr.push(number);
  }
  console.table(arr)
  return arr;
}

let iterator = 0;

function maxVal(array) {
  let max = array[0];
  for (const number of array) {
    iterator++;
    if (number > max) max = number;
  }
  console.log(max);
  return max;
}
console.time();
maxVal(array());
console.timeEnd();
