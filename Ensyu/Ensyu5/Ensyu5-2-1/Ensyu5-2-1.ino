void printArray(int *array, int num){
    for(uint8_t i = 0; i < num; i++){
        Serial.print(array[i]);
        Serial.print(",");
    }
    Serial.print("\n");
}

void setup(){
    Serial.begin(9600);
    
    int x[3][4] = 
        {{1,2,8,2},{23,234,4563,6321},{234,2134,6321,3465}};
    int y[3][4] = 
        {{2354,3425,574,854},{234,572,532,345},{435,623,578,48}};
    int res[3][4] = {0};

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            res[i][j] = x[i][j] + y[i][j];
        }
    }

    Serial.print("result : \n");
    for(int i = 0; i < 3; i++){
        Serial.print(i+1);
        Serial.print(" : ");
        printArray(res[i], 4);
    }
}

void loop(){
 
}