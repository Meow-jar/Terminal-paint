#include <iostream>

//широта и высота 
const int width = 120;
const int height = 30;

//размер символов в пикселях 
const float pixelasets = 11.0f / 24.0f;
    
//функция для вывода круга
float circle(float& x, float& y, int& i, int& j,char* win)
{
    char pixel = ' ';
    if(x * x + y * y < 0.7) pixel = '@';
    win[i + j * width] = pixel; 
    return 0;
}

int main()
{
    //переменная для хранения символов - пикселей
    char* win = new char[width * height + 1];
    win[width * height] = '\0';

    int i = 0, j = 0;
        for (i = 0; i < width; i++)
        {
            for(j = 0; j < height; j++)
            {  
                
                float x = (float)i / width * 2.0f - 1.0f;
                float y = (float)j / height * 2.0f - 1.0f;
                //выравнивание к соотнашению 1 к 1
                float aspect = (float)width / height;
                x *= aspect * pixelasets;

                char pixel = ' ';
                circle(x,y,i,j,win);

                
            }
        }
    
    printf("%s" , win);
    delete [] win;
    std::cin.get();
    return 0;
}