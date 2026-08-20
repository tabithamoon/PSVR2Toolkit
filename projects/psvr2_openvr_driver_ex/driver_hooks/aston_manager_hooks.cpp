#include "aston_manager_hooks.h"

#include "hmd_driver_loader.h"
#include "hook_lib.h"
#include "util.h"

namespace psvr2_toolkit {
void AstonManagerHooks::InstallHooks() {
  static HmdDriverLoader *pHmdDriverLoader = HmdDriverLoader::Instance();

  // AstonManager::getFileFirmwareVersion
  HookLib::InstallStub(reinterpret_cast<void *>(pHmdDriverLoader->GetBaseAddress() + 0x119400));
}

} // namespace psvr2_toolkit
