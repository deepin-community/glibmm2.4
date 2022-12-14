// Generated by gmmproc 2.66.2 -- DO NOT MODIFY!


#include <glibmm.h>

#include <giomm/filenamecompleter.h>
#include <giomm/private/filenamecompleter_p.h>


/* Copyright (C) 2007 The gtkmm Development Team
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

#include <glibmm/exceptionhandler.h>
#include <giomm/file.h>
#include <gio/gio.h>

namespace Gio
{

} // namespace Gio

namespace
{


static const Glib::SignalProxyInfo FilenameCompleter_signal_got_completion_data_info =
{
  "got_completion_data",
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback,
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback
};


} // anonymous namespace


namespace Glib
{

Glib::RefPtr<Gio::FilenameCompleter> wrap(GFilenameCompleter* object, bool take_copy)
{
  return Glib::RefPtr<Gio::FilenameCompleter>( dynamic_cast<Gio::FilenameCompleter*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Gio
{


/* The *_Class implementation: */

const Glib::Class& FilenameCompleter_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &FilenameCompleter_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(g_filename_completer_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void FilenameCompleter_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


  klass->got_completion_data = &got_completion_data_callback;
}


void FilenameCompleter_Class::got_completion_data_callback(GFilenameCompleter* self)
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
        obj->on_got_completion_data();
        return;
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
  if(base && base->got_completion_data)
    (*base->got_completion_data)(self);
}


Glib::ObjectBase* FilenameCompleter_Class::wrap_new(GObject* object)
{
  return new FilenameCompleter((GFilenameCompleter*)object);
}


/* The implementation: */

GFilenameCompleter* FilenameCompleter::gobj_copy()
{
  reference();
  return gobj();
}

FilenameCompleter::FilenameCompleter(const Glib::ConstructParams& construct_params)
:
  Glib::Object(construct_params)
{

}

FilenameCompleter::FilenameCompleter(GFilenameCompleter* castitem)
:
  Glib::Object((GObject*)(castitem))
{}


FilenameCompleter::FilenameCompleter(FilenameCompleter&& src) noexcept
: Glib::Object(std::move(src))
{}

FilenameCompleter& FilenameCompleter::operator=(FilenameCompleter&& src) noexcept
{
  Glib::Object::operator=(std::move(src));
  return *this;
}


FilenameCompleter::~FilenameCompleter() noexcept
{}


FilenameCompleter::CppClassType FilenameCompleter::filenamecompleter_class_; // initialize static member

GType FilenameCompleter::get_type()
{
  return filenamecompleter_class_.init().get_type();
}


GType FilenameCompleter::get_base_type()
{
  return g_filename_completer_get_type();
}


FilenameCompleter::FilenameCompleter()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Glib::Object(Glib::ConstructParams(filenamecompleter_class_.init()))
{
  

}

Glib::RefPtr<FilenameCompleter> FilenameCompleter::create()
{
  return Glib::RefPtr<FilenameCompleter>( new FilenameCompleter() );
}

std::string FilenameCompleter::get_completion_suffix(const std::string& initial_text) const
{
  return Glib::convert_return_gchar_ptr_to_stdstring(g_filename_completer_get_completion_suffix(const_cast<GFilenameCompleter*>(gobj()), initial_text.c_str()));
}

Glib::StringArrayHandle FilenameCompleter::get_completions(const std::string& initial_text) const
{
  return Glib::StringArrayHandle(g_filename_completer_get_completions(const_cast<GFilenameCompleter*>(gobj()), initial_text.c_str()), Glib::OWNERSHIP_DEEP);
}

void FilenameCompleter::set_dirs_only(bool dirs_only)
{
  g_filename_completer_set_dirs_only(gobj(), static_cast<int>(dirs_only));
}


Glib::SignalProxy< void > FilenameCompleter::signal_got_completion_data()
{
  return Glib::SignalProxy< void >(this, &FilenameCompleter_signal_got_completion_data_info);
}


void Gio::FilenameCompleter::on_got_completion_data()
{
  const auto base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->got_completion_data)
    (*base->got_completion_data)(gobj());
}


} // namespace Gio


