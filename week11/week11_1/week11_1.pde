//week11-1 好玩的程式設計 (三角函數/函數)
void setup() {
  size(500, 500);
}
float a=0;//角度a
void draw() {
  background(#FFFFF2);
  rectMode(CENTER);
  for (int i=0; i<6; i++) {//6個方形
    float x=250+200*cos(a+PI/3*i), y=250+100*sin(a+PI/3*i);
    rect(x, y, 80, 100);//6個方形，位置會隨著角度而不同
  }
  a+=0.03;//轉動速度
}
