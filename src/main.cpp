#include "ImageProcessor.h"

int main()
{
    ImageProcessor processor;

    std::vector<std::string> imagePaths = {
        "./asset/2.jpg",
        "./asset/3.jpg",
    };

    processor.processImage(imagePaths);

    return 0;
}