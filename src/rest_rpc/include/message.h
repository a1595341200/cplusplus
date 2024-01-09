#ifndef MESSAGE_H
#define MESSAGE_H
#include <msgpack.hpp>
#include <opencv2/opencv.hpp>

struct person {
  int id;
  std::string name;
  int age;
  int score[5]{};
  MSGPACK_DEFINE(id, name, age, score[0], score[1], score[2], score[3], score[4]);
};

std::vector<uchar> matToVector(const cv::Mat& mat) {
  std::vector<uchar> buffer;

  if (!mat.empty()) {
    buffer.resize(mat.elemSize() * mat.rows * mat.cols);

    memcpy(buffer.data(), mat.data, mat.elemSize() * mat.rows * mat.cols);
  }

  return buffer;
}

// 将std::vector<uchar>对象转换为cv::Mat对象
cv::Mat vectorToMat(const std::vector<uchar>& buffer, const cv::Size& size) {
  cv::Mat mat(size, CV_8UC1);
  if (!buffer.empty()) {
    memcpy(mat.data, buffer.data(), mat.elemSize() * mat.rows * mat.cols);
  }
  return mat;
}
namespace message {
struct image {
  image() = default;
  image(int _width, int _height, const std::vector<uchar>& _buffer)
      : width(_width), height(_height), buffer(_buffer) {}
  int width{};
  int height{};
  std::vector<uchar> buffer{};
  MSGPACK_DEFINE(width, height, buffer);
};
}  // namespace message

#endif /* MESSAGE_H */
