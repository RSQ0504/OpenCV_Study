
#include <iostream>
#include <opencv2/opencv.hpp>
using namespace cv;
/**
 * @brief 
 * 
 * @param src 
 * @return Mat 
 */
Mat image2hsv(Mat src);
/**
 * @brief 
 * 
 * @param src 
 * @return Mat 
 */
Mat image2double_3C(Mat src);
/**
 * @brief 
 * 
 * @param src 
 * @param color 
 * @return Mat 
 */
Mat showchannel_3C(Mat src,int color);
/**
 * @brief 
 * 
 * @param src 
 * @return Mat 
 */
Mat getalpha(Mat src);
/**
 * @brief 
 * 
 */
void morphological();
/**
 * @brief 
 * 
 * @param image 
 * @return Mat 
 */
Mat FFT(Mat image);
/**
 * @brief 
 * 
 * @param result 
 * @param scale 
 */
void showFFT(const Mat& result,double scale);