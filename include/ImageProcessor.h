#ifndef IMAGEPROCESSOR_H
#define IMAGEPROCESSOR_H

#include <string>
#include <vector>
#include <thread>
#include <mutex>

class ImageProcessor
{
public:
    ImageProcessor();

    void processImage(const std::vector<std::string> &imagePath);

private:
    void processImage(const std::string &imagePath);

    std::mutex mtx;
};

#endif