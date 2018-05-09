#include<reg51.h>
#include "lcd.h"
//rows
sbit r1 = P2^0;
sbit r2 = P2^1;
sbit r3 = P2^2;
sbit r4 = P2^3;
// columns
sbit c1 = P3^0;
sbit c2 = P3^1;
sbit c3 = P3^2;
sbit c4 = P3^3;
sbit c5 = P3^4;
sbit c6 = P3^5;
sbit c7 = P3^6;
sbit c8 = P3^7;

sbit led_green = P2^6;
sbit led_red = P2^7;

void scan();
void delay(unsigned char);
unsigned char password[] = "CAT"; // change password here
unsigned char user[32]; // max input length 16 characters
int m = -1;
unsigned char l = 0, password_length = 0, temp = 0, bool = 0;

void main()
{
    led_green  = led_red = 0x00;
    lcd_init();
    P2 = 0x00; // output declaration
    P3 = 0xff; // input declaration
    lcd_cmd(0x81);
    lcd_string("Enter Password");
    delay(120);
    while(password[l] != '\0')
    {
        password_length++;
        l++;
    }
    lcd_cmd(0x01);
    while(1)
    {
        scan();
    }
}

void scan()
{
    // Row 1 //

    r1 = 0;
    r2 = r3 = r4 = 1;
    if(c1 == 0)
    {
        m++;
        delay(30);
        while(c1 == 0)
        {
            lcd_dat('A');
        }
        user[m] = 'A';
    }
    if(c2 == 0)
    {
        m++;
        delay(30);
        while(c2 == 0)
        {
            lcd_dat('B');
        }
        user[m] = 'B';
    }

    if(c3 == 0)
    {
        m++;
        delay(30);
        while(c3 == 0)
        {
            lcd_dat('C');
        }
        user[m] = 'C';
    }
    if(c4 == 0)
    {
        m++;
        delay(30);
        while(c4 == 0)
        {
            lcd_dat('D');
        }
        user[m] = 'D';
    }

    if(c5 == 0)
    {
        m++;
        delay(30);
        while(c5 == 0)
        {
            lcd_dat('E');
        }
        user[m] = 'E';
    }
    if(c6 == 0)
    {
        m++;
        delay(30);
        while(c6 == 0)
        {
            lcd_dat('F');
        }
        user[m] = 'F';
    }

    if(c7 == 0)
    {
        m++;
        delay(30);
        while(c7 == 0)
        {
            lcd_dat('G');
        }
        user[m] = 'G';
    }
    if(c8 == 0)
    {
        m++;
        delay(30);
        while(c8 == 0)
        {
            lcd_dat('H');
        }
        user[m] = 'H';
    }


    // Row 2 //

    r2 = 0;
    r1 = r3 = r4 = 1;
    if(c1 == 0)
    {
        m++;
        delay(30);
        while(c1 == 0)
        {
            lcd_dat('I');
        }
        user[m] = 'I';
    }
    if(c2 == 0)
    {
        m++;
        delay(30);
        while(c2 == 0)
        {
            lcd_dat('J');
        }
        user[m] = 'J';
    }

    if(c3 == 0)
    {
        m++;
        delay(30);
        while(c3 == 0)
        {
            lcd_dat('K');
        }
        user[m] = 'K';
    }
    if(c4 == 0)
    {
        m++;
        delay(30);
        while(c4 == 0)
        {
            lcd_dat('L');
        }
        user[m] = 'L';
    }

    if(c5 == 0)
    {
        m++;
        delay(30);
        while(c5 == 0)
        {
            lcd_dat('M');
        }
        user[m] = 'M';
    }
    if(c6 == 0)
    {
        m++;
        delay(30);
        while(c6 == 0)
        {
            lcd_dat('N');
        }
        user[m] = 'N';
    }

    if(c7 == 0)
    {
        m++;
        delay(30);
        while(c7 == 0)
        {
            lcd_dat('O');
        }
        user[m] = 'O';
    }
    if(c8 == 0)
    {
        m++;
        delay(30);
        while(c8 == 0)
        {
            lcd_dat('P');
        }
        user[m] = 'P';
    }

    // Row 3 //
    r3 = 0;
    r2 = r1 = r4 = 1;
    if(c1 == 0)
    {
        m++;
        delay(30);
        while(c1 == 0)
        {
            lcd_dat('Q');
        }
        user[m] = 'Q';
    }
    if(c2 == 0)
    {
        m++;
        delay(30);
        while(c2 == 0)
        {
            lcd_dat('R');
        }
        user[m] = 'R';
    }

    if(c3 == 0)
    {
        m++;
        delay(30);
        while(c3 == 0)
        {
            lcd_dat('S');
        }
        user[m] = 'S';
    }
    if(c4 == 0)
    {
        m++;
        delay(30);
        while(c4 == 0)
        {
            lcd_dat('T');
        }
        user[m] = 'T';
    }

    if(c5 == 0)
    {
        m++;
        delay(30);
        while(c5 == 0)
        {
            lcd_dat('U');
        }
        user[m] = 'U';
    }
    if(c6 == 0)
    {
        m++;
        delay(30);
        while(c6 == 0)
        {
            lcd_dat('V');
        }
        user[m] = 'V';
    }

    if(c7 == 0)
    {
        m++;
        delay(30);
        while(c7 == 0)
        {
            lcd_dat('W');
        }
        user[m] = 'W';
    }
    if(c8 == 0)
    {
        m++;
        delay(30);
        while(c8 == 0)
        {
            lcd_dat('X');
        }
        user[m] = 'X';
    }

    // Row 4

    r4 = 0;
    r2 = r3 = r1 = 1;
    if(c1 == 0)
    {
        m++;
        delay(30);
        while(c1 == 0)
        {
            lcd_dat('Y');
        }
        user[m] = 'Y';
    }
    if(c2 == 0)
    {
        m++;
        delay(30);
        while(c2 == 0)
        {
            lcd_dat('Z');
        }
        user[m] = 'Z';
    }


    // Space
    if(c3 == 0)
    {
        m++;
        delay(30);
        while(c3 == 0)
        {
            lcd_string(" ");
        }
        user[m] = ' ';
    }


    // Toggle_line
    if(c4 == 0)
    {
        delay(30);
        while(c4 == 0)
        {
            bool = ~bool;
            if(bool == 0)
            {
                lcd_cmd(0x80);
            }
            else
            {
                lcd_cmd(0xc0);
            }
        }
    }

    // CursorLeft
    if(c5 == 0)
    {
        delay(30);
        while(c5 == 0)
        {
            lcd_cmd(0x10);
        }
        m = m - 1;
    }

    // CursorRight
    if(c6 == 0)
    {
        delay(30);
        while(c6 == 0)
        {
            lcd_cmd(0x14);
        }
        m = m + 1;
    }

    // clearScreen
    if(c7 == 0)
    {
        for(l = 0; l < 32; l++)
        {
            user[l] = '\0';
        }
        delay(30);
        while(c7 == 0)
        {
            lcd_cmd(0x01);
            m = -1;
            temp = 0;
            led_red = led_green = 0;
        }
    }

    // Submit
    if(c8 == 0)
    {
        delay(30);
        while(c8 == 0)
        {
            for(l = 0; l < password_length; l++)
            {
                if(user[l] == password[l])
                {
                    temp++;
                }
            }
            if(temp == password_length)
            {
                led_green = 1;
                led_red = 0;
                lcd_cmd(0x01);
                lcd_cmd(0x81);
                lcd_string("ACCESS GRANTED");
            }
            else
            {
                led_red = 1;
                led_green = 0;
                lcd_cmd(0x01);
                lcd_cmd(0x81);
                lcd_string("ACCESS DENIED");
            }
        }
    }

}
void delay(unsigned char t)
{
    unsigned int i, j;
    for(i = 0; i < t; i++)
        for(j = 0; j < 700; j++);
}
