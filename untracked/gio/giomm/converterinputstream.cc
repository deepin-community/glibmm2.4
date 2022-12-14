// Generated by gmmproc 2.66.2 -- DO NOT MODIFY!


#include <glibmm.h>

#include <giomm/converterinputstream.h>
#include <giomm/private/converterinputstream_p.h>


/* Copyright (C) 2012 The giomm Development Team
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
#include <giomm/converter.h>
#include <giomm/inputstream.h>

namespace Gio
{

} // namespace Gio

namespace
{
} // anonymous namespace


namespace Glib
{

Glib::RefPtr<Gio::ConverterInputStream> wrap(GConverterInputStream* object, bool take_copy)
{
  return Glib::RefPtr<Gio::ConverterInputStream>( dynamic_cast<Gio::ConverterInputStream*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Gio
{


/* The *_Class implementation: */

const Glib::Class& ConverterInputStream_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &ConverterInputStream_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(g_converter_input_stream_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:
  PollableInputStream::add_interface(get_type());

  }

  return *this;
}


void ConverterInputStream_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* ConverterInputStream_Class::wrap_new(GObject* object)
{
  return new ConverterInputStream((GConverterInputStream*)object);
}


/* The implementation: */

GConverterInputStream* ConverterInputStream::gobj_copy()
{
  reference();
  return gobj();
}

ConverterInputStream::ConverterInputStream(const Glib::ConstructParams& construct_params)
:
  FilterInputStream(construct_params)
{

}

ConverterInputStream::ConverterInputStream(GConverterInputStream* castitem)
:
  FilterInputStream((GFilterInputStream*)(castitem))
{}


ConverterInputStream::ConverterInputStream(ConverterInputStream&& src) noexcept
: FilterInputStream(std::move(src))
  , PollableInputStream(std::move(src))
{}

ConverterInputStream& ConverterInputStream::operator=(ConverterInputStream&& src) noexcept
{
  FilterInputStream::operator=(std::move(src));
  PollableInputStream::operator=(std::move(src));
  return *this;
}


ConverterInputStream::~ConverterInputStream() noexcept
{}


ConverterInputStream::CppClassType ConverterInputStream::converterinputstream_class_; // initialize static member

GType ConverterInputStream::get_type()
{
  return converterinputstream_class_.init().get_type();
}


GType ConverterInputStream::get_base_type()
{
  return g_converter_input_stream_get_type();
}


ConverterInputStream::ConverterInputStream(const Glib::RefPtr<InputStream>& base_stream, const Glib::RefPtr<Converter>& converter)
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  FilterInputStream(Glib::ConstructParams(converterinputstream_class_.init(), "base_stream", const_cast<GInputStream*>(Glib::unwrap(base_stream)), "converter", Glib::unwrap(converter), nullptr))
{
  

}

Glib::RefPtr<ConverterInputStream> ConverterInputStream::create(const Glib::RefPtr<InputStream>& base_stream, const Glib::RefPtr<Converter>& converter)
{
  return Glib::RefPtr<ConverterInputStream>( new ConverterInputStream(base_stream, converter) );
}

Glib::RefPtr<Converter> ConverterInputStream::get_converter()
{
  Glib::RefPtr<Converter> retvalue = Glib::wrap(g_converter_input_stream_get_converter(gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

Glib::RefPtr<const Converter> ConverterInputStream::get_converter() const
{
  return const_cast<ConverterInputStream*>(this)->get_converter();
}


Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Converter> > ConverterInputStream::property_converter() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Converter> >(this, "converter");
}


} // namespace Gio


