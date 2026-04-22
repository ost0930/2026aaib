//week09-2 好玩的程式設計 (打地鼠冒出來)
void setup() {
  size(300, 300);
}
int[][]a={{0, 0, 0, }, {0, 0, 0}, {0, 0, 0}};//Java陣列
void draw() {
  background(#FFFFF2);
  if (frameCount%60==0) {
    int i = int(random(3)), j=int(random(3));
    a[i][j]=60;//亂數決定i跟j的值，再把a[i][j]生60
  }
  for (int i=0; i<3; i++) {//左手i
    for (int j=0; j<3; j++) {//右手j
      int x=50+j*100, y=50+i*100;
      if (a[i][j]>0) {
        fill(#C61616, a[i][j]*4);
        a[i][j]--;//數值變小，慢慢透明不見
      } else fill(#FFFFF2);
      ellipse(x, y, 90, 90);//地鼠的洞
    }
  }
}
