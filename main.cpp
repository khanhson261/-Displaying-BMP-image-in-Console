#include "stdafx.h"

int main()
{
	char file_name[] = "test.bmp";
	BMP a;
	PixelArray data;

	FILE *p = fopen("test.bmp", "rb");
	printf("********************************************\n");
	readBMP(file_name, a);
	Get_Inf(a);
	ReadPixelArray(p,a, data);
	printf("********************************************\nPlease check the information of the BMP file.\nThe picture will display on the console in 10 seconds later.\n");
	Sleep(10000);
	draw_BMP_image(a,data);
	Free_Pixel_Array(data);
	fclose(p);
}