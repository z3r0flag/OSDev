#define VIDEO_ADDRESS 0xb8000
#define ROWS 25
#define COLS 80
#define STD_COLOR 0x1f	
#define ERR_COLOR 0xf4	// red on white

#define REG_SCREEN_CTRL 0x3d4
#define REG_SCREEN_DATA 0x3d5

void clear();
void print(char* str);
void print_dec(int num);
void print_hex(int num);
void print_newline();

void print_char(char ch);

