void printArray(int *array, int num){
    for(uint8_t i = 0; i < num; i++){
        Serial.print(array[i]);
        Serial.print(",");
    }
    Serial.print("\n");
}

void setup(){
    Serial.begin(9600);

    int a[5] = {1,2,3,4,5};
    int b[5] = {0};

    Serial.print("a : ");
    printArray(a, 5);
    
    for(int i = 0; i < 5; i++){
        b[i] = a[i];
    }

    Serial.print("b : ");
    printArray(b, 5);
}

void loop(){

}