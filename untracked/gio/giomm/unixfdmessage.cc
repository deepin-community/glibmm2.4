// Generated by gmmproc 2.66.2 -- DO NOT MODIFY!


#include <glibmm.h>

#include <giomm/unixfdmessage.h>
#include <giomm/private/unixfdmessage_p.h>


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

#include <gio/gunixfdmessage.h>
#include <glibmm/error.h>
#include <giomm/unixfdlist.h>

namespace Gio
{

Glib::ArrayHandle<int>
UnixFDMessage::steal_fds()
{
  int length = 0;
  const auto fds = g_unix_fd_message_steal_fds(gobj(), &length);
  // The array is terminated with a -1, but that terminating element is
  // not included in the length that g_unix_fd_message_steal_fds() returns.
  return Glib::ArrayHandle<int>(fds, length, Glib::OWNERSHIP_DEEP);
}

} // namespace Gio

namespace
{
} // anonymous namespace


namespace Glib
{

Glib::RefPtr<Gio::UnixFDMessage> wrap(GUnixFDMessage* object, bool take_copy)
{
  return Glib::RefPtr<Gio::UnixFDMessage>( dynamic_cast<Gio::UnixFDMessage*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Gio
{


/* The *_Class implementation: */

const Glib::Class& UnixFDMessage_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &UnixFDMessage_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(g_unix_fd_message_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void UnixFDMessage_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* UnixFDMessage_Class::wrap_new(GObject* object)
{
  return new UnixFDMessage((GUnixFDMessage*)object);
}


/* The implementation: */

GUnixFDMessage* UnixFDMessage::gobj_copy()
{
  reference();
  return gobj();
}

UnixFDMessage::UnixFDMessage(const Glib::ConstructParams& construct_params)
:
  Gio::SocketControlMessage(construct_params)
{

}

UnixFDMessage::UnixFDMessage(GUnixFDMessage* castitem)
:
  Gio::SocketControlMessage((GSocketControlMessage*)(castitem))
{}


UnixFDMessage::UnixFDMessage(UnixFDMessage&& src) noexcept
: Gio::SocketControlMessage(std::move(src))
{}

UnixFDMessage& UnixFDMessage::operator=(UnixFDMessage&& src) noexcept
{
  Gio::SocketControlMessage::operator=(std::move(src));
  return *this;
}


UnixFDMessage::~UnixFDMessage() noexcept
{}


UnixFDMessage::CppClassType UnixFDMessage::unixfdmessage_class_; // initialize static member

GType UnixFDMessage::get_type()
{
  return unixfdmessage_class_.init().get_type();
}


GType UnixFDMessage::get_base_type()
{
  return g_unix_fd_message_get_type();
}


UnixFDMessage::UnixFDMessage()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Gio::SocketControlMessage(Glib::ConstructParams(unixfdmessage_class_.init()))
{
  

}

UnixFDMessage::UnixFDMessage(const Glib::RefPtr<UnixFDList>& fd_list)
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Gio::SocketControlMessage(Glib::ConstructParams(unixfdmessage_class_.init(), "fd_list", Glib::unwrap(fd_list), nullptr))
{
  

}

Glib::RefPtr<UnixFDMessage> UnixFDMessage::create()
{
  return Glib::RefPtr<UnixFDMessage>( new UnixFDMessage() );
}

Glib::RefPtr<UnixFDMessage> UnixFDMessage::create(const Glib::RefPtr<UnixFDList>& fd_list)
{
  return Glib::RefPtr<UnixFDMessage>( new UnixFDMessage(fd_list) );
}

Glib::RefPtr<UnixFDList> UnixFDMessage::get_fd_list()
{
  Glib::RefPtr<UnixFDList> retvalue = Glib::wrap(g_unix_fd_message_get_fd_list(gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

Glib::RefPtr<const UnixFDList> UnixFDMessage::get_fd_list() const
{
  return const_cast<UnixFDMessage*>(this)->get_fd_list();
}

bool UnixFDMessage::append_fd(int fd)
{
  GError* gerror = nullptr;
  bool retvalue = g_unix_fd_message_append_fd(gobj(), fd, &(gerror));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
  return retvalue;
}


Glib::PropertyProxy_ReadOnly< Glib::RefPtr<UnixFDList> > UnixFDMessage::property_fd_list() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::RefPtr<UnixFDList> >(this, "fd-list");
}


} // namespace Gio


