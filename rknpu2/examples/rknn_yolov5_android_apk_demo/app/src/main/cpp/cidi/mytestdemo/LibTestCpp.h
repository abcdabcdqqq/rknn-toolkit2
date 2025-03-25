//
// Created by cidi on 2025/3/25.
//

#ifndef RKNN_YOLOV5_ANDROID_APK_DEMO_LIBTESTCPP_H
#define RKNN_YOLOV5_ANDROID_APK_DEMO_LIBTESTCPP_H




class LibTestCpp {
public:
    LibTestCpp() {
//        std::cout << "LibTestCpp constructor called" << std::endl;
    }

    ~LibTestCpp(){}

    int  add(int a, int b)
    {
        return a + b;
    }


    int  sub(int a, int b)
    {
        return a - b;
    }

private:
    int  val;


};


#endif //RKNN_YOLOV5_ANDROID_APK_DEMO_LIBTESTCPP_H
