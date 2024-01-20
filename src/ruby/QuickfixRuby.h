/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (https://www.swig.org).
 * Version 4.1.1
 *
 * Do not make changes to this file unless you know what you are doing - modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

#ifndef SWIG_Quickfix_WRAP_H_
#define SWIG_Quickfix_WRAP_H_

namespace Swig {
  class Director;
}


class SwigDirector_Application : public FIX::Application, public Swig::Director {

public:
    SwigDirector_Application(VALUE self);
    virtual ~SwigDirector_Application();
    virtual void onCreate(FIX::SessionID const &arg0);
    virtual void onLogon(FIX::SessionID const &arg0);
    virtual void onLogout(FIX::SessionID const &arg0);
    virtual void toAdmin(FIX::Message &arg0,FIX::SessionID const &arg1);
    virtual void toApp(FIX::Message &arg0,FIX::SessionID const &arg1);
    virtual void fromAdmin(FIX::Message const &arg0,FIX::SessionID const &arg1);
    virtual void fromApp(FIX::Message const &arg0,FIX::SessionID const &arg1);
};


#endif
