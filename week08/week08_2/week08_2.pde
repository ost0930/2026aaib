//week08-2 會跟著 mouse 移動的氣球
void setup(){
  size(500,500);
  img = loadImage("balloon.png");//讀入圖片
}
PImage img;//圖片宣告
int x,y;//變數宣告
void draw(){
  background(255);
  x = mouseX-96/2;
  y = mouseY-132;
  image(img,x,y,96,132);
}
