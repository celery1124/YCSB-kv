/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_yahoo_ycsb_db_Iterator */

#ifndef _Included_com_yahoo_ycsb_db_Iterator
#define _Included_com_yahoo_ycsb_db_Iterator
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_yahoo_ycsb_db_Iterator
 * Method:    init
 * Signature: (Lcom/yahoo/ycsb/db/ReadOptionsV2;)V
 */
JNIEXPORT void JNICALL Java_com_yahoo_ycsb_db_Iterator_init
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_yahoo_ycsb_db_Iterator
 * Method:    destory
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_yahoo_ycsb_db_Iterator_destory
  (JNIEnv *, jobject);

/*
 * Class:     com_yahoo_ycsb_db_Iterator
 * Method:    seek
 * Signature: ([BI)V
 */
JNIEXPORT void JNICALL Java_com_yahoo_ycsb_db_Iterator_seek
  (JNIEnv *, jobject, jbyteArray, jint);

/*
 * Class:     com_yahoo_ycsb_db_Iterator
 * Method:    next
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_yahoo_ycsb_db_Iterator_next
  (JNIEnv *, jobject);

/*
 * Class:     com_yahoo_ycsb_db_Iterator
 * Method:    valid
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_yahoo_ycsb_db_Iterator_valid
  (JNIEnv *, jobject);

/*
 * Class:     com_yahoo_ycsb_db_Iterator
 * Method:    key
 * Signature: ()[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_yahoo_ycsb_db_Iterator_key
  (JNIEnv *, jobject);

/*
 * Class:     com_yahoo_ycsb_db_Iterator
 * Method:    value
 * Signature: ()[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_yahoo_ycsb_db_Iterator_value
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
