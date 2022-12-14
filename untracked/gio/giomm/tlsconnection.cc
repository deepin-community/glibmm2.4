// Generated by gmmproc 2.66.2 -- DO NOT MODIFY!


#include <glibmm.h>

#include <giomm/tlsconnection.h>
#include <giomm/private/tlsconnection_p.h>


/* Copyright (C) 2013 The giomm Development Team
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <gio/gio.h>
#include <giomm/cancellable.h>
#include <giomm/tlsdatabase.h>
#include <giomm/tlsinteraction.h>
#include <giomm/slot_async.h>

namespace
{


static gboolean TlsConnection_signal_accept_certificate_callback(GTlsConnection* self, GTlsCertificate* p0,GTlsCertificateFlags p1,void* data)
{
  using namespace Gio;
  using SlotType = sigc::slot< bool,const Glib::RefPtr<const TlsCertificate>&,TlsCertificateFlags >;

  auto obj = dynamic_cast<TlsConnection*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
  // Do not try to call a signal on a disassociated wrapper.
  if(obj)
  {
    try
    {
      if(const auto slot = Glib::SignalProxyNormal::data_to_slot(data))
        return static_cast<int>((*static_cast<SlotType*>(slot))(Glib::wrap(p0, true)
, ((TlsCertificateFlags)(p1))
));
    }
    catch(...)
    {
       Glib::exception_handlers_invoke();
    }
  }

  using RType = gboolean;
  return RType();
}

static gboolean TlsConnection_signal_accept_certificate_notify_callback(GTlsConnection* self, GTlsCertificate* p0,GTlsCertificateFlags p1, void* data)
{
  using namespace Gio;
  using SlotType = sigc::slot< void,const Glib::RefPtr<const TlsCertificate>&,TlsCertificateFlags >;

  auto obj = dynamic_cast<TlsConnection*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
  // Do not try to call a signal on a disassociated wrapper.
  if(obj)
  {
    try
    {
      if(const auto slot = Glib::SignalProxyNormal::data_to_slot(data))
        (*static_cast<SlotType*>(slot))(Glib::wrap(p0, true)
, ((TlsCertificateFlags)(p1))
);
    }
    catch(...)
    {
      Glib::exception_handlers_invoke();
    }
  }

  using RType = gboolean;
  return RType();
}

static const Glib::SignalProxyInfo TlsConnection_signal_accept_certificate_info =
{
  "accept_certificate",
  (GCallback) &TlsConnection_signal_accept_certificate_callback,
  (GCallback) &TlsConnection_signal_accept_certificate_notify_callback
};


} // anonymous namespace

// static
GType Glib::Value<Gio::TlsRehandshakeMode>::value_type()
{
  return g_tls_rehandshake_mode_get_type();
}


namespace Glib
{

Glib::RefPtr<Gio::TlsConnection> wrap(GTlsConnection* object, bool take_copy)
{
  return Glib::RefPtr<Gio::TlsConnection>( dynamic_cast<Gio::TlsConnection*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Gio
{


/* The *_Class implementation: */

const Glib::Class& TlsConnection_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &TlsConnection_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(g_tls_connection_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void TlsConnection_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);

  klass->handshake = &handshake_vfunc_callback;
  klass->handshake_async = &handshake_async_vfunc_callback;
  klass->handshake_finish = &handshake_finish_vfunc_callback;

  klass->accept_certificate = &accept_certificate_callback;
}

gboolean TlsConnection_Class::handshake_vfunc_callback(GTlsConnection* self, GCancellable* cancellable, GError** error)
{
  const auto obj_base = static_cast<Glib::ObjectBase*>(
      Glib::ObjectBase::_get_current_wrapper((GObject*)self));

  // Non-gtkmmproc-generated custom classes implicitly call the default
  // Glib::ObjectBase constructor, which sets is_derived_. But gtkmmproc-
  // generated classes can use this optimisation, which avoids the unnecessary
  // parameter conversions if there is no possibility of the virtual function
  // being overridden:
  if(obj_base && obj_base->is_derived_())
  {
    const auto obj = dynamic_cast<CppObjectType* const>(obj_base);
    if(obj) // This can be NULL during destruction.
    {
      try // Trap C++ exceptions which would normally be lost because this is a C callback.
      {
        // Call the virtual member method, which derived classes might override.
        return static_cast<int>(obj->handshake_vfunc(Glib::wrap(cancellable)
));
      }
      catch(Glib::Error& errormm)
      {
        errormm.propagate(error);
        using RType = gboolean;
        return RType();
      }
      catch(...)
      {
        Glib::exception_handlers_invoke();
      }
    }
  }

  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(self)) // Get the parent class of the object class (The original underlying C class).
  );

  // Call the original underlying C function:
  if(base && base->handshake)
    return (*base->handshake)(self, cancellable, error);

  using RType = gboolean;
  return RType();
}
void TlsConnection_Class::handshake_async_vfunc_callback(GTlsConnection* self, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data)
{
  const auto slot = static_cast<Gio::SlotAsyncReady*>(user_data);

  const auto obj_base = static_cast<Glib::ObjectBase*>(
      Glib::ObjectBase::_get_current_wrapper((GObject*)self));

  // Non-gtkmmproc-generated custom classes implicitly call the default
  // Glib::ObjectBase constructor, which sets is_derived_. But gtkmmproc-
  // generated classes can use this optimisation, which avoids the unnecessary
  // parameter conversions if there is no possibility of the virtual function
  // being overridden:
  if(obj_base && obj_base->is_derived_())
  {
    const auto obj = dynamic_cast<CppObjectType* const>(obj_base);
    if(obj) // This can be NULL during destruction.
    {
      try // Trap C++ exceptions which would normally be lost because this is a C callback.
      {
        // Call the virtual member method, which derived classes might override.
        obj->handshake_async_vfunc(*slot, Glib::wrap(cancellable)
, io_priority);
        return;
      }
      catch(...)
      {
        Glib::exception_handlers_invoke();
      }
    }
  }

  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(self)) // Get the parent class of the object class (The original underlying C class).
  );

  // Call the original underlying C function:
  if(base && base->handshake_async)
    (*base->handshake_async)(self, io_priority, cancellable, callback, user_data);
}
gboolean TlsConnection_Class::handshake_finish_vfunc_callback(GTlsConnection* self, GAsyncResult* result, GError** error)
{
  const auto obj_base = static_cast<Glib::ObjectBase*>(
      Glib::ObjectBase::_get_current_wrapper((GObject*)self));

  // Non-gtkmmproc-generated custom classes implicitly call the default
  // Glib::ObjectBase constructor, which sets is_derived_. But gtkmmproc-
  // generated classes can use this optimisation, which avoids the unnecessary
  // parameter conversions if there is no possibility of the virtual function
  // being overridden:
  if(obj_base && obj_base->is_derived_())
  {
    const auto obj = dynamic_cast<CppObjectType* const>(obj_base);
    if(obj) // This can be NULL during destruction.
    {
      try // Trap C++ exceptions which would normally be lost because this is a C callback.
      {
        // Call the virtual member method, which derived classes might override.
        return static_cast<int>(obj->handshake_finish_vfunc(Glib::wrap(result, true)
));
      }
      catch(Glib::Error& errormm)
      {
        errormm.propagate(error);
        using RType = gboolean;
        return RType();
      }
      catch(...)
      {
        Glib::exception_handlers_invoke();
      }
    }
  }

  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(self)) // Get the parent class of the object class (The original underlying C class).
  );

  // Call the original underlying C function:
  if(base && base->handshake_finish)
    return (*base->handshake_finish)(self, result, error);

  using RType = gboolean;
  return RType();
}

gboolean TlsConnection_Class::accept_certificate_callback(GTlsConnection* self, GTlsCertificate* p0, GTlsCertificateFlags p1)
{
  const auto obj_base = static_cast<Glib::ObjectBase*>(
      Glib::ObjectBase::_get_current_wrapper((GObject*)self));

  // Non-gtkmmproc-generated custom classes implicitly call the default
  // Glib::ObjectBase constructor, which sets is_derived_. But gtkmmproc-
  // generated classes can use this optimisation, which avoids the unnecessary
  // parameter conversions if there is no possibility of the virtual function
  // being overridden:
  if(obj_base && obj_base->is_derived_())
  {
    const auto obj = dynamic_cast<CppObjectType* const>(obj_base);
    if(obj) // This can be NULL during destruction.
    {
      try // Trap C++ exceptions which would normally be lost because this is a C callback.
      {
        // Call the virtual member method, which derived classes might override.
        return static_cast<int>(obj->on_accept_certificate(Glib::wrap(p0, true)
, ((TlsCertificateFlags)(p1))
));
      }
      catch(...)
      {
        Glib::exception_handlers_invoke();
      }
    }
  }

  const auto base = static_cast<BaseClassType*>(
        g_type_class_peek_parent(G_OBJECT_GET_CLASS(self)) // Get the parent class of the object class (The original underlying C class).
    );

  // Call the original underlying C function:
  if(base && base->accept_certificate)
    return (*base->accept_certificate)(self, p0, p1);

  using RType = gboolean;
  return RType();
}


Glib::ObjectBase* TlsConnection_Class::wrap_new(GObject* object)
{
  return new TlsConnection((GTlsConnection*)object);
}


/* The implementation: */

GTlsConnection* TlsConnection::gobj_copy()
{
  reference();
  return gobj();
}

TlsConnection::TlsConnection(const Glib::ConstructParams& construct_params)
:
  IOStream(construct_params)
{

}

TlsConnection::TlsConnection(GTlsConnection* castitem)
:
  IOStream((GIOStream*)(castitem))
{}


TlsConnection::TlsConnection(TlsConnection&& src) noexcept
: IOStream(std::move(src))
{}

TlsConnection& TlsConnection::operator=(TlsConnection&& src) noexcept
{
  IOStream::operator=(std::move(src));
  return *this;
}


TlsConnection::~TlsConnection() noexcept
{}


TlsConnection::CppClassType TlsConnection::tlsconnection_class_; // initialize static member

GType TlsConnection::get_type()
{
  return tlsconnection_class_.init().get_type();
}


GType TlsConnection::get_base_type()
{
  return g_tls_connection_get_type();
}


TlsConnection::TlsConnection()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  IOStream(Glib::ConstructParams(tlsconnection_class_.init()))
{
  

}

void TlsConnection::set_certificate(const Glib::RefPtr<TlsCertificate>& certificate)
{
  g_tls_connection_set_certificate(gobj(), Glib::unwrap(certificate));
}

Glib::RefPtr<TlsCertificate> TlsConnection::get_certificate()
{
  Glib::RefPtr<TlsCertificate> retvalue = Glib::wrap(g_tls_connection_get_certificate(gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

Glib::RefPtr<const TlsCertificate> TlsConnection::get_certificate() const
{
  return const_cast<TlsConnection*>(this)->get_certificate();
}

Glib::RefPtr<TlsCertificate> TlsConnection::get_peer_certificate()
{
  Glib::RefPtr<TlsCertificate> retvalue = Glib::wrap(g_tls_connection_get_peer_certificate(gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

Glib::RefPtr<const TlsCertificate> TlsConnection::get_peer_certificate() const
{
  return const_cast<TlsConnection*>(this)->get_peer_certificate();
}

TlsCertificateFlags TlsConnection::get_peer_certificate_errors() const
{
  return ((TlsCertificateFlags)(g_tls_connection_get_peer_certificate_errors(const_cast<GTlsConnection*>(gobj()))));
}

void TlsConnection::set_require_close_notify(bool require_close_notify)
{
  g_tls_connection_set_require_close_notify(gobj(), static_cast<int>(require_close_notify));
}

bool TlsConnection::get_require_close_notify() const
{
  return g_tls_connection_get_require_close_notify(const_cast<GTlsConnection*>(gobj()));
}

#ifndef GIOMM_DISABLE_DEPRECATED
G_GNUC_BEGIN_IGNORE_DEPRECATIONS
void TlsConnection::set_rehandshake_mode(TlsRehandshakeMode mode)
{
  g_tls_connection_set_rehandshake_mode(gobj(), ((GTlsRehandshakeMode)(mode)));
}
G_GNUC_END_IGNORE_DEPRECATIONS
#endif // GIOMM_DISABLE_DEPRECATED

#ifndef GIOMM_DISABLE_DEPRECATED
G_GNUC_BEGIN_IGNORE_DEPRECATIONS
TlsRehandshakeMode TlsConnection::get_rehandshake_mode() const
{
  return ((TlsRehandshakeMode)(g_tls_connection_get_rehandshake_mode(const_cast<GTlsConnection*>(gobj()))));
}
G_GNUC_END_IGNORE_DEPRECATIONS
#endif // GIOMM_DISABLE_DEPRECATED

#ifndef GIOMM_DISABLE_DEPRECATED
G_GNUC_BEGIN_IGNORE_DEPRECATIONS
void TlsConnection::set_use_system_certdb(bool use_system_certdb)
{
  g_tls_connection_set_use_system_certdb(gobj(), static_cast<int>(use_system_certdb));
}
G_GNUC_END_IGNORE_DEPRECATIONS
#endif // GIOMM_DISABLE_DEPRECATED

#ifndef GIOMM_DISABLE_DEPRECATED
G_GNUC_BEGIN_IGNORE_DEPRECATIONS
bool TlsConnection::get_use_system_certdb() const
{
  return g_tls_connection_get_use_system_certdb(const_cast<GTlsConnection*>(gobj()));
}
G_GNUC_END_IGNORE_DEPRECATIONS
#endif // GIOMM_DISABLE_DEPRECATED

Glib::RefPtr<TlsDatabase> TlsConnection::get_database()
{
  return Glib::wrap(g_tls_connection_get_database(gobj()));
}

Glib::RefPtr<const TlsDatabase> TlsConnection::get_database() const
{
  return const_cast<TlsConnection*>(this)->get_database();
}

void TlsConnection::set_database(const Glib::RefPtr<TlsDatabase>& database)
{
  g_tls_connection_set_database(gobj(), Glib::unwrap(database));
}

Glib::RefPtr<TlsInteraction> TlsConnection::get_interaction()
{
  return Glib::wrap(g_tls_connection_get_interaction(gobj()));
}

Glib::RefPtr<const TlsInteraction> TlsConnection::get_interaction() const
{
  return const_cast<TlsConnection*>(this)->get_interaction();
}

void TlsConnection::set_interaction(const Glib::RefPtr<TlsInteraction>& interaction)
{
  g_tls_connection_set_interaction(gobj(), Glib::unwrap(interaction));
}

bool TlsConnection::handshake(const Glib::RefPtr<Cancellable>& cancellable)
{
  GError* gerror = nullptr;
  bool retvalue = g_tls_connection_handshake(gobj(), const_cast<GCancellable*>(Glib::unwrap(cancellable)), &(gerror));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
  return retvalue;
}

bool TlsConnection::handshake()
{
  GError* gerror = nullptr;
  bool retvalue = g_tls_connection_handshake(gobj(), nullptr, &(gerror));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
  return retvalue;
}

void TlsConnection::handshake_async(const SlotAsyncReady& slot, const Glib::RefPtr<Cancellable>& cancellable, int io_priority)
{
  // Create a copy of the slot.
  auto slot_copy = new SlotAsyncReady(slot); 

  g_tls_connection_handshake_async(gobj(), io_priority, const_cast<GCancellable*>(Glib::unwrap(cancellable)), &SignalProxy_async_callback, slot_copy);
}

void TlsConnection::handshake_async(const SlotAsyncReady& slot, int io_priority)
{
  // Create a copy of the slot.
  auto slot_copy = new SlotAsyncReady(slot); 

  g_tls_connection_handshake_async(gobj(), io_priority, nullptr, &SignalProxy_async_callback, slot_copy);
}

bool TlsConnection::handshake_finish(const Glib::RefPtr<AsyncResult>& result)
{
  GError* gerror = nullptr;
  bool retvalue = g_tls_connection_handshake_finish(gobj(), Glib::unwrap(result), &(gerror));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
  return retvalue;
}

bool TlsConnection::emit_accept_certificate(const Glib::RefPtr<const TlsCertificate>& peer_cert, TlsCertificateFlags errors)
{
  return g_tls_connection_emit_accept_certificate(gobj(), const_cast<GTlsCertificate*>(Glib::unwrap(peer_cert)), ((GTlsCertificateFlags)(errors)));
}


Glib::SignalProxy< bool,const Glib::RefPtr<const TlsCertificate>&,TlsCertificateFlags > TlsConnection::signal_accept_certificate()
{
  return Glib::SignalProxy< bool,const Glib::RefPtr<const TlsCertificate>&,TlsCertificateFlags >(this, &TlsConnection_signal_accept_certificate_info);
}


Glib::PropertyProxy_ReadOnly< Glib::RefPtr<IOStream> > TlsConnection::property_base_io_stream() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::RefPtr<IOStream> >(this, "base-io-stream");
}

Glib::PropertyProxy< Glib::RefPtr<TlsCertificate> > TlsConnection::property_certificate() 
{
  return Glib::PropertyProxy< Glib::RefPtr<TlsCertificate> >(this, "certificate");
}

Glib::PropertyProxy_ReadOnly< Glib::RefPtr<TlsCertificate> > TlsConnection::property_certificate() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::RefPtr<TlsCertificate> >(this, "certificate");
}

Glib::PropertyProxy< Glib::RefPtr<TlsDatabase> > TlsConnection::property_database() 
{
  return Glib::PropertyProxy< Glib::RefPtr<TlsDatabase> >(this, "database");
}

Glib::PropertyProxy_ReadOnly< Glib::RefPtr<TlsDatabase> > TlsConnection::property_database() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::RefPtr<TlsDatabase> >(this, "database");
}

Glib::PropertyProxy< Glib::RefPtr<TlsInteraction> > TlsConnection::property_interaction() 
{
  return Glib::PropertyProxy< Glib::RefPtr<TlsInteraction> >(this, "interaction");
}

Glib::PropertyProxy_ReadOnly< Glib::RefPtr<TlsInteraction> > TlsConnection::property_interaction() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::RefPtr<TlsInteraction> >(this, "interaction");
}

Glib::PropertyProxy_ReadOnly< Glib::RefPtr<TlsCertificate> > TlsConnection::property_peer_certificate() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::RefPtr<TlsCertificate> >(this, "peer-certificate");
}

Glib::PropertyProxy_ReadOnly< TlsCertificateFlags > TlsConnection::property_peer_certificate_errors() const
{
  return Glib::PropertyProxy_ReadOnly< TlsCertificateFlags >(this, "peer-certificate-errors");
}

#ifndef GIOMM_DISABLE_DEPRECATED

Glib::PropertyProxy< TlsRehandshakeMode > TlsConnection::property_rehandshake_mode() 
{
  return Glib::PropertyProxy< TlsRehandshakeMode >(this, "rehandshake-mode");
}
#endif // GIOMM_DISABLE_DEPRECATED


#ifndef GIOMM_DISABLE_DEPRECATED

Glib::PropertyProxy_ReadOnly< TlsRehandshakeMode > TlsConnection::property_rehandshake_mode() const
{
  return Glib::PropertyProxy_ReadOnly< TlsRehandshakeMode >(this, "rehandshake-mode");
}
#endif // GIOMM_DISABLE_DEPRECATED


Glib::PropertyProxy< bool > TlsConnection::property_require_close_notify() 
{
  return Glib::PropertyProxy< bool >(this, "require-close-notify");
}

Glib::PropertyProxy_ReadOnly< bool > TlsConnection::property_require_close_notify() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "require-close-notify");
}

#ifndef GIOMM_DISABLE_DEPRECATED

Glib::PropertyProxy< bool > TlsConnection::property_use_system_certdb() 
{
  return Glib::PropertyProxy< bool >(this, "use-system-certdb");
}
#endif // GIOMM_DISABLE_DEPRECATED


#ifndef GIOMM_DISABLE_DEPRECATED

Glib::PropertyProxy_ReadOnly< bool > TlsConnection::property_use_system_certdb() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "use-system-certdb");
}
#endif // GIOMM_DISABLE_DEPRECATED


bool Gio::TlsConnection::on_accept_certificate(const Glib::RefPtr<const TlsCertificate>& peer_cert, TlsCertificateFlags errors)
{
  const auto base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->accept_certificate)
    return (*base->accept_certificate)(gobj(),const_cast<GTlsCertificate*>(Glib::unwrap(peer_cert)),((GTlsCertificateFlags)(errors)));

  using RType = bool;
  return RType();
}

bool Gio::TlsConnection::handshake_vfunc(const Glib::RefPtr<Cancellable>& cancellable) 
{
  const auto base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->handshake)
  {
    GError* gerror = nullptr;
    bool retval((*base->handshake)(gobj(),const_cast<GCancellable*>(Glib::unwrap(cancellable)),&(gerror)));
    if(gerror)
      ::Glib::Error::throw_exception(gerror);
    return retval;
  }

  using RType = bool;
  return RType();
}
void Gio::TlsConnection::handshake_async_vfunc(const SlotAsyncReady& slot, const Glib::RefPtr<Cancellable>& cancellable, int io_priority) 
{
  // Create a copy of the slot.
  auto slot_copy = new SlotAsyncReady(slot); 

  const auto base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->handshake_async)
  {
    (*base->handshake_async)(gobj(),io_priority,const_cast<GCancellable*>(Glib::unwrap(cancellable)),&SignalProxy_async_callback,slot_copy);
  }
}
bool Gio::TlsConnection::handshake_finish_vfunc(const Glib::RefPtr<AsyncResult>& result) 
{
  const auto base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->handshake_finish)
  {
    GError* gerror = nullptr;
    bool retval((*base->handshake_finish)(gobj(),Glib::unwrap(result),&(gerror)));
    if(gerror)
      ::Glib::Error::throw_exception(gerror);
    return retval;
  }

  using RType = bool;
  return RType();
}


} // namespace Gio


