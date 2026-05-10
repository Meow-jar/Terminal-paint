#include <iostream>

//широта и высота 
const int Width = 120;
const int Height = 30;

//размер символов в пикселях 
const float PixelAssets = 11.0f / 24.0f;
    
//функция для вывода круга
void circle(float& x, float& y, int& i, int& j,char* win)
{
    char Pixel = ' ';
    if(x * x + y * y < 0.7) Pixel = '@';
    win[i + j * Width] = Pixel; 
}

int main()
{
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

                char Pixel = ' ';
                circle(x,y,i,j,win);

                
            }
        }
    
    printf("%s" , win);
    delete [] win;
    std::cin.get();
    return 0;
}