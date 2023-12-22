#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main() {


    // （1）加载并显示一张图像
    Mat image = imread(".vscode/image.jpg");
    if (image.empty()) {
        cout << "Error: Could not open or find the image." << endl;
        return -1;
    }

    imshow("Image", image);
    while (waitKey(1) != 27) {}  // Press 'Esc' to exit

    // （2）加载一个视频
    VideoCapture video(".vscode/video.mp4");
    if (!video.isOpened()) {
        cout << "Error: Could not open or find the video." << endl;
        return -1;
    }

    while (true) {
        Mat frame;
        video >> frame;
        if (frame.empty()) break;  // Break if the video is over
        imshow("Video", frame);
        if (waitKey(30) == 27) break;  // Press 'Esc' to exit
    }

    return 0;
}