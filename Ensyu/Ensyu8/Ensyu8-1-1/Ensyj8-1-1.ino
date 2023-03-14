void setup(){
    Serial.begin(9600);
    int x = 2;
    int *p = &x;
    char str[50] = "";
    sprintf(str, "変数xのアドレス値：%p", p);
    Serial.println(str);
}
void loop(){
}