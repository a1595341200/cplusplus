#define TAG "Log_tests"
#include "Log.h"
#include <gtest/gtest.h>

class LogTest : public ::testing::Test {
public:
protected:
  void SetUp() override {
    char c[] = "test";
    char *a[] = {c};
    Log::init(1, a);
  }

  void TearDown() override { google::ShutdownGoogleLogging(); }

private:
};

TEST_F(LogTest, INFO) {
  SLOG(DEBUG) << "Found "
              << " cookies";
}
