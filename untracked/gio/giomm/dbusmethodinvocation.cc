// Generated by gmmproc 2.66.2 -- DO NOT MODIFY!


#include <glibmm.h>

#include <giomm/dbusmethodinvocation.h>
#include <giomm/private/dbusmethodinvocation_p.h>


/* Copyright (C) 2010 The giomm Development Team
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
#include <glibmm/error.h>
#include <giomm/dbusconnection.h>
#include <giomm/dbusmessage.h>
#include <giomm/dbusintrospection.h>

namespace Gio
{

namespace DBus
{

} // namespace DBus

} // namespace Gio

namespace
{
} // anonymous namespace


namespace Glib
{

Glib::RefPtr<Gio::DBus::MethodInvocation> wrap(GDBusMethodInvocation* object, bool take_copy)
{
  return Glib::RefPtr<Gio::DBus::MethodInvocation>( dynamic_cast<Gio::DBus::MethodInvocation*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Gio
{

namespace DBus
{


/* The *_Class implementation: */

const Glib::Class& MethodInvocation_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &MethodInvocation_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(g_dbus_method_invocation_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void MethodInvocation_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* MethodInvocation_Class::wrap_new(GObject* object)
{
  return new MethodInvocation((GDBusMethodInvocation*)object);
}


/* The implementation: */

GDBusMethodInvocation* MethodInvocation::gobj_copy()
{
  reference();
  return gobj();
}

MethodInvocation::MethodInvocation(const Glib::ConstructParams& construct_params)
:
  Glib::Object(construct_params)
{

}

MethodInvocation::MethodInvocation(GDBusMethodInvocation* castitem)
:
  Glib::Object((GObject*)(castitem))
{}


MethodInvocation::MethodInvocation(MethodInvocation&& src) noexcept
: Glib::Object(std::move(src))
{}

MethodInvocation& MethodInvocation::operator=(MethodInvocation&& src) noexcept
{
  Glib::Object::operator=(std::move(src));
  return *this;
}


MethodInvocation::~MethodInvocation() noexcept
{}


MethodInvocation::CppClassType MethodInvocation::methodinvocation_class_; // initialize static member

GType MethodInvocation::get_type()
{
  return methodinvocation_class_.init().get_type();
}


GType MethodInvocation::get_base_type()
{
  return g_dbus_method_invocation_get_type();
}


Glib::ustring MethodInvocation::get_sender() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(g_dbus_method_invocation_get_sender(const_cast<GDBusMethodInvocation*>(gobj())));
}

Glib::ustring MethodInvocation::get_object_path() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(g_dbus_method_invocation_get_object_path(const_cast<GDBusMethodInvocation*>(gobj())));
}

Glib::ustring MethodInvocation::get_interface_name() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(g_dbus_method_invocation_get_interface_name(const_cast<GDBusMethodInvocation*>(gobj())));
}

Glib::ustring MethodInvocation::get_method_name() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(g_dbus_method_invocation_get_method_name(const_cast<GDBusMethodInvocation*>(gobj())));
}

Glib::RefPtr<const MethodInfo> MethodInvocation::get_method_info() const
{
  Glib::RefPtr<const MethodInfo> retvalue = Glib::wrap(const_cast<GDBusMethodInfo*>(g_dbus_method_invocation_get_method_info(const_cast<GDBusMethodInvocation*>(gobj()))));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

Glib::RefPtr<Connection> MethodInvocation::get_connection()
{
  Glib::RefPtr<Connection> retvalue = Glib::wrap(g_dbus_method_invocation_get_connection(gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

Glib::RefPtr<const Connection> MethodInvocation::get_connection() const
{
  return const_cast<MethodInvocation*>(this)->get_connection();
}

Glib::RefPtr<Message> MethodInvocation::get_message()
{
  Glib::RefPtr<Message> retvalue = Glib::wrap(g_dbus_method_invocation_get_message(gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

Glib::RefPtr<const Message> MethodInvocation::get_message() const
{
  return const_cast<MethodInvocation*>(this)->get_message();
}

Glib::VariantContainerBase MethodInvocation::get_parameters() const
{
  return Glib::VariantContainerBase(g_dbus_method_invocation_get_parameters(const_cast<GDBusMethodInvocation*>(gobj())), false);
}

void MethodInvocation::return_value(const Glib::VariantContainerBase& parameters)
{
  g_dbus_method_invocation_return_value(gobj(), const_cast<GVariant*>((parameters).gobj()));
}

#ifdef G_OS_UNIX
void MethodInvocation::return_value(const Glib::VariantContainerBase& parameters, const Glib::RefPtr<UnixFDList>& fd_list)
{
  g_dbus_method_invocation_return_value_with_unix_fd_list(gobj(), const_cast<GVariant*>((parameters).gobj()), Glib::unwrap(fd_list));
}
#endif // G_OS_UNIX

void MethodInvocation::return_error(const Glib::ustring& domain, int code, const Glib::ustring& message)
{
  g_dbus_method_invocation_return_error_literal(gobj(), Glib::QueryQuark(domain).id(), code, message.c_str());
}

void MethodInvocation::return_error(const Glib::Error& error)
{
  g_dbus_method_invocation_return_gerror(gobj(), error.gobj());
}

void MethodInvocation::return_dbus_error(const Glib::ustring& error_name, const Glib::ustring& error_message)
{
  g_dbus_method_invocation_return_dbus_error(gobj(), error_name.c_str(), error_message.c_str());
}


} // namespace DBus

} // namespace Gio


