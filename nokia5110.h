#ifndef _nokia_5110_
#define _nokia_5110_

//(https://github.com/LittleBuster/avr-nokia5110.git)
//library from Sergey Denisov
//LittleBuster

#define PORT_LCD PORTD
#define DDR_LCD DDRD

/*
 * LCD's pins
 */
#define LCD_RST PD1  //(PORTB | 0x01)//RST
#define LCD_SCE PD2  //(PORTB | 0x02) //SCE
#define LCD_DC PD3  //(PORTB | 0x04)
#define LCD_DIN PD4  //(PORTB | 0x08)
#define LCD_CLK PD5  //(PORTB | 0x10)

#define LCD_CONTRAST 0x40

/*
 * Must be called once before any other function, initializes display
 */
void nokia_lcd_init(void);

/*
 * Clear screen
 */
void nokia_lcd_clear(void);

/**
 * Power of display
 * @lcd: lcd nokia struct
 * @on: 1 - on; 0 - off;
 */
void nokia_lcd_power(uint8_t on);

/**
 * Set single pixel
 * @x: horizontal pozition
 * @y: vertical position
 * @value: show/hide pixel
 */
void nokia_lcd_set_pixel(uint8_t x, uint8_t y, uint8_t value);

/**
 * Draw single char with 1-6 scale
 * @code: char code
 * @scale: size of char
 */
void nokia_lcd_write_char(char code, uint8_t scale);

/**
 * Draw string. Example: writeString("abc",3);
 * @str: sending string
 * @scale: size of text
 */
void nokia_lcd_write_string(const char *str, uint8_t scale);

/**
 * Set cursor position
 * @x: horizontal position
 * @y: vertical position
 */
void nokia_lcd_set_cursor(uint8_t x, uint8_t y);

/*
 * Render screen to display
 */
void nokia_lcd_render(void);
//have to put this at the end of the code


static struct {
    /* screen byte massive */
    uint8_t screen[504];

    /* cursor position */
    uint8_t cursor_x;
    uint8_t cursor_y;

} nokia_lcd = {
    .cursor_x = 0,
    .cursor_y = 0
};



#endif