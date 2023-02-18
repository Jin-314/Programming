let str = 'Hello World';
function test(){
    str = 'changed';
    let str1 = 'Hello Java';
}
test();
document.writeln(str);
document.writeln(str1);