//Code demo Group 05

//Bao g?m th? vi?n
#include<opencv2/opencv.hpp>
#include<iostream>
//Namespace vô hi?u hóa vi?c s? d?ng cv::function();
using namespace std;
using namespace cv;
int main() {

	//??c hình ?nh
	Mat image = imread("C:\\Users\\84395\\Music\\MEmu Music\\ThaydoisizepictureOpenCV\\ptit.jpg", 1);
	//Hi?n th? hình ?nh ra c?a s?
	imshow("Original Image", image);
	//hãy gi?m t? l? hình ?nh b?ng cách s? d?ng chi?u r?ng và chi?u cao m?i
	int down_width = 400;
	int down_height = 500;
	Mat resized_down;
	//resize down
	resize(image, resized_down, Size(down_width, down_height), INTER_LINEAR);
	//hãy nâng c?p hình ?nh b?ng chi?u r?ng và chi?u cao m?i
	int up_width = 600;
	int up_height = 700;
	Mat resized_up;
	//resize up
	resize(image, resized_up, Size(up_width, up_height), INTER_LINEAR);
	// Hi?n th? hình ?nh và nh?n phím b?t k? ?? ti?p t?c
	imshow("Resized Down by defining height and width", resized_down);
	waitKey();
	imshow("Resized Up image by defining height and width", resized_up);

	waitKey(0);

	//phá h?y t?t c? các c?a s? ???c t?o ra
	destroyAllWindows();
	return 0;
}
