
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __sun_awt_CausedFocusEvent__
#define __sun_awt_CausedFocusEvent__

#pragma interface

#include <java/awt/event/FocusEvent.h>
extern "Java"
{
  namespace java
  {
    namespace awt
    {
        class Component;
    }
  }
  namespace sun
  {
    namespace awt
    {
        class CausedFocusEvent;
        class CausedFocusEvent$Cause;
    }
  }
}

class sun::awt::CausedFocusEvent : public ::java::awt::event::FocusEvent
{

public:
  CausedFocusEvent(::java::awt::Component *, jint, jboolean, ::java::awt::Component *, ::sun::awt::CausedFocusEvent$Cause *);
  virtual ::sun::awt::CausedFocusEvent$Cause * getCause();
private:
  ::sun::awt::CausedFocusEvent$Cause * __attribute__((aligned(__alignof__( ::java::awt::event::FocusEvent)))) cause;
public:
  static ::java::lang::Class class$;
};

#endif // __sun_awt_CausedFocusEvent__