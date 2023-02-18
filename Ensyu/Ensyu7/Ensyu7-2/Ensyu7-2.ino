int minimum(int a, int b, int c){
    int min = a;
    if(a < b){
        if(a > c){
            min = c;
        }
    }else if(b < c){
        min = b;
    }else{
        min = c;
    }
    return min;
}

void setup(){
    Serial.begin(9600);
    randomSeed(analogRead(0));
    
    int a = random(100);
    int b = random(100);
    int c = random(100);

    Serial.print("a : ");
    Serial.print(a);
    Serial.print(", b : ");
    Serial.print(b);
    Serial.print(", c : ");
    Serial.print(c);
    Serial.print(", min : ");
    Serial.println(minimum(a, b, c));
}
void loop(){
 
}