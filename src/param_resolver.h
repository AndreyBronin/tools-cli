#pragma once

#include <jinja2cpp/value.h>

namespace jinja2 {

struct IParamResolver
{
    virtual ~IParamResolver() = default;

    virtual const ValuesMap ParamsFromFile(const std::string& filePath) = 0;

};

} // namespace jinja2