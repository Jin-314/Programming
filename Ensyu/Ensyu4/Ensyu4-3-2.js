for(let i = 0; i < 8; i++){
    let str = "";
    for(let j = 0; j < 8 - i; j++){
        str += "*";
    }
    document.writeln(str);
}