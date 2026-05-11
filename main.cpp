#include <iostream>

//широта и высота 
const int Width = 120;
const int Height = 30;

//размер символов в пикселях 
const float PixelAssets = 11.0f / 24.0f;
//функция для вывода квадрата
void square(float& out,float& x, float& y, int& i, int& j,char* win)
{
    char Pixel = '@';
    if(x * x > out) Pixel = ' ';
    if(y * y > out) Pixel = ' ';
    win[i + j * Width] = Pixel; 
}
//функция для вывода круга
void circle(float& out,float& x, float& y, int& i, int& j,char* win)
{
    char Pixel = ' ';
    if(x * x + y * y < out) Pixel = '@';
    win[i + j * Width] = Pixel; 
}

int main()
{
    float out = 0.7;
    //переменная для хранения символов - пикселей
    char* win = new char[Width * Height + 1];
    win[Width * Height] = '\0';

    int i = 0, j = 0;
        for (i = 0; i < Width; i++)
        {
            for(j = 0; j < Height; j++)
            {  
                
                float x = (float)i / Width * 2.0f - 1.0f;
                float y = (float)j / Height * 2.0f - 1.0f;
                //выравнивание к соотнашению 1 к 1
                float Aspect = (float)Width / Height;
                x *= Aspect * PixelAssets;

                //вызов функции
                square(out,x,y,i,j,win);

                
            }
        }
    
    printf("%s" , win);
    delete [] win;
    std::cin.get();
    return 0;
}