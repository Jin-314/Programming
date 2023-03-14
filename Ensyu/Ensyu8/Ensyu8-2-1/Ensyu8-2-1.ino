void printAdr(int *a, int n){
    for(int i = 0; i < n; i++){
        int *p = a + i;
        char str[50] = "";
        sprintf(str, "%d番目のアドレス値：%p", i, p);
        Serial.println(str);
    }
}
void setup(){
    Serial.begin(9600);
    int x[5] = {1,2,3,4,5};
    printAdr(x,5);
    return 0;
}
void loop(){
}