---@format disable

package.path = "./?.lua;./?/init.lua;" .. package.path

require "olua"

olua.ENABLE_EXCEPTION = true
olua.CAPTURE_MAINTHREAD = true

-------------------------------------------------------------------------------
--- clang compile options
-------------------------------------------------------------------------------
clang {
    "-std=c++17",
    "-DOLUA_DEBUG",
    "-I./olua",
    "-I./lua",
    "-I./OpenXLSX/OpenXLSX",
    "-I./OpenXLSX/OpenXLSX/headers",
    "-I./src",
}

-------------------------------------------------------------------------------
--- clang wrapper
-------------------------------------------------------------------------------
module "openxlsx"

output_dir "src"

api_dir "addons/openxlsx"

headers [[
#include "OpenXLSX.hpp"
#include "olua.hpp"
]]

luacls(function (cxxcls)
    return cxxcls:gsub("OpenXLSX::", "openxlsx."):gsub("::", ".")
end)

entry "OpenXLSX::XLDocument"

exclude_type "OpenXLSX::XMLDocument"
exclude_type "OpenXLSX::XMLNode"
exclude_type "std::basic_ostream"
exclude_type "std::deque"
exclude_type "wchar_t"
exclude_type "std::basic_istream"

typeconf "OpenXLSX::XLCommandType"
typeconf "OpenXLSX::XLContentType"
typeconf "OpenXLSX::XLProperty"
typeconf "OpenXLSX::XLQueryType"
typeconf "OpenXLSX::XLSheetType"
typeconf "OpenXLSX::XLValueType"

typeonly "OpenXLSX::XLCoordinates"

typeconf "OpenXLSX::XLCellRange"
    .iterator "OpenXLSX::XLCellIterator"
typeconf "OpenXLSX::XLRowRange"
    .iterator "OpenXLSX::XLRowIterator"
typeconf "OpenXLSX::XLRowDataRange"
    .iterator "OpenXLSX::XLRowDataIterator"
typeconf "OpenXLSX::XLRowDataProxy"
typeconf "OpenXLSX::IZipArchive"
typeconf "OpenXLSX::XLCommand"
    .func "setParam"
        .inst "setParamString<std::string>"
        .inst "setParamInt<uint64_t>"
        .inst "setParamNumber<double>"
        .inst "setParamBool<bool>"
    .func "getParam"
        .inst "getParamString<std::string>"
        .inst "getParamInt<uint64_t>"
        .inst "getParamNumber<double>"
        .inst "getParamBool<bool>"
typeconf "OpenXLSX::XLXmlFile"
typeconf "OpenXLSX::XLQuery"
    .func "setParam"
        .inst "setParamString<std::string>"
        .inst "setParamInt<uint64_t>"
        .inst "setParamNumber<double>"
        .inst "setParamBool<bool>"
    .func "getParam"
        .inst "getParamString<std::string>"
        .inst "getParamInt<uint64_t>"
        .inst "getParamNumber<double>"
        .inst "getParamBool<bool>"
typeconf "OpenXLSX::XLXmlData"
typeconf "OpenXLSX::XLFormulaProxy"
    .func "set"
        .inst "setString<std::string>"
typeconf "OpenXLSX::XLCellValueProxy"
    .func "get"
        .inst "getString<std::string>"
        .inst "getInt<int64_t>"
        .inst "getNumber<double>"
        .inst "getBool<bool>"
    .func "set"
        .inst "setString<std::string>"
        .inst "setInt<int64_t>"
        .inst "setNumber<double>"
        .inst "setBool<bool>"
typeconf "OpenXLSX::XLCell"
typeconf "OpenXLSX::XLCellReference"
    .fromstring "true"
    .default "OpenXLSX::XLCellReference(\"A1\")"
typeconf "OpenXLSX::XLCellAssignable"
typeconf "OpenXLSX::XLColor"
typeconf "OpenXLSX::XLColumn"
typeconf "OpenXLSX::XLRow"
typeconf "OpenXLSX::XLSheetState"
typeconf "OpenXLSX::XLSheet"
    .func "get"
        .inst "getWorksheet<OpenXLSX::XLWorksheet>"
        .inst "getChartsheet<OpenXLSX::XLChartsheet>"
typeconf "OpenXLSX::XLChartsheet"
    .exclude "setActive"
    .exclude "isActive"
typeconf "OpenXLSX::XLSharedStrings"
typeconf "OpenXLSX::XLWorksheet"
typeconf "OpenXLSX::XLWorkbook"
typeconf "OpenXLSX::XLDocument"
