/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class arthas_Vmtool */

#ifndef _Included_arthas_Vmtool
#define _Included_arthas_Vmtool
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     arthas_Vmtool
 * Method:    check
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_arthas_Vmtool_check0
  (JNIEnv *, jclass);

/*
 * Class:     arthas_Vmtool
 * Method:    getInstances
 * Signature: (Ljava/lang/Class;)Ljava/util/ArrayList;
 */
JNIEXPORT jobject JNICALL Java_arthas_Vmtool_getInstances
  (JNIEnv *, jclass, jclass);

/*
 * Class:     arthas_Vmtool
 * Method:    sumInstanceSize
 * Signature: (Ljava/lang/Class;)J
 */
JNIEXPORT jlong JNICALL Java_arthas_Vmtool_sumInstanceSize
  (JNIEnv *, jclass, jclass);

/*
 * Class:     arthas_Vmtool
 * Method:    getInstanceSize
 * Signature: (Ljava/lang/Object;)J
 */
JNIEXPORT jlong JNICALL Java_arthas_Vmtool_getInstanceSize
  (JNIEnv *, jclass, jobject);

/*
 * Class:     arthas_Vmtool
 * Method:    countInstances
 * Signature: (Ljava/lang/Class;)J
 */
JNIEXPORT jlong JNICALL Java_arthas_Vmtool_countInstances
  (JNIEnv *, jclass, jclass);

/*
 * Class:     arthas_Vmtool
 * Method:    getAllLoadedClasses
 * Signature: ()Ljava/util/ArrayList;
 */
JNIEXPORT jobject JNICALL Java_arthas_Vmtool_getAllLoadedClasses
  (JNIEnv *, jclass);

#ifdef __cplusplus
}
#endif
#endif
