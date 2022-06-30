const fs = require("fs");

const numbers = fs.readFileSync("./data/data.txt", "utf-8").split(" ");
const arr = numbers.map(Number);

console.table(arr);

let iterator = 0;

function max(arg1, arg2) {
  return arg1 > arg2 ? arg1 : arg2;
}

function maxVal(array, init, end) {
  iterator++;
  if (end - init < 2) {
    return max(array[init], array[end]);
  }

  const middle = Math.floor((init + end) / 2);
  const firstValue = maxVal(array, init, middle);
  const secondValue = maxVal(array, middle + 1, end);
  //console.log(firstValue, secondValue);
  return max(firstValue, secondValue);
}
console.time();
console.log(`Maior valor no array: `, maxVal(arr, 0, arr.length - 1));
console.timeEnd();
