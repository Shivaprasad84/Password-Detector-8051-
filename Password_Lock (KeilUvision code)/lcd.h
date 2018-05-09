#define lcd P1

sbit rs = P2^4;
sbit en = P2^5;

void lcd_init();
void lcd_cmd(unsigned char);
void lcd_dat(unsigned char);
void msdelay(unsigned char);
void lcd_string(unsigned char *);

//lcd initialization

void lcd_init()
{
	lcd_cmd(0x80);
	lcd_cmd(0x38);
	lcd_cmd(0x01);
	lcd_cmd(0x0e);
	lcd_cmd(0x06);
}

// send commands

void lcd_cmd(unsigned char ch)
{
	lcd = ch;
	rs = 0;
	en = 1;
	msdelay(20);
	en = 0;
	
}

// send data

void lcd_dat(unsigned char ch)
{
	lcd = ch;
	rs = 1;
	en = 1;
	msdelay(20);
	en = 0;
}

// delay

void msdelay(unsigned char t)
{
	unsigned int i, j;
	for(i = 0; i < t; i++)
	for(j = 0; j < 1275; j++);
}

// send a string of data

void lcd_string(unsigned char *p)
{
	while(*p != '\0')
	{
		lcd_dat(*p);
		p++;
	}
}