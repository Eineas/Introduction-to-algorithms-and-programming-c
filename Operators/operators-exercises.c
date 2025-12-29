#include <stdio.h>

int main(){
  
  //  Aritmetik Operatörler   */

   // int a = 25, b = 6;

  //  printf("%d + %d = %d\n",a , b , a + b);
  //  printf("%d - %d = %d\n",a , b , a - b);
  //  printf("%d * %d = %d\n",a , b , a * b);
  //  printf("%d / %d = %d\n",a , b , a / b);
  //  printf("a mod b= %d\n", a % b);
  //  printf("a++ : %d\n", a++); // a++ arttırıp değeri sonraki adımda gösterir ancak ++a arttırıp heme değeri kaydeder */
  //  printf("a = %d\n", a);

  //  Atama Operatörleri   */

  //  printf("a+=3: %d\n", a+=3); //a = a + 3;
  //  printf("a-=3: %d\n", a-=3); //a = a - 3;
  //  printf("a*=3: %d\n", a*=3); //a = a * 3;
  //  printf("a/=3: %d\n", a/=3); //a = a / 3;
  //  printf("a mod 5: %d\n", a%=5); // a = a % 5; 

  //  printf("x &= 3: %d\n", a&=3); // binary değerleri arasında mantık ilişkisi (ve) */
  //  printf("x |= 3: %d\n", a|=3); // binary değerleri arasında mantık ilişkisi (veya) */
  //  printf("x ^= 3: %d\n", a^=3); // binary değerleri arasında mantık ilişkisi (ya da) */
  //  printf("x>>2: %d", a>>2); // binary değeri sağa doğru kaydırılır en sağdaki sayılar kaybolur */
  //  printf("x<<2: %d", a<<2); // binary değeri  sola doğru kaydırılır en sağa sıfırlar eklenir */ 
  
  //      Sizeof Operatörü     */

 //
 //  int x;
 //  double y;
 //  float z;
 //  char t;

 //   printf("%lu\n", sizeof(x)); //unsigned long
 //   printf("%lu\n", sizeof(y));
 //   printf("%lu\n", sizeof(z));
 //   printf("%lu\n", sizeof(t));

 // Example */

 // float x = 3.57676;

 // printf("%.lf\n",x);//Sayının yuvarlanması
 // printf("%.1lf\n",x);// virgülden sonra bir basamak
 // printf("%.2lf\n",x);// virgülden sonra iki basamak

 // Example 2 */

  //float x = (float) 1 / 2 ;
  //printf("%.2lf",x);

  // if örneği */


  // int a , b;
  // printf("önce a sayısını sonra b sayısını giriniz\n");
  // scanf("%d %d",&a ,&b);
  // if(a<b) {
  //  printf("a sayısı b sayısından küçüktür");
  // }
  // else if(a>b){
  //  printf("a sayısı b sayısından büyüktür");
  // }
  // else{
  //  printf("iki sayı birbirine eşittir");
  //}
  

  //Sayı tek mi çift mi örneği*/

  int a;
  printf("lütfen bir sayi giriniz\n");
  scanf("%d",&a);
  if(( a % 2 ) == 0) {
    printf("sayi çifttir");
  }
  else if(( a % 2 ) == 1){
    printf("sayi tektir");
  }

  return 0;
}
