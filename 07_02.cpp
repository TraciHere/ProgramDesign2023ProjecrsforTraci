#include <opencv2/opencv.hpp>

    using namespace std;
    using namespace cv;

    int main() {
      
    // 加载图像
    Mat originalImage = imread(".vscode/image.jpg");

    if (originalImage.empty()) {
        cout << "Error: Could not open or find the image." << endl;
        return -1;
    }

    // （1）将图像转换为灰度图
    Mat grayImage;
    cvtColor(originalImage, grayImage, COLOR_BGR2GRAY);

    // （2）将灰度图像二值化
    Mat binaryImage;
    threshold(grayImage, binaryImage, 128, 255, THRESH_BINARY);

    // （3）将灰度图像进行高斯模糊处理
    Mat blurredImage;
    GaussianBlur(grayImage, blurredImage, Size(5, 5), 0);

    // 显示原始图像和处理后的图像
    imshow("Original Image", originalImage);
    imshow("Gray Image", grayImage);
    imshow("Binary Image", binaryImage);
    imshow("Blurred Image", blurredImage);

    waitKey(0);

    return 0;
}