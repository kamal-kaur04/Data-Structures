
 
 # i n c l u d e < s t d l i b . h > 
 
 # i n c l u d e < i o s t r e a m > 
 
 u s i n g   n a m e s p a c e   s t d ; 
 
 
 
 c l a s s   N o d e   { 
 
 p u b l i c : 
 
 	 v o i d *   d a t a ; 
 
 	 N o d e *   n e x t ; 
 
 } ; 
 
 
 
 c l a s s   S t a c k   { 
 
 p u b l i c : 
 
 	 N o d e   *   t o p ; 
 
 	 i n t   s t a c k C o u n t ; 
 
 
 
 	 S t a c k ( )   { 
 
 	 	 N o d e   * t e m p ; 
 
 	 	 t e m p   =   ( N o d e * ) m a l l o c ( s i z e o f ( N o d e ) ) ; 
 
 	 	 t e m p - > d a t a   =   N U L L ; 
 
 	 	 t e m p - > n e x t   =   N U L L ; 
 
 	 	 t o p   =   t e m p ; 
 
 	 	 s t a c k C o u n t   =   0 ; 
 
 	 } 
 
 
 
 	 b o o l   p u s h ( v o i d   * d a t a )   { 
 
 	 	 N o d e   * t e m p   =   ( N o d e * ) m a l l o c ( s i z e o f ( N o d e ) ) ; 
 
 	 	 i f ( t e m p ) { 
 
 	 	 	 t e m p - > d a t a   =   d a t a ; 
 
 	 	 	 t e m p - > n e x t   =   t o p ; 
 
 	 	         t o p   =   t e m p ; 
 
 	 	 	 s t a c k C o u n t + + ; 
 
 	 	 	 r e t u r n   t r u e ; 
 
 	 	 } 
 
 	 	 r e t u r n   f a l s e ; 
 
       } 
 
 
 
 	 v o i d *   p o p ( )   { 
 
 	 	 i f   ( s t a c k C o u n t > 0 )   { 
 
 	 	 	 v o i d   * d a t a   =   t o p - > d a t a ; 
 
 	 	 	 N o d e *   t e m p   =   t o p ; 
 
 	 	 	 t o p   =   t o p - > n e x t ; 
 
 	 	 	 f r e e ( t e m p ) ; 
 
 	 	 	 s t a c k C o u n t - - ; 
 
 	 	 	 r e t u r n   d a t a ; 
 
 	 	 } 
 
 	 	 r e t u r n   N U L L ; 
 
 	 } 
 
 
 
 	 v o i d *   s t a c k T o p ( )   { 
 
 	 	 r e t u r n   t o p - > d a t a ; 
 
 	 } 
 
 
 
 } ; 
 
 
 
 i n t   m a i n ( )   { 
 
 	 S t a c k   * s t k   =   n e w   S t a c k ( ) ; 
 
 	 
 
 	 i n t *   d 1 ; 
 
 	 d 1   =   n e w   i n t ( 3 4 ) ; 
 
 	 s t k - > p u s h ( d 1 ) ; 
 
 	 i n t   * d 2 ; 
 
 	 d 2   = n e w   i n t ( 7 2 ) ; 
 
 	 s t k - > p u s h ( d 2 ) ; 
 
     
 
 	 w h i l e   ( s t k - > t o p - > n e x t   ! =   N U L L )   { 
 
 	 	 i n t   * p D a t a   =   ( i n t * ) s t k - > p o p ( ) ; 
 
 	 	 c o u t   < <   * p D a t a < < e n d l ; 
 
 	 } 
 
 
 
 
 
 	 i n t   a ; 
 
 	 c i n   > >   a ; 
 
 	 r e t u r n   0 ; 
 
 } 
