int sum(int a, int b, int c){
    return a + b + c;
}

void setup(){
    Serial.begin(9600);
    randomSeed(analogRead(0));
    
    int a = random(100);
    int b = random(100);
    int c = random(100);

    Serial.print(a);
    Serial.print("+");
    Serial.print(b);
    Serial.print("+");
    Serial.print(c);
    Serial.print("=");
    Serial.println(sum(a, b, c));
}
void loop(){
 
}