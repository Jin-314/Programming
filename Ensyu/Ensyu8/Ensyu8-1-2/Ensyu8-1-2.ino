void setup(){
    Serial.begin(9600);
    int x = 2;
    Serial.print("xの値");
    Serial.println(x);
    int *p = &x;
    *p *= 5;
    Serial.print("xの値");
    Serial.println(x);
}
void loop(){
}