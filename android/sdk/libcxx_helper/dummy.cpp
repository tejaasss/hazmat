#include <jni.h>

// empty

extern "C"
JNIEXPORT void JNICALL
Java_org_opencv_dnn_TextDetectionModel_detect_10(JNIEnv *env, jclass clazz, jlong native_obj,
                                                 jlong frame_native_obj,
                                                 jlong detections_mat_native_obj,
                                                 jlong confidences_mat_native_obj) {
    // TODO: implement detect_0()
}
extern "C"
JNIEXPORT void JNICALL
Java_org_opencv_dnn_TextDetectionModel_detect_11(JNIEnv *env, jclass clazz, jlong native_obj,
                                                 jlong frame_native_obj,
                                                 jlong detections_mat_native_obj) {
    // TODO: implement detect_1()
}
extern "C"
JNIEXPORT void JNICALL
Java_org_opencv_dnn_TextDetectionModel_detectTextRectangles_10(JNIEnv *env, jclass clazz,
                                                               jlong native_obj,
                                                               jlong frame_native_obj,
                                                               jlong detections_mat_native_obj,
                                                               jlong confidences_mat_native_obj) {
    // TODO: implement detectTextRectangles_0()
}
extern "C"
JNIEXPORT void JNICALL
Java_org_opencv_dnn_TextDetectionModel_detectTextRectangles_11(JNIEnv *env, jclass clazz,
                                                               jlong native_obj,
                                                               jlong frame_native_obj,
                                                               jlong detections_mat_native_obj) {
    // TODO: implement detectTextRectangles_1()
}
extern "C"
JNIEXPORT void JNICALL
Java_org_opencv_dnn_TextDetectionModel_delete(JNIEnv *env, jclass clazz, jlong native_obj) {
    // TODO: implement delete()
}
extern "C"
JNIEXPORT jobject JNICALL
Java_org_opencv_dnn_TextRecognitionModel_getVocabulary_10(JNIEnv *env, jclass clazz,
                                                          jlong native_obj) {
    // TODO: implement getVocabulary_0()
}
extern "C"
JNIEXPORT jlong JNICALL
Java_org_opencv_core_Mat_n_1Mat__(JNIEnv *env, jclass clazz) {
    // TODO: implement n_Mat()
}
extern "C"
JNIEXPORT jlong JNICALL
Java_org_opencv_core_Mat_n_1Mat__III(JNIEnv *env, jclass clazz, jint rows, jint cols, jint type) {
    // TODO: implement n_Mat()
}
extern "C"
JNIEXPORT jlong JNICALL
Java_org_opencv_core_Mat_n_1Mat__I_3II(JNIEnv *env, jclass clazz, jint ndims, jintArray sizes,
                                       jint type) {
    // TODO: implement n_Mat()
}
extern "C"
JNIEXPORT jlong JNICALL
Java_org_opencv_core_Mat_n_1Mat__IIILjava_nio_ByteBuffer_2(JNIEnv *env, jclass clazz, jint rows,
                                                           jint cols, jint type, jobject data) {
    // TODO: implement n_Mat()
}
extern "C"
JNIEXPORT jlong JNICALL
Java_org_opencv_core_Mat_n_1Mat__IIILjava_nio_ByteBuffer_2J(JNIEnv *env, jclass clazz, jint rows,
                                                            jint cols, jint type, jobject data,
                                                            jlong step) {
    // TODO: implement n_Mat()
}
extern "C"
JNIEXPORT void JNICALL
Java_org_opencv_core_Mat_n_1copyTo__JJJ(JNIEnv *env, jclass clazz, jlong native_obj,
                                        jlong m_native_obj, jlong mask_native_obj) {
    // TODO: implement n_copyTo()
}
extern "C"
JNIEXPORT jlong JNICALL
Java_org_opencv_core_Mat_n_1Mat__DDI(JNIEnv *env, jclass clazz, jdouble size_width,
                                     jdouble size_height, jint type) {
    // TODO: implement n_Mat()
}
extern "C"
JNIEXPORT jlong JNICALL
Java_org_opencv_core_Mat_n_1Mat__IIIDDDD(JNIEnv *env, jclass clazz, jint rows, jint cols, jint type,
                                         jdouble s_val0, jdouble s_val1, jdouble s_val2,
                                         jdouble s_val3) {
    // TODO: implement n_Mat()
}
extern "C"
JNIEXPORT jlong JNICALL
Java_org_opencv_core_Mat_n_1Mat__DDIDDDD(JNIEnv *env, jclass clazz, jdouble size_width,
                                         jdouble size_height, jint type, jdouble s_val0,
                                         jdouble s_val1, jdouble s_val2, jdouble s_val3) {
    // TODO: implement n_Mat()
}
extern "C"
JNIEXPORT jlong JNICALL
Java_org_opencv_core_Mat_n_1Mat__I_3IIDDDD(JNIEnv *env, jclass clazz, jint ndims, jintArray sizes,
                                           jint type, jdouble s_val0, jdouble s_val1,
                                           jdouble s_val2, jdouble s_val3) {
    // TODO: implement n_Mat()
}
extern "C"
JNIEXPORT jlong JNICALL
Java_org_opencv_core_Mat_n_1Mat__JIIII(JNIEnv *env, jclass clazz, jlong m_native_obj,
                                       jint row_range_start, jint row_range_end,
                                       jint col_range_start, jint col_range_end) {
    // TODO: implement n_Mat()
}
extern "C"
JNIEXPORT jlong JNICALL
Java_org_opencv_core_Mat_n_1Mat__JII(JNIEnv *env, jclass clazz, jlong m_native_obj,
                                     jint row_range_start, jint row_range_end) {
    // TODO: implement n_Mat()
}
extern "C"
JNIEXPORT jlong JNICALL
Java_org_opencv_core_Mat_n_1Mat__J_3Lorg_opencv_core_Range_2(JNIEnv *env, jclass clazz,
                                                             jlong m_native_obj,
                                                             jobjectArray ranges) {
    // TODO: implement n_Mat()
}
extern "C"
JNIEXPORT jlong JNICALL
Java_org_opencv_core_Mat_n_1adjustROI(JNIEnv *env, jclass clazz, jlong native_obj, jint dtop,
                                      jint dbottom, jint dleft, jint dright) {
    // TODO: implement n_adjustROI()
}
extern "C"
JNIEXPORT void JNICALL
Java_org_opencv_core_Mat_n_1assignTo__JJI(JNIEnv *env, jclass clazz, jlong native_obj,
                                          jlong m_native_obj, jint type) {
    // TODO: implement n_assignTo()
}
extern "C"
JNIEXPORT void JNICALL
Java_org_opencv_core_Mat_n_1assignTo__JJ(JNIEnv *env, jclass clazz, jlong native_obj,
                                         jlong m_native_obj) {
    // TODO: implement n_assignTo()
}
extern "C"
JNIEXPORT jint JNICALL
Java_org_opencv_core_Mat_n_1channels(JNIEnv *env, jclass clazz, jlong native_obj) {
    // TODO: implement n_channels()
}
extern "C"
JNIEXPORT jint JNICALL
Java_org_opencv_core_Mat_n_1checkVector__JIIZ(JNIEnv *env, jclass clazz, jlong native_obj,
                                              jint elem_channels, jint depth,
                                              jboolean require_continuous) {
    // TODO: implement n_checkVector()
}
extern "C"
JNIEXPORT jint JNICALL
Java_org_opencv_core_Mat_n_1checkVector__JII(JNIEnv *env, jclass clazz, jlong native_obj,
                                             jint elem_channels, jint depth) {
    // TODO: implement n_checkVector()
}
extern "C"
JNIEXPORT jint JNICALL
Java_org_opencv_core_Mat_n_1checkVector__JI(JNIEnv *env, jclass clazz, jlong native_obj,
                                            jint elem_channels) {
    // TODO: implement n_checkVector()
}
extern "C"
JNIEXPORT jlong JNICALL
Java_org_opencv_core_Mat_n_1clone(JNIEnv *env, jclass clazz, jlong native_obj) {
    // TODO: implement n_clone()
}
extern "C"
JNIEXPORT jlong JNICALL
Java_org_opencv_core_Mat_n_1col(JNIEnv *env, jclass clazz, jlong native_obj, jint x) {
    // TODO: implement n_col()
}
extern "C"
JNIEXPORT jlong JNICALL
Java_org_opencv_core_Mat_n_1colRange(JNIEnv *env, jclass clazz, jlong native_obj, jint startcol,
                                     jint endcol) {
    // TODO: implement n_colRange()
}
extern "C"
JNIEXPORT jint JNICALL
Java_org_opencv_core_Mat_n_1dims(JNIEnv *env, jclass clazz, jlong native_obj) {
    // TODO: implement n_dims()
}
extern "C"
JNIEXPORT jint JNICALL
Java_org_opencv_core_Mat_n_1cols(JNIEnv *env, jclass clazz, jlong native_obj) {
    // TODO: implement n_cols()
}
extern "C"
JNIEXPORT void JNICALL
Java_org_opencv_core_Mat_n_1convertTo__JJIDD(JNIEnv *env, jclass clazz, jlong native_obj,
                                             jlong m_native_obj, jint rtype, jdouble alpha,
                                             jdouble beta) {
    // TODO: implement n_convertTo()
}
extern "C"
JNIEXPORT void JNICALL
Java_org_opencv_core_Mat_n_1convertTo__JJID(JNIEnv *env, jclass clazz, jlong native_obj,
                                            jlong m_native_obj, jint rtype, jdouble alpha) {
    // TODO: implement n_convertTo()
}
extern "C"
JNIEXPORT void JNICALL
Java_org_opencv_core_Mat_n_1convertTo__JJI(JNIEnv *env, jclass clazz, jlong native_obj,
                                           jlong m_native_obj, jint rtype) {
    // TODO: implement n_convertTo()
}
extern "C"
JNIEXPORT void JNICALL
Java_org_opencv_core_Mat_n_1copyTo__JJ(JNIEnv *env, jclass clazz, jlong native_obj,
                                       jlong m_native_obj) {
    // TODO: implement n_copyTo()
}
extern "C"
JNIEXPORT void JNICALL
Java_org_opencv_core_Mat_n_1create__JIII(JNIEnv *env, jclass clazz, jlong native_obj, jint rows,
                                         jint cols, jint type) {
    // TODO: implement n_create()
}
extern "C"
JNIEXPORT void JNICALL
Java_org_opencv_core_Mat_n_1create__JDDI(JNIEnv *env, jclass clazz, jlong native_obj,
                                         jdouble size_width, jdouble size_height, jint type) {
    // TODO: implement n_create()
}
extern "C"
JNIEXPORT void JNICALL
Java_org_opencv_core_Mat_n_1create__JI_3II(JNIEnv *env, jclass clazz, jlong native_obj, jint ndims,
                                           jintArray sizes, jint type) {
    // TODO: implement n_create()
}
extern "C"
JNIEXPORT void JNICALL
Java_org_opencv_core_Mat_n_1copySize(JNIEnv *env, jclass clazz, jlong native_obj,
                                     jlong m_native_obj) {
    // TODO: implement n_copySize()
}
extern "C"
JNIEXPORT jlong JNICALL
Java_org_opencv_core_Mat_n_1cross(JNIEnv *env, jclass clazz, jlong native_obj, jlong m_native_obj) {
    // TODO: implement n_cross()
}
extern "C"
JNIEXPORT jlong JNICALL
Java_org_opencv_core_Mat_n_1dataAddr(JNIEnv *env, jclass clazz, jlong native_obj) {
    // TODO: implement n_dataAddr()
}
extern "C"
JNIEXPORT jint JNICALL
Java_org_opencv_core_Mat_n_1depth(JNIEnv *env, jclass clazz, jlong native_obj) {
    // TODO: implement n_depth()
}
extern "C"
JNIEXPORT jlong JNICALL
Java_org_opencv_core_Mat_n_1diag__JI(JNIEnv *env, jclass clazz, jlong native_obj, jint d) {
    // TODO: implement n_diag()
}
extern "C"
JNIEXPORT jlong JNICALL
Java_org_opencv_core_Mat_n_1diag__J(JNIEnv *env, jclass clazz, jlong d_native_obj) {
    // TODO: implement n_diag()
}
extern "C"
JNIEXPORT jdouble JNICALL
Java_org_opencv_core_Mat_n_1dot(JNIEnv *env, jclass clazz, jlong native_obj, jlong m_native_obj) {
    // TODO: implement n_dot()
}
extern "C"
JNIEXPORT jlong JNICALL
Java_org_opencv_core_Mat_n_1elemSize(JNIEnv *env, jclass clazz, jlong native_obj) {
    // TODO: implement n_elemSize()
}
extern "C"
JNIEXPORT jlong JNICALL
Java_org_opencv_core_Mat_n_1elemSize1(JNIEnv *env, jclass clazz, jlong native_obj) {
    // TODO: implement n_elemSize1()
}
extern "C"
JNIEXPORT jboolean JNICALL
Java_org_opencv_core_Mat_n_1empty(JNIEnv *env, jclass clazz, jlong native_obj) {
    // TODO: implement n_empty()
}
extern "C"
JNIEXPORT jlong JNICALL
Java_org_opencv_core_Mat_n_1eye__III(JNIEnv *env, jclass clazz, jint rows, jint cols, jint type) {
    // TODO: implement n_eye()
}
extern "C"
JNIEXPORT jlong JNICALL
Java_org_opencv_core_Mat_n_1eye__DDI(JNIEnv *env, jclass clazz, jdouble size_width,
                                     jdouble size_height, jint type) {
    // TODO: implement n_eye()
}
extern "C"
JNIEXPORT jlong JNICALL
Java_org_opencv_core_Mat_n_1inv__JI(JNIEnv *env, jclass clazz, jlong native_obj, jint method) {
    // TODO: implement n_inv()
}
extern "C"
JNIEXPORT jlong JNICALL
Java_org_opencv_core_Mat_n_1inv__J(JNIEnv *env, jclass clazz, jlong native_obj) {
    // TODO: implement n_inv()
}
extern "C"
JNIEXPORT jboolean JNICALL
Java_org_opencv_core_Mat_n_1isContinuous(JNIEnv *env, jclass clazz, jlong native_obj) {
    // TODO: implement n_isContinuous()
}
extern "C"
JNIEXPORT jboolean JNICALL
Java_org_opencv_core_Mat_n_1isSubmatrix(JNIEnv *env, jclass clazz, jlong native_obj) {
    // TODO: implement n_isSubmatrix()
}
extern "C"
JNIEXPORT void JNICALL
Java_org_opencv_core_Mat_locateROI_10(JNIEnv *env, jclass clazz, jlong native_obj,
                                      jdoubleArray whole_size_out, jdoubleArray ofs_out) {
    // TODO: implement locateROI_0()
}
extern "C"
JNIEXPORT jlong JNICALL
Java_org_opencv_core_Mat_n_1mul__JJD(JNIEnv *env, jclass clazz, jlong native_obj,
                                     jlong m_native_obj, jdouble scale) {
    // TODO: implement n_mul()
}
extern "C"
JNIEXPORT jlong JNICALL
Java_org_opencv_core_Mat_n_1mul__JJ(JNIEnv *env, jclass clazz, jlong native_obj,
                                    jlong m_native_obj) {
    // TODO: implement n_mul()
}
extern "C"
JNIEXPORT jlong JNICALL
Java_org_opencv_core_Mat_n_1matMul(JNIEnv *env, jclass clazz, jlong native_obj,
                                   jlong m_native_obj) {
    // TODO: implement n_matMul()
}
extern "C"
JNIEXPORT jlong JNICALL
Java_org_opencv_core_Mat_n_1ones__III(JNIEnv *env, jclass clazz, jint rows, jint cols, jint type) {
    // TODO: implement n_ones()
}
extern "C"
JNIEXPORT jlong JNICALL
Java_org_opencv_core_Mat_n_1ones__DDI(JNIEnv *env, jclass clazz, jdouble size_width,
                                      jdouble size_height, jint type) {
    // TODO: implement n_ones()
}
extern "C"
JNIEXPORT jlong JNICALL
Java_org_opencv_core_Mat_n_1ones__I_3II(JNIEnv *env, jclass clazz, jint ndims, jintArray sizes,
                                        jint type) {
    // TODO: implement n_ones()
}
extern "C"
JNIEXPORT void JNICALL
Java_org_opencv_core_Mat_n_1push_1back(JNIEnv *env, jclass clazz, jlong native_obj,
                                       jlong m_native_obj) {
    // TODO: implement n_push_back()
}
extern "C"
JNIEXPORT void JNICALL
Java_org_opencv_core_Mat_n_1release(JNIEnv *env, jclass clazz, jlong native_obj) {
    // TODO: implement n_release()
}
extern "C"
JNIEXPORT jlong JNICALL
Java_org_opencv_core_Mat_n_1reshape__JII(JNIEnv *env, jclass clazz, jlong native_obj, jint cn,
                                         jint rows) {
    // TODO: implement n_reshape()
}
extern "C"
JNIEXPORT jlong JNICALL
Java_org_opencv_core_Mat_n_1reshape__JI(JNIEnv *env, jclass clazz, jlong native_obj, jint cn) {
    // TODO: implement n_reshape()
}
extern "C"
JNIEXPORT jlong JNICALL
Java_org_opencv_core_Mat_n_1reshape_11(JNIEnv *env, jclass clazz, jlong native_obj, jint cn,
                                       jint newndims, jintArray newsz) {
    // TODO: implement n_reshape_1()
}
extern "C"
JNIEXPORT jlong JNICALL
Java_org_opencv_core_Mat_n_1row(JNIEnv *env, jclass clazz, jlong native_obj, jint y) {
    // TODO: implement n_row()
}
extern "C"
JNIEXPORT jlong JNICALL
Java_org_opencv_core_Mat_n_1rowRange(JNIEnv *env, jclass clazz, jlong native_obj, jint startrow,
                                     jint endrow) {
    // TODO: implement n_rowRange()
}
extern "C"
JNIEXPORT jint JNICALL
Java_org_opencv_core_Mat_n_1rows(JNIEnv *env, jclass clazz, jlong native_obj) {
    // TODO: implement n_rows()
}
extern "C"
JNIEXPORT jlong JNICALL
Java_org_opencv_core_Mat_n_1setTo__JDDDD(JNIEnv *env, jclass clazz, jlong native_obj,
                                         jdouble s_val0, jdouble s_val1, jdouble s_val2,
                                         jdouble s_val3) {
    // TODO: implement n_setTo()
}
extern "C"
JNIEXPORT jlong JNICALL
Java_org_opencv_core_Mat_n_1setTo__JDDDDJ(JNIEnv *env, jclass clazz, jlong native_obj,
                                          jdouble s_val0, jdouble s_val1, jdouble s_val2,
                                          jdouble s_val3, jlong mask_native_obj) {
    // TODO: implement n_setTo()
}
extern "C"
JNIEXPORT jlong JNICALL
Java_org_opencv_core_Mat_n_1setTo__JJJ(JNIEnv *env, jclass clazz, jlong native_obj,
                                       jlong value_native_obj, jlong mask_native_obj) {
    // TODO: implement n_setTo()
}
extern "C"
JNIEXPORT jlong JNICALL
Java_org_opencv_core_Mat_n_1setTo__JJ(JNIEnv *env, jclass clazz, jlong native_obj,
                                      jlong value_native_obj) {
    // TODO: implement n_setTo()
}
extern "C"
JNIEXPORT jdoubleArray JNICALL
Java_org_opencv_core_Mat_n_1size(JNIEnv *env, jclass clazz, jlong native_obj) {
    // TODO: implement n_size()
}
extern "C"
JNIEXPORT jint JNICALL
Java_org_opencv_core_Mat_n_1size_1i(JNIEnv *env, jclass clazz, jlong native_obj, jint i) {
    // TODO: implement n_size_i()
}
extern "C"
JNIEXPORT jlong JNICALL
Java_org_opencv_core_Mat_n_1step1__JI(JNIEnv *env, jclass clazz, jlong native_obj, jint i) {
    // TODO: implement n_step1()
}
extern "C"
JNIEXPORT jlong JNICALL
Java_org_opencv_core_Mat_n_1step1__J(JNIEnv *env, jclass clazz, jlong native_obj) {
    // TODO: implement n_step1()
}
extern "C"
JNIEXPORT jlong JNICALL
Java_org_opencv_core_Mat_n_1submat_1rr(JNIEnv *env, jclass clazz, jlong native_obj,
                                       jint row_range_start, jint row_range_end,
                                       jint col_range_start, jint col_range_end) {
    // TODO: implement n_submat_rr()
}
extern "C"
JNIEXPORT jlong JNICALL
Java_org_opencv_core_Mat_n_1submat_1ranges(JNIEnv *env, jclass clazz, jlong native_obj,
                                           jobjectArray ranges) {
    // TODO: implement n_submat_ranges()
}
extern "C"
JNIEXPORT jlong JNICALL
Java_org_opencv_core_Mat_n_1submat(JNIEnv *env, jclass clazz, jlong native_obj, jint roi_x,
                                   jint roi_y, jint roi_width, jint roi_height) {
    // TODO: implement n_submat()
}
extern "C"
JNIEXPORT jlong JNICALL
Java_org_opencv_core_Mat_n_1t(JNIEnv *env, jclass clazz, jlong native_obj) {
    // TODO: implement n_t()
}
extern "C"
JNIEXPORT jlong JNICALL
Java_org_opencv_core_Mat_n_1total(JNIEnv *env, jclass clazz, jlong native_obj) {
    // TODO: implement n_total()
}
extern "C"
JNIEXPORT jint JNICALL
Java_org_opencv_core_Mat_n_1type(JNIEnv *env, jclass clazz, jlong native_obj) {
    // TODO: implement n_type()
}
extern "C"
JNIEXPORT jlong JNICALL
Java_org_opencv_core_Mat_n_1zeros__III(JNIEnv *env, jclass clazz, jint rows, jint cols, jint type) {
    // TODO: implement n_zeros()
}
extern "C"
JNIEXPORT jlong JNICALL
Java_org_opencv_core_Mat_n_1zeros__DDI(JNIEnv *env, jclass clazz, jdouble size_width,
                                       jdouble size_height, jint type) {
    // TODO: implement n_zeros()
}
extern "C"
JNIEXPORT jlong JNICALL
Java_org_opencv_core_Mat_n_1zeros__I_3II(JNIEnv *env, jclass clazz, jint ndims, jintArray sizes,
                                         jint type) {
    // TODO: implement n_zeros()
}
extern "C"
JNIEXPORT void JNICALL
Java_org_opencv_core_Mat_n_1delete(JNIEnv *env, jclass clazz, jlong native_obj) {
    // TODO: implement n_delete()
}