// Generated by gmmproc 2.66.2 -- DO NOT MODIFY!


#include <glibmm.h>

#include <giomm/zlibdecompressor.h>
#include <giomm/private/zlibdecompressor_p.h>


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
#include <giomm/fileinfo.h>

namespace Gio
{

} // namespace Gio

namespace
{
} // anonymous namespace


namespace Glib
{

Glib::RefPtr<Gio::ZlibDecompressor> wrap(GZlibDecompressor* object, bool take_copy)
{
  return Glib::RefPtr<Gio::ZlibDecompressor>( dynamic_cast<Gio::ZlibDecompressor*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Gio
{


/* The *_Class implementation: */

const Glib::Class& ZlibDecompressor_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &ZlibDecompressor_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(g_zlib_decompressor_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:
  Converter::add_interface(get_type());

  }

  return *this;
}


void ZlibDecompressor_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* ZlibDecompressor_Class::wrap_new(GObject* object)
{
  return new ZlibDecompressor((GZlibDecompressor*)object);
}


/* The implementation: */

GZlibDecompressor* ZlibDecompressor::gobj_copy()
{
  reference();
  return gobj();
}

ZlibDecompressor::ZlibDecompressor(const Glib::ConstructParams& construct_params)
:
  Glib::Object(construct_params)
{

}

ZlibDecompressor::ZlibDecompressor(GZlibDecompressor* castitem)
:
  Glib::Object((GObject*)(castitem))
{}


ZlibDecompressor::ZlibDecompressor(ZlibDecompressor&& src) noexcept
: Glib::Object(std::move(src))
  , Converter(std::move(src))
{}

ZlibDecompressor& ZlibDecompressor::operator=(ZlibDecompressor&& src) noexcept
{
  Glib::Object::operator=(std::move(src));
  Converter::operator=(std::move(src));
  return *this;
}


ZlibDecompressor::~ZlibDecompressor() noexcept
{}


ZlibDecompressor::CppClassType ZlibDecompressor::zlibdecompressor_class_; // initialize static member

GType ZlibDecompressor::get_type()
{
  return zlibdecompressor_class_.init().get_type();
}


GType ZlibDecompressor::get_base_type()
{
  return g_zlib_decompressor_get_type();
}


ZlibDecompressor::ZlibDecompressor(ZlibCompressorFormat format)
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Glib::Object(Glib::ConstructParams(zlibdecompressor_class_.init(), "format", ((GZlibCompressorFormat)(format)), nullptr))
{
  

}

Glib::RefPtr<ZlibDecompressor> ZlibDecompressor::create(ZlibCompressorFormat format)
{
  return Glib::RefPtr<ZlibDecompressor>( new ZlibDecompressor(format) );
}

Glib::RefPtr<FileInfo> ZlibDecompressor::get_file_info()
{
  return Glib::wrap(g_zlib_decompressor_get_file_info(gobj()));
}

Glib::RefPtr<const FileInfo> ZlibDecompressor::get_file_info() const
{
  return const_cast<ZlibDecompressor*>(this)->get_file_info();
}


Glib::PropertyProxy_ReadOnly< Glib::RefPtr<FileInfo> > ZlibDecompressor::property_file_info() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::RefPtr<FileInfo> >(this, "file-info");
}

Glib::PropertyProxy_ReadOnly< ZlibCompressorFormat > ZlibDecompressor::property_format() const
{
  return Glib::PropertyProxy_ReadOnly< ZlibCompressorFormat >(this, "format");
}


} // namespace Gio


