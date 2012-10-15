/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.8
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package org.opentransactions.jni.core;

public class Blob extends Storable {
  private long swigCPtr;

  protected Blob(long cPtr, boolean cMemoryOwn) {
    super(otapiJNI.Blob_SWIGUpcast(cPtr), cMemoryOwn);
    swigCPtr = cPtr;
  }

  protected static long getCPtr(Blob obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        otapiJNI.delete_Blob(swigCPtr);
      }
      swigCPtr = 0;
    }
    super.delete();
  }

  public void setM_memBuffer(SWIGTYPE_p_std__vectorT_unsigned_char_t value) {
    otapiJNI.Blob_m_memBuffer_set(swigCPtr, this, SWIGTYPE_p_std__vectorT_unsigned_char_t.getCPtr(value));
  }

  public SWIGTYPE_p_std__vectorT_unsigned_char_t getM_memBuffer() {
    return new SWIGTYPE_p_std__vectorT_unsigned_char_t(otapiJNI.Blob_m_memBuffer_get(swigCPtr, this), true);
  }

  public static Blob ot_dynamic_cast(Storable pObject) {
    long cPtr = otapiJNI.Blob_ot_dynamic_cast(Storable.getCPtr(pObject), pObject);
    return (cPtr == 0) ? null : new Blob(cPtr, false);
  }

}
