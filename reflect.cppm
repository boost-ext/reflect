module;

#ifndef REFLECT_USE_STD_MODULE
#define REFLECT_USE_STD_MODULE 1
#endif
#include "reflect"

export module reflect;

export namespace reflect {
    using reflect::visit;
    using reflect::size;
    using reflect::type_name;
    using reflect::type_id;
    using reflect::to_underlying;
    using reflect::enum_min;
    using reflect::enum_max;
    using reflect::enum_name;
    using reflect::member_name;
    using reflect::get;
    using reflect::has_member_name;
    using reflect::copy;
    using reflect::to;
    using reflect::size_of;
    using reflect::align_of;
    using reflect::offset_of;
    using reflect::for_each;
}