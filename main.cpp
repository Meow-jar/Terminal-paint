#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    //широта и высота 
    int width = 30;
    int height = 120;
    //переменная для хранения символов - пикселей
    char win [width][height];
    
        for (int i = 0; i < width; i++)
        {
            for(int j = 0; j < (height - 1)/2; j++)
            {  
                char pixel = '@';
                win[i][j] = pixel;
                //cout<<win[i][j]<<" ";
                //нахождение строки
                
                if (i == 29)
                {
                    cout<<win[i][j]<<" ";
                }
                else
                {
                    cout<<" ";
                }
                //нахождение столбца
                /*
                if (j == 4)
                {
                    cout<<win[i][j]<<" ";
                }
                else
                {
                    cout<<" ";
                }
                */
                
            } 
            cout<<endl;
        }
    system("pause>nul");
    return 0;
}