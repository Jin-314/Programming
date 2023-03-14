void inverse(int *a, int n){
    for(int i = 0; i < n / 2; i++){
        int tmp = *(a + i);
        *(a + i) = *(a + n - 1 - i);
        *(a + n - 1 - i) = tmp;
    }
}
void setup(){
    Serial.begin(9600);
    int x[5] = {1,2,3,4,5};
    for(int i = 0; i < 5; i++){
        Serial.println(x[i]);
    }
    inverse(x,5);
    Serial.println("要素を反転");
    for(int i = 0; i < 5; i++){
        Serial.println(x[i]);
    }
    return 0;
}
void loop(){
}