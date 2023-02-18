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

    Serial.print("a : ");
    printArray(a, 5);

    for(int i = 0; i < 2; i++){
        int temp = a[i];
        a[i] = a[4 - i];
        a[4 - i] = temp;
    }

    Serial.print("a : ");
    printArray(a, 5);
}

void loop(){

}