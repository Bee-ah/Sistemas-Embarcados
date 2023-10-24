#line 1 "C:/Users/Adm/Desktop/ceub/5 semestre/aula7/MyProject.c"




char uart_rd;


void main() {
 TRISB=0x00;
 PORTB.RB0=0;
 PORTB.RB1=0;
 PORTB.RB2=0;
 UART1_Init(9600);
 Delay_ms(100);

 UART1_Write_Text("Start");
 UART1_Write(10);
 UART1_Write(13);

 while (1) {

 if (UART1_Data_Ready()) {
 uart_rd = UART1_Read();
 UART1_Write(uart_rd);

 }
 switch(uart_rd){
 case 'g':
  RB1_bit  = 0x01;
 Delay_ms(100);
  RB1_bit =0x00;
 break;
 case 'b':
  RB0_bit  = 1;
 Delay_ms(100);
  RB0_bit =0x00;
 break;
 case 'r':
  RB2_bit  =1;
 Delay_ms(100);
  RB2_bit =0x00;
 break;
 }
#line 52 "C:/Users/Adm/Desktop/ceub/5 semestre/aula7/MyProject.c"
}
}
