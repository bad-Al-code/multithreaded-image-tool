#include <iostream>
#include <vector>
#include <thread>
#include "ImageProcessor.h"

ImageProcessor::ImageProcessor()
{
}

void ImageProcessor::processImage(const std::string &imagePath)
{
    std::cout << "Processing image: " << imagePath << std::endl;
}

void ImageProcessor::processImage(const std::vector<std::string> &imagePaths)
{
    std::vector<std::thread> threads;

    for (const auto &path : imagePaths)
    {
        threads.emplace_back([this, path]()
                             {
            std::lock_guard<std::mutex> lock(mtx);
        processImage(path); });
    }

    for (auto &thread : threads)
    {
        thread.join();
    }
}
