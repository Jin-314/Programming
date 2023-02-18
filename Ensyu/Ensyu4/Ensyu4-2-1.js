let max = 5, min = 1;
let rand1 = Math.floor(Math.random() * (max - min) + min);
let rand2;
do{
    rand2 = Math.floor(Math.random() * (max - min) + min);
}while(rand2 != rand1);

document.writeln(`${rand1}=${rand2}`);
