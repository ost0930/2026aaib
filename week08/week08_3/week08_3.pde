//week08-3 會飛的氣球
//修改至week08-2 會跟著 mouse 移動的氣球
void setup(){
  size(500,500);
  img = loadImage("balloon.png");//讀入圖片
}
PImage img;//圖片宣告
float x,y;//變數宣告
float s = 0.1;//氣球大小
void draw(){
  background(255);
  if(mousePressed){
    s*=1.1;
    image(img, mouseX-(96*s)/2,mouseY-(132*s)/2 , 96*s, 132*s);
  }else{
    image(img,x,y,96*s,132*s);
    y--;
  }
}
void mouseReleased(){
  x = mouseX-(96*s)/2;
  y = mouseY-(132*s);
}
