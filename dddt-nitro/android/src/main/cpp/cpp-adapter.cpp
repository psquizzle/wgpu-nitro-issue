#include <jni.h>
#include "DDDTOnLoad.hpp"

JNIEXPORT jint JNICALL JNI_OnLoad(JavaVM* vm, void*) {
  return margelo::nitro::dddt::initialize(vm);
}
