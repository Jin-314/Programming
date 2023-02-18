void printArray(int *array, int num){
    for(uint8_t i = 0; i < num; i++){
        Serial.print(array[i]);
        Serial.print(",");
    }
    Serial.print("\n");
}
void setup(){
    Serial.begin(9600);
    
    int zahyo[8][8] = 
        {{0,0,0,1,0,0,0,0},{0,0,1,0,1,0,0,0},
        {0,1,0,0,0,1,0,0},{1,0,0,0,0,0,1,0},
        {0,1,0,0,0,1,0,0},{0,0,1,0,1,0,0,0},
        {0,0,0,1,0,0,0,0},{0,0,0,0,0,0,0,0}};
    
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            if(zahyo[i][j] != 0){
                Serial.print("*");
            }else{
                Serial.print(" ");
            }
        }
        Serial.print("\n");
    }
}
void loop(){
 
}