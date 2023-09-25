#include <csignal>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <thread>
#include <sys/resource.h>

#include "ara/core/initialization.h"
#include "ara/core/result.h"
#include "ara/exec/application_client.h"
#include "ara/exec/application_state.h"
#include "ara/log/logging.h"

#include "Application.h"

namespace {
/*!
 * \brief Initializes the signal handling.
 * \return void.
 */
void InitializeSignalHandling() noexcept {
  bool success{true};
  sigset_t signals;

  // Block all signals except the SIGABRT, SIGBUS, SIGFPE, SIGILL, SIGSEGV
  // signals because blocking them will lead to undefined behavior. Their
  // default handling shall not be changed (dependent on underlying POSIX
  // environment, usually process is killed and a dump file is written). Signal
  // mask will be inherited by subsequent threads. VECTOR NL
  // AutosarC++17_10-M18.7.1, VectorC++-V18.0.0: MD_tmp_M18.7.1_signalhandling,
  // MD_tmp_V18.0.0_signalhandling
  success = success && (0 == sigfillset(&signals));
  // VECTOR NL AutosarC++17_10-M18.7.1, VectorC++-V18.0.0:
  // MD_tmp_M18.7.1_signalhandling, MD_tmp_V18.0.0_signalhandling
  success = success && (0 == sigdelset(&signals, SIGABRT));
  // VECTOR NC AutosarC++17_10-M18.7.1, VectorC++-V18.0.0:
  // MD_tmp_M18.7.1_signalhandling, MD_tmp_V18.0.0_signalhandling
  success = success && (0 == sigdelset(&signals, SIGBUS));
  // VECTOR NC AutosarC++17_10-M18.7.1, VectorC++-V18.0.0:
  // MD_tmp_M18.7.1_signalhandling, MD_tmp_V18.0.0_signalhandling
  success = success && (0 == sigdelset(&signals, SIGFPE));
  // VECTOR NC AutosarC++17_10-M18.7.1, VectorC++-V18.0.0:
  // MD_tmp_M18.7.1_signalhandling, MD_tmp_V18.0.0_signalhandling
  success = success && (0 == sigdelset(&signals, SIGILL));
  // VECTOR NC AutosarC++17_10-M18.7.1, VectorC++-V18.0.0:
  // MD_tmp_M18.7.1_signalhandling, MD_tmp_V18.0.0_signalhandling
  success = success && (0 == sigdelset(&signals, SIGSEGV));
  // VECTOR NC AutosarC++17_10-M18.7.1, VectorC++-V18.0.0:
  // MD_tmp_M18.7.1_signalhandling, MD_tmp_V18.0.0_signalhandling
  success = success && (0 == pthread_sigmask(SIG_SETMASK, &signals, nullptr));
  if (!success) {
    ara::core::Abort("InitializeSignalHandling failed.");
  }
}

}  // namespace

int main(int argc, char *argv[]) {
  std::cout << __cplusplus << std::endl;
  int return_value = 0;
  // Initialize signal handling.
  InitializeSignalHandling();

  // struct rlimit  para;
  // para.rlim_cur = (128<<11);
  // para.rlim_max = (128<<12);
  // int ret =  setrlimit(RLIMIT_STACK,&para);
  // printf("setrlimit  cur:%u max:%u  ret:%\n", para.rlim_cur,para.rlim_max,ret);

  // Initialize
  ara::core::Result<void> init_result{ara::core::Initialize()};
  if (!init_result.HasValue()) {
    std::cerr << "Initialization for CAM failed." << std::endl;
    std::cerr << "Result contains: " << init_result.Error().Message() << ", "
              << init_result.Error().UserMessage() << std::endl;
    ara::core::Abort("Could not initialize CAM!");
  }

  // Start of Scope, where BSW API can be used
  {
  std::cout << "start log "<< std::endl;
	ofm::Application app;
	app.StartMainLoop();
  }
  // End of Scope, where BSW API can be used

  // Deinitialize
  ara::core::Result<void> deinit_result{ara::core::Deinitialize()};
  if (!deinit_result.HasValue()) {
    std::cerr << "Deinitialization for CAM failed." << std::endl;
    std::cerr << "Result contains: " << deinit_result.Error().Message() << ", "
              << deinit_result.Error().UserMessage() << std::endl;
    ara::core::Abort("Could not deinitialize CAM!");
  }
  return return_value;
}
