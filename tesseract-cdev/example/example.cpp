#include <iostream>
#include <stdio.h>
#include <opencv2/opencv.hpp>
#include <tesseract/baseapi.h>

using namespace cv;
using namespace tesseract;

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
        printf("No image data.\n");
        return -1;
    }

    // Init API.    
    printf("Initialize Tesseract ORC API.\n");
    TessBaseAPI *api = new TessBaseAPI();
    // Initialize tesseract-ocr with English, without specifying tessdata path.
    if (api->Init(NULL, "eng")) {
        fprintf(stderr, "Could not initialize tesseract.\n");
        exit(1);
    }

    // Interference.
    printf("Recorgnize.\n");
    api->SetImage((uchar*)image.data, image.size().width, image.size().height, image.channels(), image.step1());
    api->Recognize(0);
    
    // Get OCR result
    char *outText;
    outText = api->GetUTF8Text();
    printf("OCR output:\n\n%s", outText);

    // Destroy used object and release memory
    printf("\nRelease API.\n");
    api->End();
    delete api;
    delete [] outText;

    printf("End.\n");
    return 0;
}
