#include <lpc17xx.h>

#define LCD_LPC1768       /* Char LCD definition */
#define LCD_PORT_2
#define LCD_RS     0
#define LCD_RW     1
#define LCD_E      2
#define LCD_DB4    4
#define LCD_DB5    5
#define LCD_DB6    6
#define LCD_DB7    7

#include "lcd.h"


char ch[]={'*','C','H','A','R',' ','L','C','D',' ','T','e','s','t'};

delay(int Del){
	long int i;
	for (i=0;i<Del*100000;i++);
}


main(){
	int j;
	lcd_init();
	lcd_clear();
	
	while (1) {
		lcd_gotoxy(0,2);
		lcd_putsf("Electrolab.ir");
		lcd_gotoxy(2,2);
		
		for(j=0;j<14;j++){
			lcd_putchar(ch[j]);
			delay(35);
		}
		delay(200);
		
		for(j=0;j<16;j++){
		lcd_gotoxy(1,j+1);
		lcd_putchar(' ');	
		lcd_gotoxy(2,j+1);	
		lcd_putchar(' ');
		delay(25);	
		}
	}
}

