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

    // （1）检测图像边缘
    Mat edges;
    Canny(originalImage, edges, 50, 150);

    // （2）进行膨胀操作
    Mat dilatedImage;
    dilate(edges, dilatedImage, Mat(), Point(-1, -1), 2);

    // （3）进行侵蚀操作
    Mat erodedImage;
    erode(edges, erodedImage, Mat(), Point(-1, -1), 2);

    // （4）改变图像大小，缩放为50%
    Mat resizedImage;
    resize(originalImage, resizedImage, Size(), 0.5, 0.5);

    // 显示原始图像和处理后的图像
    imshow("Original Image", originalImage);
    imshow("Edges", edges);
    imshow("Dilated Image", dilatedImage);
    imshow("Eroded Image", erodedImage);
    imshow("Resized Image", resizedImage);

    waitKey(0);

    return 0;
}