#include "common/common/thread_impl.h"
#include "common/filesystem/filesystem_impl.h"

#include "exe/platform_impl.h"

namespace Envoy {

PlatformImpl::PlatformImpl()
    : thread_factory_(std::make_unique<Thread::ThreadFactoryImplPosix>()),  // 看代码就是可以每次创建一个线程
      file_system_(std::make_unique<Filesystem::InstanceImplPosix>()) {}

PlatformImpl::~PlatformImpl() = default;

} // namespace Envoy
