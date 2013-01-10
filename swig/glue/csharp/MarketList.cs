/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.9
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */


using System;
using System.Runtime.InteropServices;

public class MarketList : Storable {
  private HandleRef swigCPtr;

  internal MarketList(IntPtr cPtr, bool cMemoryOwn) : base(otapiPINVOKE.MarketList_SWIGUpcast(cPtr), cMemoryOwn) {
    swigCPtr = new HandleRef(this, cPtr);
  }

  internal static HandleRef getCPtr(MarketList obj) {
    return (obj == null) ? new HandleRef(null, IntPtr.Zero) : obj.swigCPtr;
  }

  ~MarketList() {
    Dispose();
  }

  public override void Dispose() {
    lock(this) {
      if (swigCPtr.Handle != IntPtr.Zero) {
        if (swigCMemOwn) {
          swigCMemOwn = false;
          otapiPINVOKE.delete_MarketList(swigCPtr);
        }
        swigCPtr = new HandleRef(null, IntPtr.Zero);
      }
      GC.SuppressFinalize(this);
      base.Dispose();
    }
  }

  public uint GetMarketDataCount() {
    uint ret = otapiPINVOKE.MarketList_GetMarketDataCount(swigCPtr);
    return ret;
  }

  public MarketData GetMarketData(uint nIndex) {
    IntPtr cPtr = otapiPINVOKE.MarketList_GetMarketData(swigCPtr, nIndex);
    MarketData ret = (cPtr == IntPtr.Zero) ? null : new MarketData(cPtr, false);
    return ret;
  }

  public bool RemoveMarketData(uint nIndexMarketData) {
    bool ret = otapiPINVOKE.MarketList_RemoveMarketData(swigCPtr, nIndexMarketData);
    return ret;
  }

  public bool AddMarketData(MarketData disownObject) {
    bool ret = otapiPINVOKE.MarketList_AddMarketData(swigCPtr, MarketData.getCPtr(disownObject));
    if (otapiPINVOKE.SWIGPendingException.Pending) throw otapiPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  public new static MarketList ot_dynamic_cast(Storable pObject) {
    IntPtr cPtr = otapiPINVOKE.MarketList_ot_dynamic_cast(Storable.getCPtr(pObject));
    MarketList ret = (cPtr == IntPtr.Zero) ? null : new MarketList(cPtr, false);
    return ret;
  }

}
