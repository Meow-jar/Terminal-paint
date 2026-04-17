#include <iostream>
#include <cmath>
int main()
{
    //широта и высота 
    const int width = 120;
    const int height = 30;

    //размер символов в пикселях 
    const float pixelasets = 11.0f / 24.0f;
    
    //переменная для хранения символов - пикселей
    char* win = new char[width * height + 1];
    win[width * height] = '\0';
    
        for (int i = 0; i < width; i++)
        {
            for(int j = 0; j < height; j++)
            {  
                
                float x = (float)i / width * 2.0f - 1.0f;
                float y = (float)j / height * 2.0f - 1.0f;
                //выравнивание к соотнашению 1 к 1
                float aspect = (float)width / height;
                x *= aspect * pixelasets;
                //прямоугольник
                char pixel = ' ';
                if(x * x <= 0.5) pixel = '#';            
                win[i + j * width] = pixel;    
                //круг
                /*
                if(x * x + y * y < 0.5) pixel = '@';
                win[i + j * width] = pixel;
                */
            }
        }

    printf(win);
    getchar();
    system("pause>nul");
    return 0;
}