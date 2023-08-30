#include <iostream>
#include <stdio.h>
#include <opencv2/opencv.hpp>

using namespace cv;

int main(int argc, char** argv )
{
    if ( argc != 2 )
    {
        printf("usage: DisplayImage.out <Image_Path>\n");
        return -1;
    }

    Mat image;
    image = imread( argv[1], IMREAD_COLOR );
    if ( !image.data )
    {
        printf("No image data \n");
        return -1;
    }

    try
    {
        namedWindow("Display Image", WINDOW_AUTOSIZE );
        imshow("Display Image", image);
        waitKey(0);
    }
    catch(const Exception e)
    {
        std::cerr << e.what() << '\n';
    }

    cvtColor(image, image, COLOR_BGR2GRAY);
    imwrite("output.jpg", image);
    std::cout << "Save output.. output.jpg" << std::endl;

    return 0;
}