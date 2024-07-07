#include <iostream>
#include "ImageProcessor.h"

ImageProcessor::ImageProcessor()
{
}

void ImageProcessor::processImage(const std::string &imagePath)
{
    std::cout << "Processing image: " << imagePath << std::endl;
}
