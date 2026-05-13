//week12-1 好玩的地鼠(有圖)
PImage img;
void setup() {
  size(300, 300);
  img= loadImage("gopher.png");
}
float a=0;
void draw() {
  a+=0.03;
  //float x=100+50*cos(a),y=100+50*sin(a);
  float x=100+0*cos(a),y=100+250*sin(a);
  background(128);
  image(img,x,y,100,100);
  //image(img, 0, 0, 100, 100);//畫出圖片
  //函式呼叫，有5個參數；(圖片,x,y,寬,高)
}
