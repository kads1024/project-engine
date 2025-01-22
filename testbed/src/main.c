#include <core/logger.h>
#include <core/asserts.h>

int main(void) {
    MKN_FATAL("A test message: %f", 3.14f);
    MKN_ERROR("A test message: %f", 3.14f);
    MKN_WARN("A test message: %f", 3.14f);
    MKN_INFO("A test message: %f", 3.14f);
    MKN_DEBUG("A test message: %f", 3.14f);
    MKN_TRACE("A test message: %f", 3.14f);

    MKN_ASSERT(1 == 0);

    return 0;
}