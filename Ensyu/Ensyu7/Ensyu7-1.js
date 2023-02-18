function sum(a, b, c){
    let result = a + b + c;
    return result;
}

let a = Math.floor(Math.random() * 100);
let b = Math.floor(Math.random() * 100);
let c = Math.floor(Math.random() * 100);

document.writeln(`${a}+${b}+${c}の値は${sum(a,b,c)}です。`); 
