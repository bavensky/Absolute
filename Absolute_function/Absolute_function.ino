int a=0,b=0,sum=0;

void setup()
{
  Serial.begin(9600);
  Serial.println(" Test ABS funtion arduino");
}

void loop()
{ 
  a = 10;          // a มีค่าเท่ากับ 10
  b = 5;           // b มีค่าเท่ากับ 5 
  //sum = b-a;       // เก็บค่าไว้ที่ sum กรณีไม่ใส่ absolute ค่าจะติดลบ
  sum = abs(b-a);  // เก็บค่าไว้ที่ sum กรณีใส่ absolute  ค่าจะไม่ติดลบ
  Serial.print("SUM = ");Serial.println(sum);delay(1000); // แสดงผลออกทาง Serial
}
