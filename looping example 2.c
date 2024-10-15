# i n c l u d e < s t d i o . h>
i n t main ( v oi d )
{
f l o a t a , b ;
a = 0 ;
b = −1;
w hil e ( a <= 1 0 0 )
{
i f ( ( a > 9 8 . 6 ) && ( b < 9 8 . 6 ) )
{
p r i n t f ( "% 6. 2 f d e g r e e s F = %6.2 f d e g r e e s C\ n " ,
9 8 . 6 , ( 9 8 . 6 − 3 2 . 0 ) ∗ 5 . 0 / 9 . 0 ) ;
}
p r i n t f ( "% 6. 2 f d e g r e e s F = %6.2 f d e g r e e s C\ n " ,
a , ( a − 3 2 . 0 ) ∗ 5 . 0 / 9 . 0 ) ;
b = a ;
a = a + 1 0;
}
r e t u r n 0 ;
21
