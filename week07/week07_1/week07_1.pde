//week07-1 好玩的程式設計 黑白棋
size(600, 600);
background(245, 216, 142);
for (int i=0; i<10; i++) {//左手i(跟y有關)
  for (int j=0; j<10; j++) {//右手j(跟x有關)
    int x=10+j*60, y=10+i*60;
    fill(245, 216, 142);
    strokeWeight(2);//線的粗細
    rect(x, y, 60, 60);
  }
}
