
#include "JNIprojectcpp.h"




jint JNICALL Java_project_JNIproject_Sum
  (JNIEnv *env, jobject jobj, jint n1, jint n2){
	 return n1 + n2;
}

jint JNICALL Java_project_JNIproject_Subtract
  (JNIEnv *env, jobject  jobj, jint n1, jint n2){
	return n1-n2;
}

jint JNICALL Java_project_JNIproject_Multiply
  (JNIEnv *env, jobject jobj, jint n1, jint n2){
	return n1*n2;
}

jint JNICALL Java_project_JNIproject_Divide
  (JNIEnv *env, jobject jobj, jint n1, jint n2){
	return n1/n2;
}
