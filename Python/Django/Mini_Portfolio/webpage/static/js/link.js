let MixString1 = ["8bb0d", "f341b6", "789774", "60a28", "846541e"];

let MixString= ["dgv9CiM","pV4OOR","9KRQ","qo9S","GKrJ9","1omZ","M_phg"]
let secretOne = "19";
let secretTwo = "rRt1s08";
let secret = secretTwo.split("").reverse().join("");
stepOne = MixString.join("").split("").reverse().join("");
console.log(stepOne);
stepTwo = stepOne.split(secretOne);
// console.log(stepTwo);
stepThree = stepTwo [0] + stepTwo [1];
key = stepThree + secret;
console.log(key)
