//
// AUTO GENERATED, DO NOT MODIFY!
//
#include "lua_openxlsx.h"
#include "OpenXLSX.hpp"
#include "olua.hpp"

static int _olua_module_openxlsx(lua_State *L);

static int _olua_cls_openxlsx_XLCommandType(lua_State *L)
{
    oluacls_class<OpenXLSX::XLCommandType>(L, "openxlsx.XLCommandType");
    oluacls_func(L, "__index", olua_indexerror);
    oluacls_func(L, "__newindex", olua_newindexerror);
    oluacls_enum(L, "AddChartsheet", (lua_Integer)OpenXLSX::XLCommandType::AddChartsheet);
    oluacls_enum(L, "AddSharedStrings", (lua_Integer)OpenXLSX::XLCommandType::AddSharedStrings);
    oluacls_enum(L, "AddWorksheet", (lua_Integer)OpenXLSX::XLCommandType::AddWorksheet);
    oluacls_enum(L, "CheckAndFixCoreProperties", (lua_Integer)OpenXLSX::XLCommandType::CheckAndFixCoreProperties);
    oluacls_enum(L, "CheckAndFixExtendedProperties", (lua_Integer)OpenXLSX::XLCommandType::CheckAndFixExtendedProperties);
    oluacls_enum(L, "CloneSheet", (lua_Integer)OpenXLSX::XLCommandType::CloneSheet);
    oluacls_enum(L, "DeleteSheet", (lua_Integer)OpenXLSX::XLCommandType::DeleteSheet);
    oluacls_enum(L, "ResetCalcChain", (lua_Integer)OpenXLSX::XLCommandType::ResetCalcChain);
    oluacls_enum(L, "SetSheetActive", (lua_Integer)OpenXLSX::XLCommandType::SetSheetActive);
    oluacls_enum(L, "SetSheetColor", (lua_Integer)OpenXLSX::XLCommandType::SetSheetColor);
    oluacls_enum(L, "SetSheetIndex", (lua_Integer)OpenXLSX::XLCommandType::SetSheetIndex);
    oluacls_enum(L, "SetSheetName", (lua_Integer)OpenXLSX::XLCommandType::SetSheetName);
    oluacls_enum(L, "SetSheetVisibility", (lua_Integer)OpenXLSX::XLCommandType::SetSheetVisibility);

    return 1;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_openxlsx_XLCommandType(lua_State *L)
{
    olua_require(L, ".olua.module.openxlsx",  _olua_module_openxlsx);
    if (!olua_getclass(L, "openxlsx.XLCommandType")) {
        luaL_error(L, "class not found: OpenXLSX::XLCommandType");
    }
    return 1;
}
OLUA_END_DECLS

static int _olua_cls_openxlsx_XLContentType(lua_State *L)
{
    oluacls_class<OpenXLSX::XLContentType>(L, "openxlsx.XLContentType");
    oluacls_func(L, "__index", olua_indexerror);
    oluacls_func(L, "__newindex", olua_newindexerror);
    oluacls_enum(L, "CalculationChain", (lua_Integer)OpenXLSX::XLContentType::CalculationChain);
    oluacls_enum(L, "Chart", (lua_Integer)OpenXLSX::XLContentType::Chart);
    oluacls_enum(L, "ChartColorStyle", (lua_Integer)OpenXLSX::XLContentType::ChartColorStyle);
    oluacls_enum(L, "ChartStyle", (lua_Integer)OpenXLSX::XLContentType::ChartStyle);
    oluacls_enum(L, "Chartsheet", (lua_Integer)OpenXLSX::XLContentType::Chartsheet);
    oluacls_enum(L, "Comments", (lua_Integer)OpenXLSX::XLContentType::Comments);
    oluacls_enum(L, "ControlProperties", (lua_Integer)OpenXLSX::XLContentType::ControlProperties);
    oluacls_enum(L, "CoreProperties", (lua_Integer)OpenXLSX::XLContentType::CoreProperties);
    oluacls_enum(L, "CustomProperties", (lua_Integer)OpenXLSX::XLContentType::CustomProperties);
    oluacls_enum(L, "Drawing", (lua_Integer)OpenXLSX::XLContentType::Drawing);
    oluacls_enum(L, "ExtendedProperties", (lua_Integer)OpenXLSX::XLContentType::ExtendedProperties);
    oluacls_enum(L, "ExternalLink", (lua_Integer)OpenXLSX::XLContentType::ExternalLink);
    oluacls_enum(L, "SharedStrings", (lua_Integer)OpenXLSX::XLContentType::SharedStrings);
    oluacls_enum(L, "Styles", (lua_Integer)OpenXLSX::XLContentType::Styles);
    oluacls_enum(L, "Table", (lua_Integer)OpenXLSX::XLContentType::Table);
    oluacls_enum(L, "Theme", (lua_Integer)OpenXLSX::XLContentType::Theme);
    oluacls_enum(L, "Unknown", (lua_Integer)OpenXLSX::XLContentType::Unknown);
    oluacls_enum(L, "VBAProject", (lua_Integer)OpenXLSX::XLContentType::VBAProject);
    oluacls_enum(L, "VMLDrawing", (lua_Integer)OpenXLSX::XLContentType::VMLDrawing);
    oluacls_enum(L, "Workbook", (lua_Integer)OpenXLSX::XLContentType::Workbook);
    oluacls_enum(L, "WorkbookMacroEnabled", (lua_Integer)OpenXLSX::XLContentType::WorkbookMacroEnabled);
    oluacls_enum(L, "Worksheet", (lua_Integer)OpenXLSX::XLContentType::Worksheet);

    return 1;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_openxlsx_XLContentType(lua_State *L)
{
    olua_require(L, ".olua.module.openxlsx",  _olua_module_openxlsx);
    if (!olua_getclass(L, "openxlsx.XLContentType")) {
        luaL_error(L, "class not found: OpenXLSX::XLContentType");
    }
    return 1;
}
OLUA_END_DECLS

static int _olua_cls_openxlsx_XLProperty(lua_State *L)
{
    oluacls_class<OpenXLSX::XLProperty>(L, "openxlsx.XLProperty");
    oluacls_func(L, "__index", olua_indexerror);
    oluacls_func(L, "__newindex", olua_newindexerror);
    oluacls_enum(L, "AppVersion", (lua_Integer)OpenXLSX::XLProperty::AppVersion);
    oluacls_enum(L, "Application", (lua_Integer)OpenXLSX::XLProperty::Application);
    oluacls_enum(L, "Category", (lua_Integer)OpenXLSX::XLProperty::Category);
    oluacls_enum(L, "Company", (lua_Integer)OpenXLSX::XLProperty::Company);
    oluacls_enum(L, "CreationDate", (lua_Integer)OpenXLSX::XLProperty::CreationDate);
    oluacls_enum(L, "Creator", (lua_Integer)OpenXLSX::XLProperty::Creator);
    oluacls_enum(L, "Description", (lua_Integer)OpenXLSX::XLProperty::Description);
    oluacls_enum(L, "DocSecurity", (lua_Integer)OpenXLSX::XLProperty::DocSecurity);
    oluacls_enum(L, "HyperlinkBase", (lua_Integer)OpenXLSX::XLProperty::HyperlinkBase);
    oluacls_enum(L, "HyperlinksChanged", (lua_Integer)OpenXLSX::XLProperty::HyperlinksChanged);
    oluacls_enum(L, "Keywords", (lua_Integer)OpenXLSX::XLProperty::Keywords);
    oluacls_enum(L, "LastModifiedBy", (lua_Integer)OpenXLSX::XLProperty::LastModifiedBy);
    oluacls_enum(L, "LastPrinted", (lua_Integer)OpenXLSX::XLProperty::LastPrinted);
    oluacls_enum(L, "LinksUpToDate", (lua_Integer)OpenXLSX::XLProperty::LinksUpToDate);
    oluacls_enum(L, "Manager", (lua_Integer)OpenXLSX::XLProperty::Manager);
    oluacls_enum(L, "ModificationDate", (lua_Integer)OpenXLSX::XLProperty::ModificationDate);
    oluacls_enum(L, "ScaleCrop", (lua_Integer)OpenXLSX::XLProperty::ScaleCrop);
    oluacls_enum(L, "SharedDoc", (lua_Integer)OpenXLSX::XLProperty::SharedDoc);
    oluacls_enum(L, "Subject", (lua_Integer)OpenXLSX::XLProperty::Subject);
    oluacls_enum(L, "Title", (lua_Integer)OpenXLSX::XLProperty::Title);

    return 1;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_openxlsx_XLProperty(lua_State *L)
{
    olua_require(L, ".olua.module.openxlsx",  _olua_module_openxlsx);
    if (!olua_getclass(L, "openxlsx.XLProperty")) {
        luaL_error(L, "class not found: OpenXLSX::XLProperty");
    }
    return 1;
}
OLUA_END_DECLS

static int _olua_cls_openxlsx_XLQueryType(lua_State *L)
{
    oluacls_class<OpenXLSX::XLQueryType>(L, "openxlsx.XLQueryType");
    oluacls_func(L, "__index", olua_indexerror);
    oluacls_func(L, "__newindex", olua_newindexerror);
    oluacls_enum(L, "QuerySharedStrings", (lua_Integer)OpenXLSX::XLQueryType::QuerySharedStrings);
    oluacls_enum(L, "QuerySheetID", (lua_Integer)OpenXLSX::XLQueryType::QuerySheetID);
    oluacls_enum(L, "QuerySheetIndex", (lua_Integer)OpenXLSX::XLQueryType::QuerySheetIndex);
    oluacls_enum(L, "QuerySheetIsActive", (lua_Integer)OpenXLSX::XLQueryType::QuerySheetIsActive);
    oluacls_enum(L, "QuerySheetName", (lua_Integer)OpenXLSX::XLQueryType::QuerySheetName);
    oluacls_enum(L, "QuerySheetRelsID", (lua_Integer)OpenXLSX::XLQueryType::QuerySheetRelsID);
    oluacls_enum(L, "QuerySheetRelsTarget", (lua_Integer)OpenXLSX::XLQueryType::QuerySheetRelsTarget);
    oluacls_enum(L, "QuerySheetType", (lua_Integer)OpenXLSX::XLQueryType::QuerySheetType);
    oluacls_enum(L, "QuerySheetVisibility", (lua_Integer)OpenXLSX::XLQueryType::QuerySheetVisibility);
    oluacls_enum(L, "QueryXmlData", (lua_Integer)OpenXLSX::XLQueryType::QueryXmlData);

    return 1;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_openxlsx_XLQueryType(lua_State *L)
{
    olua_require(L, ".olua.module.openxlsx",  _olua_module_openxlsx);
    if (!olua_getclass(L, "openxlsx.XLQueryType")) {
        luaL_error(L, "class not found: OpenXLSX::XLQueryType");
    }
    return 1;
}
OLUA_END_DECLS

static int _olua_cls_openxlsx_XLSheetType(lua_State *L)
{
    oluacls_class<OpenXLSX::XLSheetType>(L, "openxlsx.XLSheetType");
    oluacls_func(L, "__index", olua_indexerror);
    oluacls_func(L, "__newindex", olua_newindexerror);
    oluacls_enum(L, "Chartsheet", (lua_Integer)OpenXLSX::XLSheetType::Chartsheet);
    oluacls_enum(L, "Dialogsheet", (lua_Integer)OpenXLSX::XLSheetType::Dialogsheet);
    oluacls_enum(L, "Macrosheet", (lua_Integer)OpenXLSX::XLSheetType::Macrosheet);
    oluacls_enum(L, "Worksheet", (lua_Integer)OpenXLSX::XLSheetType::Worksheet);

    return 1;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_openxlsx_XLSheetType(lua_State *L)
{
    olua_require(L, ".olua.module.openxlsx",  _olua_module_openxlsx);
    if (!olua_getclass(L, "openxlsx.XLSheetType")) {
        luaL_error(L, "class not found: OpenXLSX::XLSheetType");
    }
    return 1;
}
OLUA_END_DECLS

static int _olua_cls_openxlsx_XLValueType(lua_State *L)
{
    oluacls_class<OpenXLSX::XLValueType>(L, "openxlsx.XLValueType");
    oluacls_func(L, "__index", olua_indexerror);
    oluacls_func(L, "__newindex", olua_newindexerror);
    oluacls_enum(L, "Boolean", (lua_Integer)OpenXLSX::XLValueType::Boolean);
    oluacls_enum(L, "Empty", (lua_Integer)OpenXLSX::XLValueType::Empty);
    oluacls_enum(L, "Error", (lua_Integer)OpenXLSX::XLValueType::Error);
    oluacls_enum(L, "Float", (lua_Integer)OpenXLSX::XLValueType::Float);
    oluacls_enum(L, "Integer", (lua_Integer)OpenXLSX::XLValueType::Integer);
    oluacls_enum(L, "String", (lua_Integer)OpenXLSX::XLValueType::String);

    return 1;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_openxlsx_XLValueType(lua_State *L)
{
    olua_require(L, ".olua.module.openxlsx",  _olua_module_openxlsx);
    if (!olua_getclass(L, "openxlsx.XLValueType")) {
        luaL_error(L, "class not found: OpenXLSX::XLValueType");
    }
    return 1;
}
OLUA_END_DECLS

static int _olua_fun_OpenXLSX_XLCoordinates___gc(lua_State *L)
{
    try {
        olua_startinvoke(L);
        auto self = (OpenXLSX::XLCoordinates *)olua_toobj(L, 1, "openxlsx.XLCoordinates");
        olua_postgc(L, self);
        olua_endinvoke(L);
        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCoordinates::__gc(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_cls_openxlsx_XLCoordinates(lua_State *L)
{
    oluacls_class<OpenXLSX::XLCoordinates>(L, "openxlsx.XLCoordinates");
    oluacls_func(L, "__gc", _olua_fun_OpenXLSX_XLCoordinates___gc);

    return 1;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_openxlsx_XLCoordinates(lua_State *L)
{
    olua_require(L, ".olua.module.openxlsx",  _olua_module_openxlsx);
    if (!olua_getclass(L, "openxlsx.XLCoordinates")) {
        luaL_error(L, "class not found: OpenXLSX::XLCoordinates");
    }
    return 1;
}
OLUA_END_DECLS

static int _olua_fun_OpenXLSX_XLCellRange___gc(lua_State *L)
{
    try {
        olua_startinvoke(L);
        auto self = (OpenXLSX::XLCellRange *)olua_toobj(L, 1, "openxlsx.XLCellRange");
        olua_postgc(L, self);
        olua_endinvoke(L);
        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCellRange::__gc(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCellRange___pairs(lua_State *L)
{
    try {
        olua_startinvoke(L);
        auto self = olua_toobj<OpenXLSX::XLCellRange>(L, 1);
        int ret = olua_pairs<OpenXLSX::XLCellRange, OpenXLSX::XLCellIterator>(L, self, false);
        olua_endinvoke(L);
        return ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCellRange::__pairs(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCellRange_clear(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLCellRange *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLCellRange");

        // void clear()
        self->clear();

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCellRange::clear(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCellRange_numColumns(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLCellRange *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLCellRange");

        // uint16_t numColumns()
        uint16_t ret = self->numColumns();
        int num_ret = olua_push_integer(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCellRange::numColumns(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCellRange_numRows(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLCellRange *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLCellRange");

        // uint32_t numRows()
        uint32_t ret = self->numRows();
        int num_ret = olua_push_integer(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCellRange::numRows(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_cls_openxlsx_XLCellRange(lua_State *L)
{
    oluacls_class<OpenXLSX::XLCellRange>(L, "openxlsx.XLCellRange");
    oluacls_func(L, "__gc", _olua_fun_OpenXLSX_XLCellRange___gc);
    oluacls_func(L, "__pairs", _olua_fun_OpenXLSX_XLCellRange___pairs);
    oluacls_func(L, "clear", _olua_fun_OpenXLSX_XLCellRange_clear);
    oluacls_func(L, "numColumns", _olua_fun_OpenXLSX_XLCellRange_numColumns);
    oluacls_func(L, "numRows", _olua_fun_OpenXLSX_XLCellRange_numRows);

    return 1;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_openxlsx_XLCellRange(lua_State *L)
{
    olua_require(L, ".olua.module.openxlsx",  _olua_module_openxlsx);
    if (!olua_getclass(L, "openxlsx.XLCellRange")) {
        luaL_error(L, "class not found: OpenXLSX::XLCellRange");
    }
    return 1;
}
OLUA_END_DECLS

static int _olua_fun_OpenXLSX_XLCellIterator___gc(lua_State *L)
{
    try {
        olua_startinvoke(L);
        auto self = (OpenXLSX::XLCellIterator *)olua_toobj(L, 1, "openxlsx.XLCellIterator");
        olua_postgc(L, self);
        olua_endinvoke(L);
        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCellIterator::__gc(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_cls_openxlsx_XLCellIterator(lua_State *L)
{
    oluacls_class<OpenXLSX::XLCellIterator>(L, "openxlsx.XLCellIterator");
    oluacls_func(L, "__gc", _olua_fun_OpenXLSX_XLCellIterator___gc);

    return 1;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_openxlsx_XLCellIterator(lua_State *L)
{
    olua_require(L, ".olua.module.openxlsx",  _olua_module_openxlsx);
    if (!olua_getclass(L, "openxlsx.XLCellIterator")) {
        luaL_error(L, "class not found: OpenXLSX::XLCellIterator");
    }
    return 1;
}
OLUA_END_DECLS

static int _olua_fun_OpenXLSX_XLRowRange___gc(lua_State *L)
{
    try {
        olua_startinvoke(L);
        auto self = (OpenXLSX::XLRowRange *)olua_toobj(L, 1, "openxlsx.XLRowRange");
        olua_postgc(L, self);
        olua_endinvoke(L);
        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLRowRange::__gc(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLRowRange___pairs(lua_State *L)
{
    try {
        olua_startinvoke(L);
        auto self = olua_toobj<OpenXLSX::XLRowRange>(L, 1);
        int ret = olua_pairs<OpenXLSX::XLRowRange, OpenXLSX::XLRowIterator>(L, self, false);
        olua_endinvoke(L);
        return ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLRowRange::__pairs(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLRowRange_rowCount(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLRowRange *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLRowRange");

        // uint32_t rowCount()
        uint32_t ret = self->rowCount();
        int num_ret = olua_push_integer(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLRowRange::rowCount(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_cls_openxlsx_XLRowRange(lua_State *L)
{
    oluacls_class<OpenXLSX::XLRowRange>(L, "openxlsx.XLRowRange");
    oluacls_func(L, "__gc", _olua_fun_OpenXLSX_XLRowRange___gc);
    oluacls_func(L, "__pairs", _olua_fun_OpenXLSX_XLRowRange___pairs);
    oluacls_func(L, "rowCount", _olua_fun_OpenXLSX_XLRowRange_rowCount);

    return 1;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_openxlsx_XLRowRange(lua_State *L)
{
    olua_require(L, ".olua.module.openxlsx",  _olua_module_openxlsx);
    if (!olua_getclass(L, "openxlsx.XLRowRange")) {
        luaL_error(L, "class not found: OpenXLSX::XLRowRange");
    }
    return 1;
}
OLUA_END_DECLS

static int _olua_fun_OpenXLSX_XLRowIterator___gc(lua_State *L)
{
    try {
        olua_startinvoke(L);
        auto self = (OpenXLSX::XLRowIterator *)olua_toobj(L, 1, "openxlsx.XLRowIterator");
        olua_postgc(L, self);
        olua_endinvoke(L);
        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLRowIterator::__gc(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_cls_openxlsx_XLRowIterator(lua_State *L)
{
    oluacls_class<OpenXLSX::XLRowIterator>(L, "openxlsx.XLRowIterator");
    oluacls_func(L, "__gc", _olua_fun_OpenXLSX_XLRowIterator___gc);

    return 1;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_openxlsx_XLRowIterator(lua_State *L)
{
    olua_require(L, ".olua.module.openxlsx",  _olua_module_openxlsx);
    if (!olua_getclass(L, "openxlsx.XLRowIterator")) {
        luaL_error(L, "class not found: OpenXLSX::XLRowIterator");
    }
    return 1;
}
OLUA_END_DECLS

static int _olua_fun_OpenXLSX_XLRowDataRange___gc(lua_State *L)
{
    try {
        olua_startinvoke(L);
        auto self = (OpenXLSX::XLRowDataRange *)olua_toobj(L, 1, "openxlsx.XLRowDataRange");
        olua_postgc(L, self);
        olua_endinvoke(L);
        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLRowDataRange::__gc(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLRowDataRange___pairs(lua_State *L)
{
    try {
        olua_startinvoke(L);
        auto self = olua_toobj<OpenXLSX::XLRowDataRange>(L, 1);
        int ret = olua_pairs<OpenXLSX::XLRowDataRange, OpenXLSX::XLRowDataIterator>(L, self, false);
        olua_endinvoke(L);
        return ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLRowDataRange::__pairs(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLRowDataRange_size(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLRowDataRange *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLRowDataRange");

        // uint16_t size()
        uint16_t ret = self->size();
        int num_ret = olua_push_integer(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLRowDataRange::size(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_cls_openxlsx_XLRowDataRange(lua_State *L)
{
    oluacls_class<OpenXLSX::XLRowDataRange>(L, "openxlsx.XLRowDataRange");
    oluacls_func(L, "__gc", _olua_fun_OpenXLSX_XLRowDataRange___gc);
    oluacls_func(L, "__pairs", _olua_fun_OpenXLSX_XLRowDataRange___pairs);
    oluacls_func(L, "size", _olua_fun_OpenXLSX_XLRowDataRange_size);

    return 1;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_openxlsx_XLRowDataRange(lua_State *L)
{
    olua_require(L, ".olua.module.openxlsx",  _olua_module_openxlsx);
    if (!olua_getclass(L, "openxlsx.XLRowDataRange")) {
        luaL_error(L, "class not found: OpenXLSX::XLRowDataRange");
    }
    return 1;
}
OLUA_END_DECLS

static int _olua_fun_OpenXLSX_XLRowDataIterator___gc(lua_State *L)
{
    try {
        olua_startinvoke(L);
        auto self = (OpenXLSX::XLRowDataIterator *)olua_toobj(L, 1, "openxlsx.XLRowDataIterator");
        olua_postgc(L, self);
        olua_endinvoke(L);
        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLRowDataIterator::__gc(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_cls_openxlsx_XLRowDataIterator(lua_State *L)
{
    oluacls_class<OpenXLSX::XLRowDataIterator>(L, "openxlsx.XLRowDataIterator");
    oluacls_func(L, "__gc", _olua_fun_OpenXLSX_XLRowDataIterator___gc);

    return 1;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_openxlsx_XLRowDataIterator(lua_State *L)
{
    olua_require(L, ".olua.module.openxlsx",  _olua_module_openxlsx);
    if (!olua_getclass(L, "openxlsx.XLRowDataIterator")) {
        luaL_error(L, "class not found: OpenXLSX::XLRowDataIterator");
    }
    return 1;
}
OLUA_END_DECLS

static int _olua_fun_OpenXLSX_XLRowDataProxy___gc(lua_State *L)
{
    try {
        olua_startinvoke(L);
        auto self = (OpenXLSX::XLRowDataProxy *)olua_toobj(L, 1, "openxlsx.XLRowDataProxy");
        olua_postgc(L, self);
        olua_endinvoke(L);
        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLRowDataProxy::__gc(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLRowDataProxy_clear(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLRowDataProxy *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLRowDataProxy");

        // void clear()
        self->clear();

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLRowDataProxy::clear(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_cls_openxlsx_XLRowDataProxy(lua_State *L)
{
    oluacls_class<OpenXLSX::XLRowDataProxy>(L, "openxlsx.XLRowDataProxy");
    oluacls_func(L, "__gc", _olua_fun_OpenXLSX_XLRowDataProxy___gc);
    oluacls_func(L, "clear", _olua_fun_OpenXLSX_XLRowDataProxy_clear);

    return 1;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_openxlsx_XLRowDataProxy(lua_State *L)
{
    olua_require(L, ".olua.module.openxlsx",  _olua_module_openxlsx);
    if (!olua_getclass(L, "openxlsx.XLRowDataProxy")) {
        luaL_error(L, "class not found: OpenXLSX::XLRowDataProxy");
    }
    return 1;
}
OLUA_END_DECLS

static int _olua_fun_OpenXLSX_IZipArchive___gc(lua_State *L)
{
    try {
        olua_startinvoke(L);
        auto self = (OpenXLSX::IZipArchive *)olua_toobj(L, 1, "openxlsx.IZipArchive");
        olua_postgc(L, self);
        olua_endinvoke(L);
        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::IZipArchive::__gc(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_IZipArchive_addEntry(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::IZipArchive *self = nullptr;
        std::string arg1;       /** name */
        std::string arg2;       /** data */

        olua_to_object(L, 1, &self, "openxlsx.IZipArchive");
        olua_check_string(L, 2, &arg1);
        olua_check_string(L, 3, &arg2);

        // void addEntry(const std::string &name, const std::string &data)
        self->addEntry(arg1, arg2);

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::IZipArchive::addEntry(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_IZipArchive_close(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::IZipArchive *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.IZipArchive");

        // void close()
        self->close();

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::IZipArchive::close(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_IZipArchive_deleteEntry(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::IZipArchive *self = nullptr;
        std::string arg1;       /** entryName */

        olua_to_object(L, 1, &self, "openxlsx.IZipArchive");
        olua_check_string(L, 2, &arg1);

        // void deleteEntry(const std::string &entryName)
        self->deleteEntry(arg1);

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::IZipArchive::deleteEntry(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_IZipArchive_getEntry(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::IZipArchive *self = nullptr;
        std::string arg1;       /** name */

        olua_to_object(L, 1, &self, "openxlsx.IZipArchive");
        olua_check_string(L, 2, &arg1);

        // std::string getEntry(const std::string &name)
        std::string ret = self->getEntry(arg1);
        int num_ret = olua_push_string(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::IZipArchive::getEntry(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_IZipArchive_hasEntry(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::IZipArchive *self = nullptr;
        std::string arg1;       /** entryName */

        olua_to_object(L, 1, &self, "openxlsx.IZipArchive");
        olua_check_string(L, 2, &arg1);

        // bool hasEntry(const std::string &entryName)
        bool ret = self->hasEntry(arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::IZipArchive::hasEntry(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_IZipArchive_isOpen(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::IZipArchive *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.IZipArchive");

        // bool isOpen()
        bool ret = self->isOpen();
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::IZipArchive::isOpen(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_IZipArchive_isValid(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::IZipArchive *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.IZipArchive");

        // bool isValid()
        bool ret = self->isValid();
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::IZipArchive::isValid(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_IZipArchive_new(lua_State *L)
{
    try {
        olua_startinvoke(L);

        // OpenXLSX::IZipArchive()
        OpenXLSX::IZipArchive *ret = new OpenXLSX::IZipArchive();
        int num_ret = olua_push_object(L, ret, "openxlsx.IZipArchive");
        olua_postnew(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::IZipArchive::new(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_IZipArchive_open(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::IZipArchive *self = nullptr;
        std::string arg1;       /** fileName */

        olua_to_object(L, 1, &self, "openxlsx.IZipArchive");
        olua_check_string(L, 2, &arg1);

        // void open(const std::string &fileName)
        self->open(arg1);

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::IZipArchive::open(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_IZipArchive_save(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::IZipArchive *self = nullptr;
        std::string arg1;       /** path */

        olua_to_object(L, 1, &self, "openxlsx.IZipArchive");
        olua_check_string(L, 2, &arg1);

        // void save(const std::string &path)
        self->save(arg1);

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::IZipArchive::save(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_cls_openxlsx_IZipArchive(lua_State *L)
{
    oluacls_class<OpenXLSX::IZipArchive>(L, "openxlsx.IZipArchive");
    oluacls_func(L, "__gc", _olua_fun_OpenXLSX_IZipArchive___gc);
    oluacls_func(L, "addEntry", _olua_fun_OpenXLSX_IZipArchive_addEntry);
    oluacls_func(L, "close", _olua_fun_OpenXLSX_IZipArchive_close);
    oluacls_func(L, "deleteEntry", _olua_fun_OpenXLSX_IZipArchive_deleteEntry);
    oluacls_func(L, "getEntry", _olua_fun_OpenXLSX_IZipArchive_getEntry);
    oluacls_func(L, "hasEntry", _olua_fun_OpenXLSX_IZipArchive_hasEntry);
    oluacls_func(L, "isOpen", _olua_fun_OpenXLSX_IZipArchive_isOpen);
    oluacls_func(L, "isValid", _olua_fun_OpenXLSX_IZipArchive_isValid);
    oluacls_func(L, "new", _olua_fun_OpenXLSX_IZipArchive_new);
    oluacls_func(L, "open", _olua_fun_OpenXLSX_IZipArchive_open);
    oluacls_func(L, "save", _olua_fun_OpenXLSX_IZipArchive_save);
    oluacls_prop(L, "valid", _olua_fun_OpenXLSX_IZipArchive_isValid, nullptr);

    return 1;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_openxlsx_IZipArchive(lua_State *L)
{
    olua_require(L, ".olua.module.openxlsx",  _olua_module_openxlsx);
    if (!olua_getclass(L, "openxlsx.IZipArchive")) {
        luaL_error(L, "class not found: OpenXLSX::IZipArchive");
    }
    return 1;
}
OLUA_END_DECLS

static int _olua_fun_OpenXLSX_XLCommand___gc(lua_State *L)
{
    try {
        olua_startinvoke(L);
        auto self = (OpenXLSX::XLCommand *)olua_toobj(L, 1, "openxlsx.XLCommand");
        olua_postgc(L, self);
        olua_endinvoke(L);
        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCommand::__gc(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCommand_getParamBool(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLCommand *self = nullptr;
        std::string arg1;       /** param */

        olua_to_object(L, 1, &self, "openxlsx.XLCommand");
        olua_check_string(L, 2, &arg1);

        // @template(getParam<bool>) bool getParamBool(const std::string &param)
        bool ret = self->getParam<bool>(arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCommand::getParamBool(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCommand_getParamInt(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLCommand *self = nullptr;
        std::string arg1;       /** param */

        olua_to_object(L, 1, &self, "openxlsx.XLCommand");
        olua_check_string(L, 2, &arg1);

        // @template(getParam<uint64_t>) uint64_t getParamInt(const std::string &param)
        uint64_t ret = self->getParam<uint64_t>(arg1);
        int num_ret = olua_push_integer(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCommand::getParamInt(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCommand_getParamNumber(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLCommand *self = nullptr;
        std::string arg1;       /** param */

        olua_to_object(L, 1, &self, "openxlsx.XLCommand");
        olua_check_string(L, 2, &arg1);

        // @template(getParam<double>) double getParamNumber(const std::string &param)
        double ret = self->getParam<double>(arg1);
        int num_ret = olua_push_number(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCommand::getParamNumber(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCommand_getParamString(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLCommand *self = nullptr;
        std::string arg1;       /** param */

        olua_to_object(L, 1, &self, "openxlsx.XLCommand");
        olua_check_string(L, 2, &arg1);

        // @template(getParam<std::string>) std::string getParamString(const std::string &param)
        std::string ret = self->getParam<std::string>(arg1);
        int num_ret = olua_push_string(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCommand::getParamString(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCommand_new(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLCommandType arg1 = (OpenXLSX::XLCommandType)0;       /** type */

        olua_check_enum(L, 1, &arg1);

        // OpenXLSX::XLCommand(OpenXLSX::XLCommandType type)
        OpenXLSX::XLCommand *ret = new OpenXLSX::XLCommand(arg1);
        int num_ret = olua_push_object(L, ret, "openxlsx.XLCommand");
        olua_postnew(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCommand::new(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCommand_setParamBool(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLCommand *self = nullptr;
        std::string arg1;       /** param */
        bool arg2 = false;       /** value */

        olua_to_object(L, 1, &self, "openxlsx.XLCommand");
        olua_check_string(L, 2, &arg1);
        olua_check_bool(L, 3, &arg2);

        // @template(setParam<bool>) OpenXLSX::XLCommand &setParamBool(const std::string &param, bool value)
        OpenXLSX::XLCommand &ret = self->setParam<bool>(arg1, arg2);
        int num_ret = olua_push_object(L, &ret, "openxlsx.XLCommand");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCommand::setParamBool(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCommand_setParamInt(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLCommand *self = nullptr;
        std::string arg1;       /** param */
        uint64_t arg2 = 0;       /** value */

        olua_to_object(L, 1, &self, "openxlsx.XLCommand");
        olua_check_string(L, 2, &arg1);
        olua_check_integer(L, 3, &arg2);

        // @template(setParam<uint64_t>) OpenXLSX::XLCommand &setParamInt(const std::string &param, uint64_t value)
        OpenXLSX::XLCommand &ret = self->setParam<uint64_t>(arg1, arg2);
        int num_ret = olua_push_object(L, &ret, "openxlsx.XLCommand");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCommand::setParamInt(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCommand_setParamNumber(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLCommand *self = nullptr;
        std::string arg1;       /** param */
        double arg2 = 0;       /** value */

        olua_to_object(L, 1, &self, "openxlsx.XLCommand");
        olua_check_string(L, 2, &arg1);
        olua_check_number(L, 3, &arg2);

        // @template(setParam<double>) OpenXLSX::XLCommand &setParamNumber(const std::string &param, double value)
        OpenXLSX::XLCommand &ret = self->setParam<double>(arg1, arg2);
        int num_ret = olua_push_object(L, &ret, "openxlsx.XLCommand");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCommand::setParamNumber(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCommand_setParamString(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLCommand *self = nullptr;
        std::string arg1;       /** param */
        std::string arg2;       /** value */

        olua_to_object(L, 1, &self, "openxlsx.XLCommand");
        olua_check_string(L, 2, &arg1);
        olua_check_string(L, 3, &arg2);

        // @template(setParam<std::string>) OpenXLSX::XLCommand &setParamString(const std::string &param, std::string value)
        OpenXLSX::XLCommand &ret = self->setParam<std::string>(arg1, arg2);
        int num_ret = olua_push_object(L, &ret, "openxlsx.XLCommand");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCommand::setParamString(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCommand_type(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLCommand *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLCommand");

        // OpenXLSX::XLCommandType type()
        OpenXLSX::XLCommandType ret = self->type();
        int num_ret = olua_push_enum(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCommand::type(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_cls_openxlsx_XLCommand(lua_State *L)
{
    oluacls_class<OpenXLSX::XLCommand>(L, "openxlsx.XLCommand");
    oluacls_func(L, "__gc", _olua_fun_OpenXLSX_XLCommand___gc);
    oluacls_func(L, "getParamBool", _olua_fun_OpenXLSX_XLCommand_getParamBool);
    oluacls_func(L, "getParamInt", _olua_fun_OpenXLSX_XLCommand_getParamInt);
    oluacls_func(L, "getParamNumber", _olua_fun_OpenXLSX_XLCommand_getParamNumber);
    oluacls_func(L, "getParamString", _olua_fun_OpenXLSX_XLCommand_getParamString);
    oluacls_func(L, "new", _olua_fun_OpenXLSX_XLCommand_new);
    oluacls_func(L, "setParamBool", _olua_fun_OpenXLSX_XLCommand_setParamBool);
    oluacls_func(L, "setParamInt", _olua_fun_OpenXLSX_XLCommand_setParamInt);
    oluacls_func(L, "setParamNumber", _olua_fun_OpenXLSX_XLCommand_setParamNumber);
    oluacls_func(L, "setParamString", _olua_fun_OpenXLSX_XLCommand_setParamString);
    oluacls_func(L, "type", _olua_fun_OpenXLSX_XLCommand_type);

    return 1;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_openxlsx_XLCommand(lua_State *L)
{
    olua_require(L, ".olua.module.openxlsx",  _olua_module_openxlsx);
    if (!olua_getclass(L, "openxlsx.XLCommand")) {
        luaL_error(L, "class not found: OpenXLSX::XLCommand");
    }
    return 1;
}
OLUA_END_DECLS

static int _olua_fun_OpenXLSX_XLXmlFile___gc(lua_State *L)
{
    try {
        olua_startinvoke(L);
        auto self = (OpenXLSX::XLXmlFile *)olua_toobj(L, 1, "openxlsx.XLXmlFile");
        olua_postgc(L, self);
        olua_endinvoke(L);
        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLXmlFile::__gc(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLXmlFile_new$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        // OpenXLSX::XLXmlFile()
        OpenXLSX::XLXmlFile *ret = new OpenXLSX::XLXmlFile();
        int num_ret = olua_push_object(L, ret, "openxlsx.XLXmlFile");
        olua_postnew(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLXmlFile::new(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLXmlFile_new$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLXmlData *arg1 = nullptr;       /** xmlData */

        olua_check_object(L, 1, &arg1, "openxlsx.XLXmlData");

        // OpenXLSX::XLXmlFile(OpenXLSX::XLXmlData *xmlData)
        OpenXLSX::XLXmlFile *ret = new OpenXLSX::XLXmlFile(arg1);
        int num_ret = olua_push_object(L, ret, "openxlsx.XLXmlFile");
        olua_postnew(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLXmlFile::new(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLXmlFile_new(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 0) {
        // OpenXLSX::XLXmlFile()
        return _olua_fun_OpenXLSX_XLXmlFile_new$1(L);
    }

    if (num_args == 1) {
        // if ((olua_is_object(L, 1, "openxlsx.XLXmlData"))) {
            // OpenXLSX::XLXmlFile(OpenXLSX::XLXmlData *xmlData)
            return _olua_fun_OpenXLSX_XLXmlFile_new$2(L);
        // }
    }

    luaL_error(L, "method 'OpenXLSX::XLXmlFile::new' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_cls_openxlsx_XLXmlFile(lua_State *L)
{
    oluacls_class<OpenXLSX::XLXmlFile>(L, "openxlsx.XLXmlFile");
    oluacls_func(L, "__gc", _olua_fun_OpenXLSX_XLXmlFile___gc);
    oluacls_func(L, "new", _olua_fun_OpenXLSX_XLXmlFile_new);

    return 1;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_openxlsx_XLXmlFile(lua_State *L)
{
    olua_require(L, ".olua.module.openxlsx",  _olua_module_openxlsx);
    if (!olua_getclass(L, "openxlsx.XLXmlFile")) {
        luaL_error(L, "class not found: OpenXLSX::XLXmlFile");
    }
    return 1;
}
OLUA_END_DECLS

static int _olua_fun_OpenXLSX_XLQuery___gc(lua_State *L)
{
    try {
        olua_startinvoke(L);
        auto self = (OpenXLSX::XLQuery *)olua_toobj(L, 1, "openxlsx.XLQuery");
        olua_postgc(L, self);
        olua_endinvoke(L);
        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLQuery::__gc(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLQuery_getParamBool(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLQuery *self = nullptr;
        std::string arg1;       /** param */

        olua_to_object(L, 1, &self, "openxlsx.XLQuery");
        olua_check_string(L, 2, &arg1);

        // @template(getParam<bool>) bool getParamBool(const std::string &param)
        bool ret = self->getParam<bool>(arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLQuery::getParamBool(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLQuery_getParamInt(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLQuery *self = nullptr;
        std::string arg1;       /** param */

        olua_to_object(L, 1, &self, "openxlsx.XLQuery");
        olua_check_string(L, 2, &arg1);

        // @template(getParam<uint64_t>) uint64_t getParamInt(const std::string &param)
        uint64_t ret = self->getParam<uint64_t>(arg1);
        int num_ret = olua_push_integer(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLQuery::getParamInt(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLQuery_getParamNumber(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLQuery *self = nullptr;
        std::string arg1;       /** param */

        olua_to_object(L, 1, &self, "openxlsx.XLQuery");
        olua_check_string(L, 2, &arg1);

        // @template(getParam<double>) double getParamNumber(const std::string &param)
        double ret = self->getParam<double>(arg1);
        int num_ret = olua_push_number(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLQuery::getParamNumber(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLQuery_getParamString(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLQuery *self = nullptr;
        std::string arg1;       /** param */

        olua_to_object(L, 1, &self, "openxlsx.XLQuery");
        olua_check_string(L, 2, &arg1);

        // @template(getParam<std::string>) std::string getParamString(const std::string &param)
        std::string ret = self->getParam<std::string>(arg1);
        int num_ret = olua_push_string(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLQuery::getParamString(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLQuery_new(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLQueryType arg1 = (OpenXLSX::XLQueryType)0;       /** type */

        olua_check_enum(L, 1, &arg1);

        // OpenXLSX::XLQuery(OpenXLSX::XLQueryType type)
        OpenXLSX::XLQuery *ret = new OpenXLSX::XLQuery(arg1);
        int num_ret = olua_push_object(L, ret, "openxlsx.XLQuery");
        olua_postnew(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLQuery::new(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLQuery_setParamBool(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLQuery *self = nullptr;
        std::string arg1;       /** param */
        bool arg2 = false;       /** value */

        olua_to_object(L, 1, &self, "openxlsx.XLQuery");
        olua_check_string(L, 2, &arg1);
        olua_check_bool(L, 3, &arg2);

        // @template(setParam<bool>) OpenXLSX::XLQuery &setParamBool(const std::string &param, bool value)
        OpenXLSX::XLQuery &ret = self->setParam<bool>(arg1, arg2);
        int num_ret = olua_push_object(L, &ret, "openxlsx.XLQuery");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLQuery::setParamBool(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLQuery_setParamInt(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLQuery *self = nullptr;
        std::string arg1;       /** param */
        uint64_t arg2 = 0;       /** value */

        olua_to_object(L, 1, &self, "openxlsx.XLQuery");
        olua_check_string(L, 2, &arg1);
        olua_check_integer(L, 3, &arg2);

        // @template(setParam<uint64_t>) OpenXLSX::XLQuery &setParamInt(const std::string &param, uint64_t value)
        OpenXLSX::XLQuery &ret = self->setParam<uint64_t>(arg1, arg2);
        int num_ret = olua_push_object(L, &ret, "openxlsx.XLQuery");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLQuery::setParamInt(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLQuery_setParamNumber(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLQuery *self = nullptr;
        std::string arg1;       /** param */
        double arg2 = 0;       /** value */

        olua_to_object(L, 1, &self, "openxlsx.XLQuery");
        olua_check_string(L, 2, &arg1);
        olua_check_number(L, 3, &arg2);

        // @template(setParam<double>) OpenXLSX::XLQuery &setParamNumber(const std::string &param, double value)
        OpenXLSX::XLQuery &ret = self->setParam<double>(arg1, arg2);
        int num_ret = olua_push_object(L, &ret, "openxlsx.XLQuery");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLQuery::setParamNumber(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLQuery_setParamString(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLQuery *self = nullptr;
        std::string arg1;       /** param */
        std::string arg2;       /** value */

        olua_to_object(L, 1, &self, "openxlsx.XLQuery");
        olua_check_string(L, 2, &arg1);
        olua_check_string(L, 3, &arg2);

        // @template(setParam<std::string>) OpenXLSX::XLQuery &setParamString(const std::string &param, std::string value)
        OpenXLSX::XLQuery &ret = self->setParam<std::string>(arg1, arg2);
        int num_ret = olua_push_object(L, &ret, "openxlsx.XLQuery");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLQuery::setParamString(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLQuery_type(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLQuery *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLQuery");

        // OpenXLSX::XLQueryType type()
        OpenXLSX::XLQueryType ret = self->type();
        int num_ret = olua_push_enum(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLQuery::type(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_cls_openxlsx_XLQuery(lua_State *L)
{
    oluacls_class<OpenXLSX::XLQuery>(L, "openxlsx.XLQuery");
    oluacls_func(L, "__gc", _olua_fun_OpenXLSX_XLQuery___gc);
    oluacls_func(L, "getParamBool", _olua_fun_OpenXLSX_XLQuery_getParamBool);
    oluacls_func(L, "getParamInt", _olua_fun_OpenXLSX_XLQuery_getParamInt);
    oluacls_func(L, "getParamNumber", _olua_fun_OpenXLSX_XLQuery_getParamNumber);
    oluacls_func(L, "getParamString", _olua_fun_OpenXLSX_XLQuery_getParamString);
    oluacls_func(L, "new", _olua_fun_OpenXLSX_XLQuery_new);
    oluacls_func(L, "setParamBool", _olua_fun_OpenXLSX_XLQuery_setParamBool);
    oluacls_func(L, "setParamInt", _olua_fun_OpenXLSX_XLQuery_setParamInt);
    oluacls_func(L, "setParamNumber", _olua_fun_OpenXLSX_XLQuery_setParamNumber);
    oluacls_func(L, "setParamString", _olua_fun_OpenXLSX_XLQuery_setParamString);
    oluacls_func(L, "type", _olua_fun_OpenXLSX_XLQuery_type);

    return 1;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_openxlsx_XLQuery(lua_State *L)
{
    olua_require(L, ".olua.module.openxlsx",  _olua_module_openxlsx);
    if (!olua_getclass(L, "openxlsx.XLQuery")) {
        luaL_error(L, "class not found: OpenXLSX::XLQuery");
    }
    return 1;
}
OLUA_END_DECLS

static int _olua_fun_OpenXLSX_XLXmlData___gc(lua_State *L)
{
    try {
        olua_startinvoke(L);
        auto self = (OpenXLSX::XLXmlData *)olua_toobj(L, 1, "openxlsx.XLXmlData");
        olua_postgc(L, self);
        olua_endinvoke(L);
        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLXmlData::__gc(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLXmlData_getParentDoc(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLXmlData *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLXmlData");

        // OpenXLSX::XLDocument *getParentDoc()
        OpenXLSX::XLDocument *ret = self->getParentDoc();
        int num_ret = olua_push_object(L, ret, "openxlsx.XLDocument");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLXmlData::getParentDoc(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLXmlData_getRawData(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLXmlData *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLXmlData");

        // std::string getRawData()
        std::string ret = self->getRawData();
        int num_ret = olua_push_string(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLXmlData::getRawData(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLXmlData_getXmlID(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLXmlData *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLXmlData");

        // std::string getXmlID()
        std::string ret = self->getXmlID();
        int num_ret = olua_push_string(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLXmlData::getXmlID(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLXmlData_getXmlPath(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLXmlData *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLXmlData");

        // std::string getXmlPath()
        std::string ret = self->getXmlPath();
        int num_ret = olua_push_string(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLXmlData::getXmlPath(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLXmlData_getXmlType(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLXmlData *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLXmlData");

        // OpenXLSX::XLContentType getXmlType()
        OpenXLSX::XLContentType ret = self->getXmlType();
        int num_ret = olua_push_enum(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLXmlData::getXmlType(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLXmlData_new$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        // OpenXLSX::XLXmlData()
        OpenXLSX::XLXmlData *ret = new OpenXLSX::XLXmlData();
        int num_ret = olua_push_object(L, ret, "openxlsx.XLXmlData");
        olua_postnew(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLXmlData::new(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLXmlData_new$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLDocument *arg1 = nullptr;       /** parentDoc */
        std::string arg2;       /** xmlPath */
        std::string arg3;       /** xmlId */
        OpenXLSX::XLContentType arg4 = (OpenXLSX::XLContentType)0;       /** xmlType */

        olua_check_object(L, 1, &arg1, "openxlsx.XLDocument");
        olua_check_string(L, 2, &arg2);
        olua_check_string(L, 3, &arg3);
        olua_check_enum(L, 4, &arg4);

        // OpenXLSX::XLXmlData(OpenXLSX::XLDocument *parentDoc, const std::string &xmlPath, @optional const std::string &xmlId, @optional OpenXLSX::XLContentType xmlType)
        OpenXLSX::XLXmlData *ret = new OpenXLSX::XLXmlData(arg1, arg2, arg3, arg4);
        int num_ret = olua_push_object(L, ret, "openxlsx.XLXmlData");
        olua_postnew(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLXmlData::new(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLXmlData_new$3(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLDocument *arg1 = nullptr;       /** parentDoc */
        std::string arg2;       /** xmlPath */

        olua_check_object(L, 1, &arg1, "openxlsx.XLDocument");
        olua_check_string(L, 2, &arg2);

        // OpenXLSX::XLXmlData(OpenXLSX::XLDocument *parentDoc, const std::string &xmlPath)
        OpenXLSX::XLXmlData *ret = new OpenXLSX::XLXmlData(arg1, arg2);
        int num_ret = olua_push_object(L, ret, "openxlsx.XLXmlData");
        olua_postnew(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLXmlData::new(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLXmlData_new$4(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLDocument *arg1 = nullptr;       /** parentDoc */
        std::string arg2;       /** xmlPath */
        std::string arg3;       /** xmlId */

        olua_check_object(L, 1, &arg1, "openxlsx.XLDocument");
        olua_check_string(L, 2, &arg2);
        olua_check_string(L, 3, &arg3);

        // OpenXLSX::XLXmlData(OpenXLSX::XLDocument *parentDoc, const std::string &xmlPath, @optional const std::string &xmlId)
        OpenXLSX::XLXmlData *ret = new OpenXLSX::XLXmlData(arg1, arg2, arg3);
        int num_ret = olua_push_object(L, ret, "openxlsx.XLXmlData");
        olua_postnew(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLXmlData::new(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLXmlData_new(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 0) {
        // OpenXLSX::XLXmlData()
        return _olua_fun_OpenXLSX_XLXmlData_new$1(L);
    }

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "openxlsx.XLDocument")) && (olua_is_string(L, 2))) {
            // OpenXLSX::XLXmlData(OpenXLSX::XLDocument *parentDoc, const std::string &xmlPath)
            return _olua_fun_OpenXLSX_XLXmlData_new$3(L);
        // }
    }

    if (num_args == 3) {
        // if ((olua_is_object(L, 1, "openxlsx.XLDocument")) && (olua_is_string(L, 2)) && (olua_is_string(L, 3))) {
            // OpenXLSX::XLXmlData(OpenXLSX::XLDocument *parentDoc, const std::string &xmlPath, @optional const std::string &xmlId)
            return _olua_fun_OpenXLSX_XLXmlData_new$4(L);
        // }
    }

    if (num_args == 4) {
        // if ((olua_is_object(L, 1, "openxlsx.XLDocument")) && (olua_is_string(L, 2)) && (olua_is_string(L, 3)) && (olua_is_enum(L, 4))) {
            // OpenXLSX::XLXmlData(OpenXLSX::XLDocument *parentDoc, const std::string &xmlPath, @optional const std::string &xmlId, @optional OpenXLSX::XLContentType xmlType)
            return _olua_fun_OpenXLSX_XLXmlData_new$2(L);
        // }
    }

    luaL_error(L, "method 'OpenXLSX::XLXmlData::new' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_OpenXLSX_XLXmlData_setRawData(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLXmlData *self = nullptr;
        std::string arg1;       /** data */

        olua_to_object(L, 1, &self, "openxlsx.XLXmlData");
        olua_check_string(L, 2, &arg1);

        // void setRawData(const std::string &data)
        self->setRawData(arg1);

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLXmlData::setRawData(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_cls_openxlsx_XLXmlData(lua_State *L)
{
    oluacls_class<OpenXLSX::XLXmlData>(L, "openxlsx.XLXmlData");
    oluacls_func(L, "__gc", _olua_fun_OpenXLSX_XLXmlData___gc);
    oluacls_func(L, "getParentDoc", _olua_fun_OpenXLSX_XLXmlData_getParentDoc);
    oluacls_func(L, "getRawData", _olua_fun_OpenXLSX_XLXmlData_getRawData);
    oluacls_func(L, "getXmlID", _olua_fun_OpenXLSX_XLXmlData_getXmlID);
    oluacls_func(L, "getXmlPath", _olua_fun_OpenXLSX_XLXmlData_getXmlPath);
    oluacls_func(L, "getXmlType", _olua_fun_OpenXLSX_XLXmlData_getXmlType);
    oluacls_func(L, "new", _olua_fun_OpenXLSX_XLXmlData_new);
    oluacls_func(L, "setRawData", _olua_fun_OpenXLSX_XLXmlData_setRawData);
    oluacls_prop(L, "parentDoc", _olua_fun_OpenXLSX_XLXmlData_getParentDoc, nullptr);
    oluacls_prop(L, "rawData", _olua_fun_OpenXLSX_XLXmlData_getRawData, _olua_fun_OpenXLSX_XLXmlData_setRawData);
    oluacls_prop(L, "xmlID", _olua_fun_OpenXLSX_XLXmlData_getXmlID, nullptr);
    oluacls_prop(L, "xmlPath", _olua_fun_OpenXLSX_XLXmlData_getXmlPath, nullptr);
    oluacls_prop(L, "xmlType", _olua_fun_OpenXLSX_XLXmlData_getXmlType, nullptr);

    return 1;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_openxlsx_XLXmlData(lua_State *L)
{
    olua_require(L, ".olua.module.openxlsx",  _olua_module_openxlsx);
    if (!olua_getclass(L, "openxlsx.XLXmlData")) {
        luaL_error(L, "class not found: OpenXLSX::XLXmlData");
    }
    return 1;
}
OLUA_END_DECLS

static int _olua_fun_OpenXLSX_XLFormulaProxy___gc(lua_State *L)
{
    try {
        olua_startinvoke(L);
        auto self = (OpenXLSX::XLFormulaProxy *)olua_toobj(L, 1, "openxlsx.XLFormulaProxy");
        olua_postgc(L, self);
        olua_endinvoke(L);
        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLFormulaProxy::__gc(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLFormulaProxy_clear(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLFormulaProxy *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLFormulaProxy");

        // OpenXLSX::XLFormulaProxy &clear()
        OpenXLSX::XLFormulaProxy &ret = self->clear();
        int num_ret = olua_push_object(L, &ret, "openxlsx.XLFormulaProxy");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLFormulaProxy::clear(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLFormulaProxy_get(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLFormulaProxy *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLFormulaProxy");

        // std::string get()
        std::string ret = self->get();
        int num_ret = olua_push_string(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLFormulaProxy::get(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLFormulaProxy_setString(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLFormulaProxy *self = nullptr;
        std::string arg1;       /** formula */

        olua_to_object(L, 1, &self, "openxlsx.XLFormulaProxy");
        olua_check_string(L, 2, &arg1);

        // @template(set<std::string>) void setString(std::string formula)
        self->set<std::string>(arg1);

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLFormulaProxy::setString(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_cls_openxlsx_XLFormulaProxy(lua_State *L)
{
    oluacls_class<OpenXLSX::XLFormulaProxy>(L, "openxlsx.XLFormulaProxy");
    oluacls_func(L, "__gc", _olua_fun_OpenXLSX_XLFormulaProxy___gc);
    oluacls_func(L, "clear", _olua_fun_OpenXLSX_XLFormulaProxy_clear);
    oluacls_func(L, "get", _olua_fun_OpenXLSX_XLFormulaProxy_get);
    oluacls_func(L, "setString", _olua_fun_OpenXLSX_XLFormulaProxy_setString);

    return 1;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_openxlsx_XLFormulaProxy(lua_State *L)
{
    olua_require(L, ".olua.module.openxlsx",  _olua_module_openxlsx);
    if (!olua_getclass(L, "openxlsx.XLFormulaProxy")) {
        luaL_error(L, "class not found: OpenXLSX::XLFormulaProxy");
    }
    return 1;
}
OLUA_END_DECLS

static int _olua_fun_OpenXLSX_XLCellValueProxy___gc(lua_State *L)
{
    try {
        olua_startinvoke(L);
        auto self = (OpenXLSX::XLCellValueProxy *)olua_toobj(L, 1, "openxlsx.XLCellValueProxy");
        olua_postgc(L, self);
        olua_endinvoke(L);
        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCellValueProxy::__gc(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCellValueProxy_clear(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLCellValueProxy *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLCellValueProxy");

        // OpenXLSX::XLCellValueProxy &clear()
        OpenXLSX::XLCellValueProxy &ret = self->clear();
        int num_ret = olua_push_object(L, &ret, "openxlsx.XLCellValueProxy");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCellValueProxy::clear(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCellValueProxy_getBool(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLCellValueProxy *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLCellValueProxy");

        // @template(get<bool>) bool getBool()
        bool ret = self->get<bool>();
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCellValueProxy::getBool(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCellValueProxy_getInt(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLCellValueProxy *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLCellValueProxy");

        // @template(get<int64_t>) int64_t getInt()
        int64_t ret = self->get<int64_t>();
        int num_ret = olua_push_integer(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCellValueProxy::getInt(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCellValueProxy_getNumber(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLCellValueProxy *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLCellValueProxy");

        // @template(get<double>) double getNumber()
        double ret = self->get<double>();
        int num_ret = olua_push_number(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCellValueProxy::getNumber(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCellValueProxy_getString(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLCellValueProxy *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLCellValueProxy");

        // @template(get<std::string>) std::string getString()
        std::string ret = self->get<std::string>();
        int num_ret = olua_push_string(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCellValueProxy::getString(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCellValueProxy_setBool(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLCellValueProxy *self = nullptr;
        bool arg1 = false;       /** value */

        olua_to_object(L, 1, &self, "openxlsx.XLCellValueProxy");
        olua_check_bool(L, 2, &arg1);

        // @template(set<bool>) void setBool(bool value)
        self->set<bool>(arg1);

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCellValueProxy::setBool(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCellValueProxy_setError(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLCellValueProxy *self = nullptr;
        std::string arg1;       /** error */

        olua_to_object(L, 1, &self, "openxlsx.XLCellValueProxy");
        olua_check_string(L, 2, &arg1);

        // OpenXLSX::XLCellValueProxy &setError(const std::string &error)
        OpenXLSX::XLCellValueProxy &ret = self->setError(arg1);
        int num_ret = olua_push_object(L, &ret, "openxlsx.XLCellValueProxy");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCellValueProxy::setError(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCellValueProxy_setInt(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLCellValueProxy *self = nullptr;
        int64_t arg1 = 0;       /** value */

        olua_to_object(L, 1, &self, "openxlsx.XLCellValueProxy");
        olua_check_integer(L, 2, &arg1);

        // @template(set<int64_t>) void setInt(int64_t value)
        self->set<int64_t>(arg1);

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCellValueProxy::setInt(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCellValueProxy_setNumber(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLCellValueProxy *self = nullptr;
        double arg1 = 0;       /** value */

        olua_to_object(L, 1, &self, "openxlsx.XLCellValueProxy");
        olua_check_number(L, 2, &arg1);

        // @template(set<double>) void setNumber(double value)
        self->set<double>(arg1);

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCellValueProxy::setNumber(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCellValueProxy_setString(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLCellValueProxy *self = nullptr;
        std::string arg1;       /** value */

        olua_to_object(L, 1, &self, "openxlsx.XLCellValueProxy");
        olua_check_string(L, 2, &arg1);

        // @template(set<std::string>) void setString(std::string value)
        self->set<std::string>(arg1);

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCellValueProxy::setString(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCellValueProxy_type(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLCellValueProxy *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLCellValueProxy");

        // OpenXLSX::XLValueType type()
        OpenXLSX::XLValueType ret = self->type();
        int num_ret = olua_push_enum(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCellValueProxy::type(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCellValueProxy_typeAsString(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLCellValueProxy *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLCellValueProxy");

        // std::string typeAsString()
        std::string ret = self->typeAsString();
        int num_ret = olua_push_string(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCellValueProxy::typeAsString(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_cls_openxlsx_XLCellValueProxy(lua_State *L)
{
    oluacls_class<OpenXLSX::XLCellValueProxy>(L, "openxlsx.XLCellValueProxy");
    oluacls_func(L, "__gc", _olua_fun_OpenXLSX_XLCellValueProxy___gc);
    oluacls_func(L, "clear", _olua_fun_OpenXLSX_XLCellValueProxy_clear);
    oluacls_func(L, "getBool", _olua_fun_OpenXLSX_XLCellValueProxy_getBool);
    oluacls_func(L, "getInt", _olua_fun_OpenXLSX_XLCellValueProxy_getInt);
    oluacls_func(L, "getNumber", _olua_fun_OpenXLSX_XLCellValueProxy_getNumber);
    oluacls_func(L, "getString", _olua_fun_OpenXLSX_XLCellValueProxy_getString);
    oluacls_func(L, "setBool", _olua_fun_OpenXLSX_XLCellValueProxy_setBool);
    oluacls_func(L, "setError", _olua_fun_OpenXLSX_XLCellValueProxy_setError);
    oluacls_func(L, "setInt", _olua_fun_OpenXLSX_XLCellValueProxy_setInt);
    oluacls_func(L, "setNumber", _olua_fun_OpenXLSX_XLCellValueProxy_setNumber);
    oluacls_func(L, "setString", _olua_fun_OpenXLSX_XLCellValueProxy_setString);
    oluacls_func(L, "type", _olua_fun_OpenXLSX_XLCellValueProxy_type);
    oluacls_func(L, "typeAsString", _olua_fun_OpenXLSX_XLCellValueProxy_typeAsString);
    oluacls_prop(L, "bool", _olua_fun_OpenXLSX_XLCellValueProxy_getBool, _olua_fun_OpenXLSX_XLCellValueProxy_setBool);
    oluacls_prop(L, "int", _olua_fun_OpenXLSX_XLCellValueProxy_getInt, _olua_fun_OpenXLSX_XLCellValueProxy_setInt);
    oluacls_prop(L, "number", _olua_fun_OpenXLSX_XLCellValueProxy_getNumber, _olua_fun_OpenXLSX_XLCellValueProxy_setNumber);
    oluacls_prop(L, "string", _olua_fun_OpenXLSX_XLCellValueProxy_getString, _olua_fun_OpenXLSX_XLCellValueProxy_setString);

    return 1;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_openxlsx_XLCellValueProxy(lua_State *L)
{
    olua_require(L, ".olua.module.openxlsx",  _olua_module_openxlsx);
    if (!olua_getclass(L, "openxlsx.XLCellValueProxy")) {
        luaL_error(L, "class not found: OpenXLSX::XLCellValueProxy");
    }
    return 1;
}
OLUA_END_DECLS

static int _olua_fun_OpenXLSX_XLCell___eq(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLCell *arg1;       /** lhs */
        OpenXLSX::XLCell *arg2;       /** rhs */

        olua_check_object(L, 1, &arg1, "openxlsx.XLCell");
        olua_check_object(L, 2, &arg2, "openxlsx.XLCell");

        // @operator(operator==) static bool operator==(const OpenXLSX::XLCell &lhs, const OpenXLSX::XLCell &rhs)
        bool ret = (*arg1) == (*arg2);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCell::__eq(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCell___gc(lua_State *L)
{
    try {
        olua_startinvoke(L);
        auto self = (OpenXLSX::XLCell *)olua_toobj(L, 1, "openxlsx.XLCell");
        olua_postgc(L, self);
        olua_endinvoke(L);
        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCell::__gc(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCell_cellReference(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLCell *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLCell");

        // OpenXLSX::XLCellReference cellReference()
        OpenXLSX::XLCellReference ret = self->cellReference();
        int num_ret = olua_copy_object(L, ret, "openxlsx.XLCellReference");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCell::cellReference(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCell_copyFrom(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLCell *self = nullptr;
        OpenXLSX::XLCell *arg1;       /** other */

        olua_to_object(L, 1, &self, "openxlsx.XLCell");
        olua_check_object(L, 2, &arg1, "openxlsx.XLCell");

        // void copyFrom(const OpenXLSX::XLCell &other)
        self->copyFrom(*arg1);

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCell::copyFrom(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCell_formula(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLCell *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLCell");

        // OpenXLSX::XLFormulaProxy &formula()
        OpenXLSX::XLFormulaProxy &ret = self->formula();
        int num_ret = olua_push_object(L, &ret, "openxlsx.XLFormulaProxy");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCell::formula(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCell_getString(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLCell *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLCell");

        // std::string getString()
        std::string ret = self->getString();
        int num_ret = olua_push_string(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCell::getString(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCell_hasFormula(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLCell *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLCell");

        // bool hasFormula()
        bool ret = self->hasFormula();
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCell::hasFormula(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCell_new(lua_State *L)
{
    try {
        olua_startinvoke(L);

        // OpenXLSX::XLCell()
        OpenXLSX::XLCell *ret = new OpenXLSX::XLCell();
        int num_ret = olua_push_object(L, ret, "openxlsx.XLCell");
        olua_postnew(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCell::new(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCell_offset(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLCell *self = nullptr;
        uint16_t arg1 = 0;       /** rowOffset */
        uint16_t arg2 = 0;       /** colOffset */

        olua_to_object(L, 1, &self, "openxlsx.XLCell");
        olua_check_integer(L, 2, &arg1);
        olua_check_integer(L, 3, &arg2);

        // OpenXLSX::XLCell offset(uint16_t rowOffset, uint16_t colOffset)
        OpenXLSX::XLCell ret = self->offset(arg1, arg2);
        int num_ret = olua_copy_object(L, ret, "openxlsx.XLCell");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCell::offset(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCell_value(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLCell *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLCell");

        // OpenXLSX::XLCellValueProxy &value()
        OpenXLSX::XLCellValueProxy &ret = self->value();
        int num_ret = olua_push_object(L, &ret, "openxlsx.XLCellValueProxy");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCell::value(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_cls_openxlsx_XLCell(lua_State *L)
{
    oluacls_class<OpenXLSX::XLCell>(L, "openxlsx.XLCell");
    oluacls_func(L, "__eq", _olua_fun_OpenXLSX_XLCell___eq);
    oluacls_func(L, "__gc", _olua_fun_OpenXLSX_XLCell___gc);
    oluacls_func(L, "cellReference", _olua_fun_OpenXLSX_XLCell_cellReference);
    oluacls_func(L, "copyFrom", _olua_fun_OpenXLSX_XLCell_copyFrom);
    oluacls_func(L, "formula", _olua_fun_OpenXLSX_XLCell_formula);
    oluacls_func(L, "getString", _olua_fun_OpenXLSX_XLCell_getString);
    oluacls_func(L, "hasFormula", _olua_fun_OpenXLSX_XLCell_hasFormula);
    oluacls_func(L, "new", _olua_fun_OpenXLSX_XLCell_new);
    oluacls_func(L, "offset", _olua_fun_OpenXLSX_XLCell_offset);
    oluacls_func(L, "value", _olua_fun_OpenXLSX_XLCell_value);
    oluacls_prop(L, "string", _olua_fun_OpenXLSX_XLCell_getString, nullptr);

    return 1;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_openxlsx_XLCell(lua_State *L)
{
    olua_require(L, ".olua.module.openxlsx",  _olua_module_openxlsx);
    if (!olua_getclass(L, "openxlsx.XLCell")) {
        luaL_error(L, "class not found: OpenXLSX::XLCell");
    }
    return 1;
}
OLUA_END_DECLS

static int _olua_fun_OpenXLSX_XLCellReference___eq(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLCellReference *arg1;       /** lhs */
        OpenXLSX::XLCellReference arg1_fromstring = OpenXLSX::XLCellReference("A1");       /** lhs */
        OpenXLSX::XLCellReference *arg2;       /** rhs */
        OpenXLSX::XLCellReference arg2_fromstring = OpenXLSX::XLCellReference("A1");       /** rhs */

        if (olua_isstring(L, 1)) {
            olua_check_string(L, 1, &arg1_fromstring);
            arg1 = &arg1_fromstring;
        } else {
            olua_check_object(L, 1, &arg1, "openxlsx.XLCellReference");
        }
        if (olua_isstring(L, 2)) {
            olua_check_string(L, 2, &arg2_fromstring);
            arg2 = &arg2_fromstring;
        } else {
            olua_check_object(L, 2, &arg2, "openxlsx.XLCellReference");
        }

        // @operator(operator==) static bool operator==(const OpenXLSX::XLCellReference &lhs, const OpenXLSX::XLCellReference &rhs)
        bool ret = (*arg1) == (*arg2);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCellReference::__eq(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCellReference___gc(lua_State *L)
{
    try {
        olua_startinvoke(L);
        auto self = (OpenXLSX::XLCellReference *)olua_toobj(L, 1, "openxlsx.XLCellReference");
        olua_postgc(L, self);
        olua_endinvoke(L);
        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCellReference::__gc(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCellReference___le(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLCellReference *arg1;       /** lhs */
        OpenXLSX::XLCellReference arg1_fromstring = OpenXLSX::XLCellReference("A1");       /** lhs */
        OpenXLSX::XLCellReference *arg2;       /** rhs */
        OpenXLSX::XLCellReference arg2_fromstring = OpenXLSX::XLCellReference("A1");       /** rhs */

        if (olua_isstring(L, 1)) {
            olua_check_string(L, 1, &arg1_fromstring);
            arg1 = &arg1_fromstring;
        } else {
            olua_check_object(L, 1, &arg1, "openxlsx.XLCellReference");
        }
        if (olua_isstring(L, 2)) {
            olua_check_string(L, 2, &arg2_fromstring);
            arg2 = &arg2_fromstring;
        } else {
            olua_check_object(L, 2, &arg2, "openxlsx.XLCellReference");
        }

        // @operator(operator<=) static bool operator<=(const OpenXLSX::XLCellReference &lhs, const OpenXLSX::XLCellReference &rhs)
        bool ret = (*arg1) <= (*arg2);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCellReference::__le(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCellReference___lt(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLCellReference *arg1;       /** lhs */
        OpenXLSX::XLCellReference arg1_fromstring = OpenXLSX::XLCellReference("A1");       /** lhs */
        OpenXLSX::XLCellReference *arg2;       /** rhs */
        OpenXLSX::XLCellReference arg2_fromstring = OpenXLSX::XLCellReference("A1");       /** rhs */

        if (olua_isstring(L, 1)) {
            olua_check_string(L, 1, &arg1_fromstring);
            arg1 = &arg1_fromstring;
        } else {
            olua_check_object(L, 1, &arg1, "openxlsx.XLCellReference");
        }
        if (olua_isstring(L, 2)) {
            olua_check_string(L, 2, &arg2_fromstring);
            arg2 = &arg2_fromstring;
        } else {
            olua_check_object(L, 2, &arg2, "openxlsx.XLCellReference");
        }

        // @operator(operator<) static bool operator<(const OpenXLSX::XLCellReference &lhs, const OpenXLSX::XLCellReference &rhs)
        bool ret = (*arg1) < (*arg2);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCellReference::__lt(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCellReference_address(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLCellReference *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLCellReference");

        // std::string address()
        std::string ret = self->address();
        int num_ret = olua_push_string(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCellReference::address(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCellReference_column(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLCellReference *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLCellReference");

        // uint16_t column()
        uint16_t ret = self->column();
        int num_ret = olua_push_integer(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCellReference::column(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCellReference_columnAsNumber(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::string arg1;       /** column */

        olua_check_string(L, 1, &arg1);

        // static uint16_t columnAsNumber(const std::string &column)
        uint16_t ret = OpenXLSX::XLCellReference::columnAsNumber(arg1);
        int num_ret = olua_push_integer(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCellReference::columnAsNumber(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCellReference_columnAsString(lua_State *L)
{
    try {
        olua_startinvoke(L);

        uint16_t arg1 = 0;       /** column */

        olua_check_integer(L, 1, &arg1);

        // static std::string columnAsString(uint16_t column)
        std::string ret = OpenXLSX::XLCellReference::columnAsString(arg1);
        int num_ret = olua_push_string(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCellReference::columnAsString(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCellReference_coordinatesFromAddress(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::string arg1;       /** address */

        olua_check_string(L, 1, &arg1);

        // static OpenXLSX::XLCoordinates coordinatesFromAddress(const std::string &address)
        OpenXLSX::XLCoordinates ret = OpenXLSX::XLCellReference::coordinatesFromAddress(arg1);
        int num_ret = olua_copy_object(L, ret, "openxlsx.XLCoordinates");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCellReference::coordinatesFromAddress(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCellReference_new$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::string arg1;       /** cellAddress */

        olua_check_string(L, 1, &arg1);

        // OpenXLSX::XLCellReference(@optional const std::string &cellAddress)
        OpenXLSX::XLCellReference *ret = new OpenXLSX::XLCellReference(arg1);
        int num_ret = olua_push_object(L, ret, "openxlsx.XLCellReference");
        olua_postnew(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCellReference::new(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCellReference_new$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        // OpenXLSX::XLCellReference()
        OpenXLSX::XLCellReference *ret = new OpenXLSX::XLCellReference();
        int num_ret = olua_push_object(L, ret, "openxlsx.XLCellReference");
        olua_postnew(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCellReference::new(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCellReference_new$3(lua_State *L)
{
    try {
        olua_startinvoke(L);

        uint32_t arg1 = 0;       /** row */
        uint16_t arg2 = 0;       /** column */

        olua_check_integer(L, 1, &arg1);
        olua_check_integer(L, 2, &arg2);

        // OpenXLSX::XLCellReference(uint32_t row, uint16_t column)
        OpenXLSX::XLCellReference *ret = new OpenXLSX::XLCellReference(arg1, arg2);
        int num_ret = olua_push_object(L, ret, "openxlsx.XLCellReference");
        olua_postnew(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCellReference::new(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCellReference_new$4(lua_State *L)
{
    try {
        olua_startinvoke(L);

        uint32_t arg1 = 0;       /** row */
        std::string arg2;       /** column */

        olua_check_integer(L, 1, &arg1);
        olua_check_string(L, 2, &arg2);

        // OpenXLSX::XLCellReference(uint32_t row, const std::string &column)
        OpenXLSX::XLCellReference *ret = new OpenXLSX::XLCellReference(arg1, arg2);
        int num_ret = olua_push_object(L, ret, "openxlsx.XLCellReference");
        olua_postnew(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCellReference::new(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCellReference_new(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 0) {
        // OpenXLSX::XLCellReference()
        return _olua_fun_OpenXLSX_XLCellReference_new$2(L);
    }

    if (num_args == 1) {
        // if ((olua_is_string(L, 1))) {
            // OpenXLSX::XLCellReference(@optional const std::string &cellAddress)
            return _olua_fun_OpenXLSX_XLCellReference_new$1(L);
        // }
    }

    if (num_args == 2) {
        if ((olua_is_integer(L, 1)) && (olua_is_integer(L, 2))) {
            // OpenXLSX::XLCellReference(uint32_t row, uint16_t column)
            return _olua_fun_OpenXLSX_XLCellReference_new$3(L);
        }

        // if ((olua_is_integer(L, 1)) && (olua_is_string(L, 2))) {
            // OpenXLSX::XLCellReference(uint32_t row, const std::string &column)
            return _olua_fun_OpenXLSX_XLCellReference_new$4(L);
        // }
    }

    luaL_error(L, "method 'OpenXLSX::XLCellReference::new' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_OpenXLSX_XLCellReference_row(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLCellReference *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLCellReference");

        // uint32_t row()
        uint32_t ret = self->row();
        int num_ret = olua_push_integer(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCellReference::row(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCellReference_rowAsNumber(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::string arg1;       /** row */

        olua_check_string(L, 1, &arg1);

        // static uint32_t rowAsNumber(const std::string &row)
        uint32_t ret = OpenXLSX::XLCellReference::rowAsNumber(arg1);
        int num_ret = olua_push_integer(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCellReference::rowAsNumber(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCellReference_rowAsString(lua_State *L)
{
    try {
        olua_startinvoke(L);

        uint32_t arg1 = 0;       /** row */

        olua_check_integer(L, 1, &arg1);

        // static std::string rowAsString(uint32_t row)
        std::string ret = OpenXLSX::XLCellReference::rowAsString(arg1);
        int num_ret = olua_push_string(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCellReference::rowAsString(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCellReference_setAddress(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLCellReference *self = nullptr;
        std::string arg1;       /** address */

        olua_to_object(L, 1, &self, "openxlsx.XLCellReference");
        olua_check_string(L, 2, &arg1);

        // void setAddress(const std::string &address)
        self->setAddress(arg1);

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCellReference::setAddress(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCellReference_setColumn(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLCellReference *self = nullptr;
        uint16_t arg1 = 0;       /** column */

        olua_to_object(L, 1, &self, "openxlsx.XLCellReference");
        olua_check_integer(L, 2, &arg1);

        // void setColumn(uint16_t column)
        self->setColumn(arg1);

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCellReference::setColumn(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCellReference_setRow(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLCellReference *self = nullptr;
        uint32_t arg1 = 0;       /** row */

        olua_to_object(L, 1, &self, "openxlsx.XLCellReference");
        olua_check_integer(L, 2, &arg1);

        // void setRow(uint32_t row)
        self->setRow(arg1);

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCellReference::setRow(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCellReference_setRowAndColumn(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLCellReference *self = nullptr;
        uint32_t arg1 = 0;       /** row */
        uint16_t arg2 = 0;       /** column */

        olua_to_object(L, 1, &self, "openxlsx.XLCellReference");
        olua_check_integer(L, 2, &arg1);
        olua_check_integer(L, 3, &arg2);

        // void setRowAndColumn(uint32_t row, uint16_t column)
        self->setRowAndColumn(arg1, arg2);

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCellReference::setRowAndColumn(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_cls_openxlsx_XLCellReference(lua_State *L)
{
    oluacls_class<OpenXLSX::XLCellReference>(L, "openxlsx.XLCellReference");
    oluacls_func(L, "__eq", _olua_fun_OpenXLSX_XLCellReference___eq);
    oluacls_func(L, "__gc", _olua_fun_OpenXLSX_XLCellReference___gc);
    oluacls_func(L, "__le", _olua_fun_OpenXLSX_XLCellReference___le);
    oluacls_func(L, "__lt", _olua_fun_OpenXLSX_XLCellReference___lt);
    oluacls_func(L, "address", _olua_fun_OpenXLSX_XLCellReference_address);
    oluacls_func(L, "column", _olua_fun_OpenXLSX_XLCellReference_column);
    oluacls_func(L, "columnAsNumber", _olua_fun_OpenXLSX_XLCellReference_columnAsNumber);
    oluacls_func(L, "columnAsString", _olua_fun_OpenXLSX_XLCellReference_columnAsString);
    oluacls_func(L, "coordinatesFromAddress", _olua_fun_OpenXLSX_XLCellReference_coordinatesFromAddress);
    oluacls_func(L, "new", _olua_fun_OpenXLSX_XLCellReference_new);
    oluacls_func(L, "row", _olua_fun_OpenXLSX_XLCellReference_row);
    oluacls_func(L, "rowAsNumber", _olua_fun_OpenXLSX_XLCellReference_rowAsNumber);
    oluacls_func(L, "rowAsString", _olua_fun_OpenXLSX_XLCellReference_rowAsString);
    oluacls_func(L, "setAddress", _olua_fun_OpenXLSX_XLCellReference_setAddress);
    oluacls_func(L, "setColumn", _olua_fun_OpenXLSX_XLCellReference_setColumn);
    oluacls_func(L, "setRow", _olua_fun_OpenXLSX_XLCellReference_setRow);
    oluacls_func(L, "setRowAndColumn", _olua_fun_OpenXLSX_XLCellReference_setRowAndColumn);

    return 1;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_openxlsx_XLCellReference(lua_State *L)
{
    olua_require(L, ".olua.module.openxlsx",  _olua_module_openxlsx);
    if (!olua_getclass(L, "openxlsx.XLCellReference")) {
        luaL_error(L, "class not found: OpenXLSX::XLCellReference");
    }
    return 1;
}
OLUA_END_DECLS

static int _olua_fun_OpenXLSX_XLCellAssignable_new$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        // OpenXLSX::XLCellAssignable()
        OpenXLSX::XLCellAssignable *ret = new OpenXLSX::XLCellAssignable();
        int num_ret = olua_push_object(L, ret, "openxlsx.XLCellAssignable");
        olua_postnew(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCellAssignable::new(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCellAssignable_new$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLCell *arg1;       /** other */

        olua_check_object(L, 1, &arg1, "openxlsx.XLCell");

        // OpenXLSX::XLCellAssignable(const OpenXLSX::XLCell &other)
        OpenXLSX::XLCellAssignable *ret = new OpenXLSX::XLCellAssignable(*arg1);
        int num_ret = olua_push_object(L, ret, "openxlsx.XLCellAssignable");
        olua_postnew(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCellAssignable::new(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCellAssignable_new$3(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLCell *arg1;       /** other */

        olua_check_object(L, 1, &arg1, "openxlsx.XLCell");

        // OpenXLSX::XLCellAssignable(OpenXLSX::XLCell &&other)
        OpenXLSX::XLCellAssignable *ret = new OpenXLSX::XLCellAssignable(*arg1);
        int num_ret = olua_push_object(L, ret, "openxlsx.XLCellAssignable");
        olua_postnew(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCellAssignable::new(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCellAssignable_new(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 0) {
        // OpenXLSX::XLCellAssignable()
        return _olua_fun_OpenXLSX_XLCellAssignable_new$1(L);
    }

    if (num_args == 1) {
        if ((olua_is_object(L, 1, "openxlsx.XLCell"))) {
            // OpenXLSX::XLCellAssignable(const OpenXLSX::XLCell &other)
            return _olua_fun_OpenXLSX_XLCellAssignable_new$2(L);
        }

        // if ((olua_is_object(L, 1, "openxlsx.XLCell"))) {
            // OpenXLSX::XLCellAssignable(OpenXLSX::XLCell &&other)
            return _olua_fun_OpenXLSX_XLCellAssignable_new$3(L);
        // }
    }

    luaL_error(L, "method 'OpenXLSX::XLCellAssignable::new' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_cls_openxlsx_XLCellAssignable(lua_State *L)
{
    oluacls_class<OpenXLSX::XLCellAssignable, OpenXLSX::XLCell>(L, "openxlsx.XLCellAssignable");
    oluacls_func(L, "new", _olua_fun_OpenXLSX_XLCellAssignable_new);

    return 1;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_openxlsx_XLCellAssignable(lua_State *L)
{
    olua_require(L, ".olua.module.openxlsx",  _olua_module_openxlsx);
    if (!olua_getclass(L, "openxlsx.XLCellAssignable")) {
        luaL_error(L, "class not found: OpenXLSX::XLCellAssignable");
    }
    return 1;
}
OLUA_END_DECLS

static int _olua_fun_OpenXLSX_XLColor___eq(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLColor *arg1;       /** lhs */
        OpenXLSX::XLColor *arg2;       /** rhs */

        olua_check_object(L, 1, &arg1, "openxlsx.XLColor");
        olua_check_object(L, 2, &arg2, "openxlsx.XLColor");

        // @operator(operator==) static bool operator==(const OpenXLSX::XLColor &lhs, const OpenXLSX::XLColor &rhs)
        bool ret = (*arg1) == (*arg2);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLColor::__eq(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLColor___gc(lua_State *L)
{
    try {
        olua_startinvoke(L);
        auto self = (OpenXLSX::XLColor *)olua_toobj(L, 1, "openxlsx.XLColor");
        olua_postgc(L, self);
        olua_endinvoke(L);
        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLColor::__gc(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLColor_alpha(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLColor *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLColor");

        // uint8_t alpha()
        uint8_t ret = self->alpha();
        int num_ret = olua_push_integer(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLColor::alpha(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLColor_blue(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLColor *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLColor");

        // uint8_t blue()
        uint8_t ret = self->blue();
        int num_ret = olua_push_integer(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLColor::blue(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLColor_green(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLColor *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLColor");

        // uint8_t green()
        uint8_t ret = self->green();
        int num_ret = olua_push_integer(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLColor::green(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLColor_hex(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLColor *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLColor");

        // std::string hex()
        std::string ret = self->hex();
        int num_ret = olua_push_string(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLColor::hex(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLColor_new$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        // OpenXLSX::XLColor()
        OpenXLSX::XLColor *ret = new OpenXLSX::XLColor();
        int num_ret = olua_push_object(L, ret, "openxlsx.XLColor");
        olua_postnew(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLColor::new(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLColor_new$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        uint8_t arg1 = 0;       /** alpha */
        uint8_t arg2 = 0;       /** red */
        uint8_t arg3 = 0;       /** green */
        uint8_t arg4 = 0;       /** blue */

        olua_check_integer(L, 1, &arg1);
        olua_check_integer(L, 2, &arg2);
        olua_check_integer(L, 3, &arg3);
        olua_check_integer(L, 4, &arg4);

        // OpenXLSX::XLColor(uint8_t alpha, uint8_t red, uint8_t green, uint8_t blue)
        OpenXLSX::XLColor *ret = new OpenXLSX::XLColor(arg1, arg2, arg3, arg4);
        int num_ret = olua_push_object(L, ret, "openxlsx.XLColor");
        olua_postnew(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLColor::new(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLColor_new$3(lua_State *L)
{
    try {
        olua_startinvoke(L);

        uint8_t arg1 = 0;       /** red */
        uint8_t arg2 = 0;       /** green */
        uint8_t arg3 = 0;       /** blue */

        olua_check_integer(L, 1, &arg1);
        olua_check_integer(L, 2, &arg2);
        olua_check_integer(L, 3, &arg3);

        // OpenXLSX::XLColor(uint8_t red, uint8_t green, uint8_t blue)
        OpenXLSX::XLColor *ret = new OpenXLSX::XLColor(arg1, arg2, arg3);
        int num_ret = olua_push_object(L, ret, "openxlsx.XLColor");
        olua_postnew(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLColor::new(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLColor_new$4(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::string arg1;       /** hexCode */

        olua_check_string(L, 1, &arg1);

        // OpenXLSX::XLColor(const std::string &hexCode)
        OpenXLSX::XLColor *ret = new OpenXLSX::XLColor(arg1);
        int num_ret = olua_push_object(L, ret, "openxlsx.XLColor");
        olua_postnew(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLColor::new(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLColor_new(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 0) {
        // OpenXLSX::XLColor()
        return _olua_fun_OpenXLSX_XLColor_new$1(L);
    }

    if (num_args == 1) {
        // if ((olua_is_string(L, 1))) {
            // OpenXLSX::XLColor(const std::string &hexCode)
            return _olua_fun_OpenXLSX_XLColor_new$4(L);
        // }
    }

    if (num_args == 3) {
        // if ((olua_is_integer(L, 1)) && (olua_is_integer(L, 2)) && (olua_is_integer(L, 3))) {
            // OpenXLSX::XLColor(uint8_t red, uint8_t green, uint8_t blue)
            return _olua_fun_OpenXLSX_XLColor_new$3(L);
        // }
    }

    if (num_args == 4) {
        // if ((olua_is_integer(L, 1)) && (olua_is_integer(L, 2)) && (olua_is_integer(L, 3)) && (olua_is_integer(L, 4))) {
            // OpenXLSX::XLColor(uint8_t alpha, uint8_t red, uint8_t green, uint8_t blue)
            return _olua_fun_OpenXLSX_XLColor_new$2(L);
        // }
    }

    luaL_error(L, "method 'OpenXLSX::XLColor::new' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_OpenXLSX_XLColor_red(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLColor *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLColor");

        // uint8_t red()
        uint8_t ret = self->red();
        int num_ret = olua_push_integer(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLColor::red(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLColor_set$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLColor *self = nullptr;
        uint8_t arg1 = 0;       /** alpha */
        uint8_t arg2 = 0;       /** red */
        uint8_t arg3 = 0;       /** green */
        uint8_t arg4 = 0;       /** blue */

        olua_to_object(L, 1, &self, "openxlsx.XLColor");
        olua_check_integer(L, 2, &arg1);
        olua_check_integer(L, 3, &arg2);
        olua_check_integer(L, 4, &arg3);
        olua_check_integer(L, 5, &arg4);

        // void set(uint8_t alpha, uint8_t red, uint8_t green, uint8_t blue)
        self->set(arg1, arg2, arg3, arg4);

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLColor::set(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLColor_set$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLColor *self = nullptr;
        uint8_t arg1 = 0;       /** red */
        uint8_t arg2 = 0;       /** green */
        uint8_t arg3 = 0;       /** blue */

        olua_to_object(L, 1, &self, "openxlsx.XLColor");
        olua_check_integer(L, 2, &arg1);
        olua_check_integer(L, 3, &arg2);
        olua_check_integer(L, 4, &arg3);

        // void set(@optional uint8_t red, @optional uint8_t green, @optional uint8_t blue)
        self->set(arg1, arg2, arg3);

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLColor::set(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLColor_set$3(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLColor *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLColor");

        // void set()
        self->set();

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLColor::set(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLColor_set$4(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLColor *self = nullptr;
        uint8_t arg1 = 0;       /** red */

        olua_to_object(L, 1, &self, "openxlsx.XLColor");
        olua_check_integer(L, 2, &arg1);

        // void set(@optional uint8_t red)
        self->set(arg1);

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLColor::set(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLColor_set$5(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLColor *self = nullptr;
        uint8_t arg1 = 0;       /** red */
        uint8_t arg2 = 0;       /** green */

        olua_to_object(L, 1, &self, "openxlsx.XLColor");
        olua_check_integer(L, 2, &arg1);
        olua_check_integer(L, 3, &arg2);

        // void set(@optional uint8_t red, @optional uint8_t green)
        self->set(arg1, arg2);

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLColor::set(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLColor_set$6(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLColor *self = nullptr;
        std::string arg1;       /** hexCode */

        olua_to_object(L, 1, &self, "openxlsx.XLColor");
        olua_check_string(L, 2, &arg1);

        // void set(const std::string &hexCode)
        self->set(arg1);

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLColor::set(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLColor_set(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 1) {
        // void set()
        return _olua_fun_OpenXLSX_XLColor_set$3(L);
    }

    if (num_args == 2) {
        if ((olua_is_object(L, 1, "openxlsx.XLColor")) && (olua_is_integer(L, 2))) {
            // void set(@optional uint8_t red)
            return _olua_fun_OpenXLSX_XLColor_set$4(L);
        }

        // if ((olua_is_object(L, 1, "openxlsx.XLColor")) && (olua_is_string(L, 2))) {
            // void set(const std::string &hexCode)
            return _olua_fun_OpenXLSX_XLColor_set$6(L);
        // }
    }

    if (num_args == 3) {
        // if ((olua_is_object(L, 1, "openxlsx.XLColor")) && (olua_is_integer(L, 2)) && (olua_is_integer(L, 3))) {
            // void set(@optional uint8_t red, @optional uint8_t green)
            return _olua_fun_OpenXLSX_XLColor_set$5(L);
        // }
    }

    if (num_args == 4) {
        // if ((olua_is_object(L, 1, "openxlsx.XLColor")) && (olua_is_integer(L, 2)) && (olua_is_integer(L, 3)) && (olua_is_integer(L, 4))) {
            // void set(@optional uint8_t red, @optional uint8_t green, @optional uint8_t blue)
            return _olua_fun_OpenXLSX_XLColor_set$2(L);
        // }
    }

    if (num_args == 5) {
        // if ((olua_is_object(L, 1, "openxlsx.XLColor")) && (olua_is_integer(L, 2)) && (olua_is_integer(L, 3)) && (olua_is_integer(L, 4)) && (olua_is_integer(L, 5))) {
            // void set(uint8_t alpha, uint8_t red, uint8_t green, uint8_t blue)
            return _olua_fun_OpenXLSX_XLColor_set$1(L);
        // }
    }

    luaL_error(L, "method 'OpenXLSX::XLColor::set' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_cls_openxlsx_XLColor(lua_State *L)
{
    oluacls_class<OpenXLSX::XLColor>(L, "openxlsx.XLColor");
    oluacls_func(L, "__eq", _olua_fun_OpenXLSX_XLColor___eq);
    oluacls_func(L, "__gc", _olua_fun_OpenXLSX_XLColor___gc);
    oluacls_func(L, "alpha", _olua_fun_OpenXLSX_XLColor_alpha);
    oluacls_func(L, "blue", _olua_fun_OpenXLSX_XLColor_blue);
    oluacls_func(L, "green", _olua_fun_OpenXLSX_XLColor_green);
    oluacls_func(L, "hex", _olua_fun_OpenXLSX_XLColor_hex);
    oluacls_func(L, "new", _olua_fun_OpenXLSX_XLColor_new);
    oluacls_func(L, "red", _olua_fun_OpenXLSX_XLColor_red);
    oluacls_func(L, "set", _olua_fun_OpenXLSX_XLColor_set);

    return 1;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_openxlsx_XLColor(lua_State *L)
{
    olua_require(L, ".olua.module.openxlsx",  _olua_module_openxlsx);
    if (!olua_getclass(L, "openxlsx.XLColor")) {
        luaL_error(L, "class not found: OpenXLSX::XLColor");
    }
    return 1;
}
OLUA_END_DECLS

static int _olua_fun_OpenXLSX_XLColumn___gc(lua_State *L)
{
    try {
        olua_startinvoke(L);
        auto self = (OpenXLSX::XLColumn *)olua_toobj(L, 1, "openxlsx.XLColumn");
        olua_postgc(L, self);
        olua_endinvoke(L);
        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLColumn::__gc(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLColumn_isHidden(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLColumn *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLColumn");

        // bool isHidden()
        bool ret = self->isHidden();
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLColumn::isHidden(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLColumn_setHidden(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLColumn *self = nullptr;
        bool arg1 = false;       /** state */

        olua_to_object(L, 1, &self, "openxlsx.XLColumn");
        olua_check_bool(L, 2, &arg1);

        // void setHidden(bool state)
        self->setHidden(arg1);

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLColumn::setHidden(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLColumn_setWidth(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLColumn *self = nullptr;
        float arg1 = 0;       /** width */

        olua_to_object(L, 1, &self, "openxlsx.XLColumn");
        olua_check_number(L, 2, &arg1);

        // void setWidth(float width)
        self->setWidth(arg1);

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLColumn::setWidth(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLColumn_width(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLColumn *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLColumn");

        // float width()
        float ret = self->width();
        int num_ret = olua_push_number(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLColumn::width(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_cls_openxlsx_XLColumn(lua_State *L)
{
    oluacls_class<OpenXLSX::XLColumn>(L, "openxlsx.XLColumn");
    oluacls_func(L, "__gc", _olua_fun_OpenXLSX_XLColumn___gc);
    oluacls_func(L, "isHidden", _olua_fun_OpenXLSX_XLColumn_isHidden);
    oluacls_func(L, "setHidden", _olua_fun_OpenXLSX_XLColumn_setHidden);
    oluacls_func(L, "setWidth", _olua_fun_OpenXLSX_XLColumn_setWidth);
    oluacls_func(L, "width", _olua_fun_OpenXLSX_XLColumn_width);
    oluacls_prop(L, "hidden", _olua_fun_OpenXLSX_XLColumn_isHidden, _olua_fun_OpenXLSX_XLColumn_setHidden);

    return 1;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_openxlsx_XLColumn(lua_State *L)
{
    olua_require(L, ".olua.module.openxlsx",  _olua_module_openxlsx);
    if (!olua_getclass(L, "openxlsx.XLColumn")) {
        luaL_error(L, "class not found: OpenXLSX::XLColumn");
    }
    return 1;
}
OLUA_END_DECLS

static int _olua_fun_OpenXLSX_XLRow___eq(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLRow *arg1;       /** lhs */
        OpenXLSX::XLRow *arg2;       /** rhs */

        olua_check_object(L, 1, &arg1, "openxlsx.XLRow");
        olua_check_object(L, 2, &arg2, "openxlsx.XLRow");

        // @operator(operator==) static bool operator==(const OpenXLSX::XLRow &lhs, const OpenXLSX::XLRow &rhs)
        bool ret = (*arg1) == (*arg2);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLRow::__eq(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLRow___gc(lua_State *L)
{
    try {
        olua_startinvoke(L);
        auto self = (OpenXLSX::XLRow *)olua_toobj(L, 1, "openxlsx.XLRow");
        olua_postgc(L, self);
        olua_endinvoke(L);
        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLRow::__gc(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLRow___le(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLRow *arg1;       /** lhs */
        OpenXLSX::XLRow *arg2;       /** rhs */

        olua_check_object(L, 1, &arg1, "openxlsx.XLRow");
        olua_check_object(L, 2, &arg2, "openxlsx.XLRow");

        // @operator(operator<=) static bool operator<=(const OpenXLSX::XLRow &lhs, const OpenXLSX::XLRow &rhs)
        bool ret = (*arg1) <= (*arg2);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLRow::__le(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLRow___lt(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLRow *arg1;       /** lhs */
        OpenXLSX::XLRow *arg2;       /** rhs */

        olua_check_object(L, 1, &arg1, "openxlsx.XLRow");
        olua_check_object(L, 2, &arg2, "openxlsx.XLRow");

        // @operator(operator<) static bool operator<(const OpenXLSX::XLRow &lhs, const OpenXLSX::XLRow &rhs)
        bool ret = (*arg1) < (*arg2);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLRow::__lt(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLRow_cellCount(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLRow *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLRow");

        // uint16_t cellCount()
        uint16_t ret = self->cellCount();
        int num_ret = olua_push_integer(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLRow::cellCount(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLRow_cells$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLRow *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLRow");

        // OpenXLSX::XLRowDataRange cells()
        OpenXLSX::XLRowDataRange ret = self->cells();
        int num_ret = olua_copy_object(L, ret, "openxlsx.XLRowDataRange");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLRow::cells(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLRow_cells$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLRow *self = nullptr;
        uint16_t arg1 = 0;       /** cellCount */

        olua_to_object(L, 1, &self, "openxlsx.XLRow");
        olua_check_integer(L, 2, &arg1);

        // OpenXLSX::XLRowDataRange cells(uint16_t cellCount)
        OpenXLSX::XLRowDataRange ret = self->cells(arg1);
        int num_ret = olua_copy_object(L, ret, "openxlsx.XLRowDataRange");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLRow::cells(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLRow_cells$3(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLRow *self = nullptr;
        uint16_t arg1 = 0;       /** firstCell */
        uint16_t arg2 = 0;       /** lastCell */

        olua_to_object(L, 1, &self, "openxlsx.XLRow");
        olua_check_integer(L, 2, &arg1);
        olua_check_integer(L, 3, &arg2);

        // OpenXLSX::XLRowDataRange cells(uint16_t firstCell, uint16_t lastCell)
        OpenXLSX::XLRowDataRange ret = self->cells(arg1, arg2);
        int num_ret = olua_copy_object(L, ret, "openxlsx.XLRowDataRange");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLRow::cells(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLRow_cells(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 1) {
        // OpenXLSX::XLRowDataRange cells()
        return _olua_fun_OpenXLSX_XLRow_cells$1(L);
    }

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "openxlsx.XLRow")) && (olua_is_integer(L, 2))) {
            // OpenXLSX::XLRowDataRange cells(uint16_t cellCount)
            return _olua_fun_OpenXLSX_XLRow_cells$2(L);
        // }
    }

    if (num_args == 3) {
        // if ((olua_is_object(L, 1, "openxlsx.XLRow")) && (olua_is_integer(L, 2)) && (olua_is_integer(L, 3))) {
            // OpenXLSX::XLRowDataRange cells(uint16_t firstCell, uint16_t lastCell)
            return _olua_fun_OpenXLSX_XLRow_cells$3(L);
        // }
    }

    luaL_error(L, "method 'OpenXLSX::XLRow::cells' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_OpenXLSX_XLRow_descent(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLRow *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLRow");

        // float descent()
        float ret = self->descent();
        int num_ret = olua_push_number(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLRow::descent(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLRow_height(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLRow *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLRow");

        // double height()
        double ret = self->height();
        int num_ret = olua_push_number(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLRow::height(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLRow_isHidden(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLRow *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLRow");

        // bool isHidden()
        bool ret = self->isHidden();
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLRow::isHidden(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLRow_new(lua_State *L)
{
    try {
        olua_startinvoke(L);

        // OpenXLSX::XLRow()
        OpenXLSX::XLRow *ret = new OpenXLSX::XLRow();
        int num_ret = olua_push_object(L, ret, "openxlsx.XLRow");
        olua_postnew(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLRow::new(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLRow_rowNumber(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLRow *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLRow");

        // uint64_t rowNumber()
        uint64_t ret = self->rowNumber();
        int num_ret = olua_push_integer(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLRow::rowNumber(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLRow_setDescent(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLRow *self = nullptr;
        float arg1 = 0;       /** descent */

        olua_to_object(L, 1, &self, "openxlsx.XLRow");
        olua_check_number(L, 2, &arg1);

        // void setDescent(float descent)
        self->setDescent(arg1);

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLRow::setDescent(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLRow_setHeight(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLRow *self = nullptr;
        float arg1 = 0;       /** height */

        olua_to_object(L, 1, &self, "openxlsx.XLRow");
        olua_check_number(L, 2, &arg1);

        // void setHeight(float height)
        self->setHeight(arg1);

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLRow::setHeight(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLRow_setHidden(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLRow *self = nullptr;
        bool arg1 = false;       /** state */

        olua_to_object(L, 1, &self, "openxlsx.XLRow");
        olua_check_bool(L, 2, &arg1);

        // void setHidden(bool state)
        self->setHidden(arg1);

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLRow::setHidden(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLRow_values(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLRow *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLRow");

        // OpenXLSX::XLRowDataProxy &values()
        OpenXLSX::XLRowDataProxy &ret = self->values();
        int num_ret = olua_push_object(L, &ret, "openxlsx.XLRowDataProxy");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLRow::values(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_cls_openxlsx_XLRow(lua_State *L)
{
    oluacls_class<OpenXLSX::XLRow>(L, "openxlsx.XLRow");
    oluacls_func(L, "__eq", _olua_fun_OpenXLSX_XLRow___eq);
    oluacls_func(L, "__gc", _olua_fun_OpenXLSX_XLRow___gc);
    oluacls_func(L, "__le", _olua_fun_OpenXLSX_XLRow___le);
    oluacls_func(L, "__lt", _olua_fun_OpenXLSX_XLRow___lt);
    oluacls_func(L, "cellCount", _olua_fun_OpenXLSX_XLRow_cellCount);
    oluacls_func(L, "cells", _olua_fun_OpenXLSX_XLRow_cells);
    oluacls_func(L, "descent", _olua_fun_OpenXLSX_XLRow_descent);
    oluacls_func(L, "height", _olua_fun_OpenXLSX_XLRow_height);
    oluacls_func(L, "isHidden", _olua_fun_OpenXLSX_XLRow_isHidden);
    oluacls_func(L, "new", _olua_fun_OpenXLSX_XLRow_new);
    oluacls_func(L, "rowNumber", _olua_fun_OpenXLSX_XLRow_rowNumber);
    oluacls_func(L, "setDescent", _olua_fun_OpenXLSX_XLRow_setDescent);
    oluacls_func(L, "setHeight", _olua_fun_OpenXLSX_XLRow_setHeight);
    oluacls_func(L, "setHidden", _olua_fun_OpenXLSX_XLRow_setHidden);
    oluacls_func(L, "values", _olua_fun_OpenXLSX_XLRow_values);
    oluacls_prop(L, "hidden", _olua_fun_OpenXLSX_XLRow_isHidden, _olua_fun_OpenXLSX_XLRow_setHidden);

    return 1;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_openxlsx_XLRow(lua_State *L)
{
    olua_require(L, ".olua.module.openxlsx",  _olua_module_openxlsx);
    if (!olua_getclass(L, "openxlsx.XLRow")) {
        luaL_error(L, "class not found: OpenXLSX::XLRow");
    }
    return 1;
}
OLUA_END_DECLS

static int _olua_cls_openxlsx_XLSheetState(lua_State *L)
{
    oluacls_class<OpenXLSX::XLSheetState>(L, "openxlsx.XLSheetState");
    oluacls_func(L, "__index", olua_indexerror);
    oluacls_func(L, "__newindex", olua_newindexerror);
    oluacls_enum(L, "Hidden", (lua_Integer)OpenXLSX::XLSheetState::Hidden);
    oluacls_enum(L, "VeryHidden", (lua_Integer)OpenXLSX::XLSheetState::VeryHidden);
    oluacls_enum(L, "Visible", (lua_Integer)OpenXLSX::XLSheetState::Visible);

    return 1;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_openxlsx_XLSheetState(lua_State *L)
{
    olua_require(L, ".olua.module.openxlsx",  _olua_module_openxlsx);
    if (!olua_getclass(L, "openxlsx.XLSheetState")) {
        luaL_error(L, "class not found: OpenXLSX::XLSheetState");
    }
    return 1;
}
OLUA_END_DECLS

static int _olua_fun_OpenXLSX_XLSheet_clone(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLSheet *self = nullptr;
        std::string arg1;       /** newName */

        olua_to_object(L, 1, &self, "openxlsx.XLSheet");
        olua_check_string(L, 2, &arg1);

        // void clone(const std::string &newName)
        self->clone(arg1);

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLSheet::clone(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLSheet_color(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLSheet *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLSheet");

        // OpenXLSX::XLColor color()
        OpenXLSX::XLColor ret = self->color();
        int num_ret = olua_copy_object(L, ret, "openxlsx.XLColor");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLSheet::color(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLSheet_getChartsheet(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLSheet *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLSheet");

        // @template(get<OpenXLSX::XLChartsheet>) OpenXLSX::XLChartsheet getChartsheet()
        OpenXLSX::XLChartsheet ret = self->get<OpenXLSX::XLChartsheet>();
        int num_ret = olua_copy_object(L, ret, "openxlsx.XLChartsheet");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLSheet::getChartsheet(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLSheet_getWorksheet(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLSheet *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLSheet");

        // @template(get<OpenXLSX::XLWorksheet>) OpenXLSX::XLWorksheet getWorksheet()
        OpenXLSX::XLWorksheet ret = self->get<OpenXLSX::XLWorksheet>();
        int num_ret = olua_copy_object(L, ret, "openxlsx.XLWorksheet");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLSheet::getWorksheet(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLSheet_index(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLSheet *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLSheet");

        // uint16_t index()
        uint16_t ret = self->index();
        int num_ret = olua_push_integer(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLSheet::index(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLSheet_isSelected(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLSheet *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLSheet");

        // bool isSelected()
        bool ret = self->isSelected();
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLSheet::isSelected(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLSheet_name(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLSheet *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLSheet");

        // std::string name()
        std::string ret = self->name();
        int num_ret = olua_push_string(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLSheet::name(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLSheet_new(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLXmlData *arg1 = nullptr;       /** xmlData */

        olua_check_object(L, 1, &arg1, "openxlsx.XLXmlData");

        // OpenXLSX::XLSheet(OpenXLSX::XLXmlData *xmlData)
        OpenXLSX::XLSheet *ret = new OpenXLSX::XLSheet(arg1);
        int num_ret = olua_push_object(L, ret, "openxlsx.XLSheet");
        olua_postnew(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLSheet::new(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLSheet_setColor(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLSheet *self = nullptr;
        OpenXLSX::XLColor *arg1;       /** color */

        olua_to_object(L, 1, &self, "openxlsx.XLSheet");
        olua_check_object(L, 2, &arg1, "openxlsx.XLColor");

        // void setColor(const OpenXLSX::XLColor &color)
        self->setColor(*arg1);

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLSheet::setColor(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLSheet_setIndex(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLSheet *self = nullptr;
        uint16_t arg1 = 0;       /** index */

        olua_to_object(L, 1, &self, "openxlsx.XLSheet");
        olua_check_integer(L, 2, &arg1);

        // void setIndex(uint16_t index)
        self->setIndex(arg1);

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLSheet::setIndex(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLSheet_setName(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLSheet *self = nullptr;
        std::string arg1;       /** name */

        olua_to_object(L, 1, &self, "openxlsx.XLSheet");
        olua_check_string(L, 2, &arg1);

        // void setName(const std::string &name)
        self->setName(arg1);

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLSheet::setName(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLSheet_setSelected(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLSheet *self = nullptr;
        bool arg1 = false;       /** selected */

        olua_to_object(L, 1, &self, "openxlsx.XLSheet");
        olua_check_bool(L, 2, &arg1);

        // void setSelected(bool selected)
        self->setSelected(arg1);

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLSheet::setSelected(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLSheet_setVisibility(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLSheet *self = nullptr;
        OpenXLSX::XLSheetState arg1 = (OpenXLSX::XLSheetState)0;       /** state */

        olua_to_object(L, 1, &self, "openxlsx.XLSheet");
        olua_check_enum(L, 2, &arg1);

        // void setVisibility(OpenXLSX::XLSheetState state)
        self->setVisibility(arg1);

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLSheet::setVisibility(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLSheet_visibility(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLSheet *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLSheet");

        // OpenXLSX::XLSheetState visibility()
        OpenXLSX::XLSheetState ret = self->visibility();
        int num_ret = olua_push_enum(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLSheet::visibility(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_cls_openxlsx_XLSheet(lua_State *L)
{
    oluacls_class<OpenXLSX::XLSheet, OpenXLSX::XLXmlFile>(L, "openxlsx.XLSheet");
    oluacls_func(L, "clone", _olua_fun_OpenXLSX_XLSheet_clone);
    oluacls_func(L, "color", _olua_fun_OpenXLSX_XLSheet_color);
    oluacls_func(L, "getChartsheet", _olua_fun_OpenXLSX_XLSheet_getChartsheet);
    oluacls_func(L, "getWorksheet", _olua_fun_OpenXLSX_XLSheet_getWorksheet);
    oluacls_func(L, "index", _olua_fun_OpenXLSX_XLSheet_index);
    oluacls_func(L, "isSelected", _olua_fun_OpenXLSX_XLSheet_isSelected);
    oluacls_func(L, "name", _olua_fun_OpenXLSX_XLSheet_name);
    oluacls_func(L, "new", _olua_fun_OpenXLSX_XLSheet_new);
    oluacls_func(L, "setColor", _olua_fun_OpenXLSX_XLSheet_setColor);
    oluacls_func(L, "setIndex", _olua_fun_OpenXLSX_XLSheet_setIndex);
    oluacls_func(L, "setName", _olua_fun_OpenXLSX_XLSheet_setName);
    oluacls_func(L, "setSelected", _olua_fun_OpenXLSX_XLSheet_setSelected);
    oluacls_func(L, "setVisibility", _olua_fun_OpenXLSX_XLSheet_setVisibility);
    oluacls_func(L, "visibility", _olua_fun_OpenXLSX_XLSheet_visibility);
    oluacls_prop(L, "chartsheet", _olua_fun_OpenXLSX_XLSheet_getChartsheet, nullptr);
    oluacls_prop(L, "selected", _olua_fun_OpenXLSX_XLSheet_isSelected, _olua_fun_OpenXLSX_XLSheet_setSelected);
    oluacls_prop(L, "worksheet", _olua_fun_OpenXLSX_XLSheet_getWorksheet, nullptr);

    return 1;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_openxlsx_XLSheet(lua_State *L)
{
    olua_require(L, ".olua.module.openxlsx",  _olua_module_openxlsx);
    if (!olua_getclass(L, "openxlsx.XLSheet")) {
        luaL_error(L, "class not found: OpenXLSX::XLSheet");
    }
    return 1;
}
OLUA_END_DECLS

static int _olua_fun_OpenXLSX_XLChartsheet___gc(lua_State *L)
{
    try {
        olua_startinvoke(L);
        auto self = (OpenXLSX::XLChartsheet *)olua_toobj(L, 1, "openxlsx.XLChartsheet");
        olua_postgc(L, self);
        olua_endinvoke(L);
        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLChartsheet::__gc(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLChartsheet_clone(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLChartsheet *self = nullptr;
        std::string arg1;       /** newName */

        olua_to_object(L, 1, &self, "openxlsx.XLChartsheet");
        olua_check_string(L, 2, &arg1);

        // @copyfrom(OpenXLSX::XLSheetBase) void clone(const std::string &newName)
        self->clone(arg1);

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLChartsheet::clone(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLChartsheet_color(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLChartsheet *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLChartsheet");

        // @copyfrom(OpenXLSX::XLSheetBase) OpenXLSX::XLColor color()
        OpenXLSX::XLColor ret = self->color();
        int num_ret = olua_copy_object(L, ret, "openxlsx.XLColor");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLChartsheet::color(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLChartsheet_index(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLChartsheet *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLChartsheet");

        // @copyfrom(OpenXLSX::XLSheetBase) uint16_t index()
        uint16_t ret = self->index();
        int num_ret = olua_push_integer(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLChartsheet::index(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLChartsheet_isSelected(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLChartsheet *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLChartsheet");

        // @copyfrom(OpenXLSX::XLSheetBase) bool isSelected()
        bool ret = self->isSelected();
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLChartsheet::isSelected(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLChartsheet_name(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLChartsheet *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLChartsheet");

        // @copyfrom(OpenXLSX::XLSheetBase) std::string name()
        std::string ret = self->name();
        int num_ret = olua_push_string(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLChartsheet::name(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLChartsheet_new$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        // OpenXLSX::XLChartsheet()
        OpenXLSX::XLChartsheet *ret = new OpenXLSX::XLChartsheet();
        int num_ret = olua_push_object(L, ret, "openxlsx.XLChartsheet");
        olua_postnew(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLChartsheet::new(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLChartsheet_new$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLXmlData *arg1 = nullptr;       /** xmlData */

        olua_check_object(L, 1, &arg1, "openxlsx.XLXmlData");

        // OpenXLSX::XLChartsheet(OpenXLSX::XLXmlData *xmlData)
        OpenXLSX::XLChartsheet *ret = new OpenXLSX::XLChartsheet(arg1);
        int num_ret = olua_push_object(L, ret, "openxlsx.XLChartsheet");
        olua_postnew(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLChartsheet::new(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLChartsheet_new(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 0) {
        // OpenXLSX::XLChartsheet()
        return _olua_fun_OpenXLSX_XLChartsheet_new$1(L);
    }

    if (num_args == 1) {
        // if ((olua_is_object(L, 1, "openxlsx.XLXmlData"))) {
            // OpenXLSX::XLChartsheet(OpenXLSX::XLXmlData *xmlData)
            return _olua_fun_OpenXLSX_XLChartsheet_new$2(L);
        // }
    }

    luaL_error(L, "method 'OpenXLSX::XLChartsheet::new' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_OpenXLSX_XLChartsheet_setColor(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLChartsheet *self = nullptr;
        OpenXLSX::XLColor *arg1;       /** color */

        olua_to_object(L, 1, &self, "openxlsx.XLChartsheet");
        olua_check_object(L, 2, &arg1, "openxlsx.XLColor");

        // @copyfrom(OpenXLSX::XLSheetBase) void setColor(const OpenXLSX::XLColor &color)
        self->setColor(*arg1);

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLChartsheet::setColor(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLChartsheet_setIndex(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLChartsheet *self = nullptr;
        uint16_t arg1 = 0;       /** index */

        olua_to_object(L, 1, &self, "openxlsx.XLChartsheet");
        olua_check_integer(L, 2, &arg1);

        // @copyfrom(OpenXLSX::XLSheetBase) void setIndex(uint16_t index)
        self->setIndex(arg1);

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLChartsheet::setIndex(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLChartsheet_setName(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLChartsheet *self = nullptr;
        std::string arg1;       /** sheetName */

        olua_to_object(L, 1, &self, "openxlsx.XLChartsheet");
        olua_check_string(L, 2, &arg1);

        // @copyfrom(OpenXLSX::XLSheetBase) void setName(const std::string &sheetName)
        self->setName(arg1);

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLChartsheet::setName(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLChartsheet_setSelected(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLChartsheet *self = nullptr;
        bool arg1 = false;       /** selected */

        olua_to_object(L, 1, &self, "openxlsx.XLChartsheet");
        olua_check_bool(L, 2, &arg1);

        // @copyfrom(OpenXLSX::XLSheetBase) void setSelected(bool selected)
        self->setSelected(arg1);

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLChartsheet::setSelected(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLChartsheet_setVisibility(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLChartsheet *self = nullptr;
        OpenXLSX::XLSheetState arg1 = (OpenXLSX::XLSheetState)0;       /** state */

        olua_to_object(L, 1, &self, "openxlsx.XLChartsheet");
        olua_check_enum(L, 2, &arg1);

        // @copyfrom(OpenXLSX::XLSheetBase) void setVisibility(OpenXLSX::XLSheetState state)
        self->setVisibility(arg1);

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLChartsheet::setVisibility(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLChartsheet_visibility(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLChartsheet *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLChartsheet");

        // @copyfrom(OpenXLSX::XLSheetBase) OpenXLSX::XLSheetState visibility()
        OpenXLSX::XLSheetState ret = self->visibility();
        int num_ret = olua_push_enum(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLChartsheet::visibility(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_cls_openxlsx_XLChartsheet(lua_State *L)
{
    oluacls_class<OpenXLSX::XLChartsheet>(L, "openxlsx.XLChartsheet");
    oluacls_func(L, "__gc", _olua_fun_OpenXLSX_XLChartsheet___gc);
    oluacls_func(L, "clone", _olua_fun_OpenXLSX_XLChartsheet_clone);
    oluacls_func(L, "color", _olua_fun_OpenXLSX_XLChartsheet_color);
    oluacls_func(L, "index", _olua_fun_OpenXLSX_XLChartsheet_index);
    oluacls_func(L, "isSelected", _olua_fun_OpenXLSX_XLChartsheet_isSelected);
    oluacls_func(L, "name", _olua_fun_OpenXLSX_XLChartsheet_name);
    oluacls_func(L, "new", _olua_fun_OpenXLSX_XLChartsheet_new);
    oluacls_func(L, "setColor", _olua_fun_OpenXLSX_XLChartsheet_setColor);
    oluacls_func(L, "setIndex", _olua_fun_OpenXLSX_XLChartsheet_setIndex);
    oluacls_func(L, "setName", _olua_fun_OpenXLSX_XLChartsheet_setName);
    oluacls_func(L, "setSelected", _olua_fun_OpenXLSX_XLChartsheet_setSelected);
    oluacls_func(L, "setVisibility", _olua_fun_OpenXLSX_XLChartsheet_setVisibility);
    oluacls_func(L, "visibility", _olua_fun_OpenXLSX_XLChartsheet_visibility);
    oluacls_prop(L, "selected", _olua_fun_OpenXLSX_XLChartsheet_isSelected, _olua_fun_OpenXLSX_XLChartsheet_setSelected);

    return 1;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_openxlsx_XLChartsheet(lua_State *L)
{
    olua_require(L, ".olua.module.openxlsx",  _olua_module_openxlsx);
    if (!olua_getclass(L, "openxlsx.XLChartsheet")) {
        luaL_error(L, "class not found: OpenXLSX::XLChartsheet");
    }
    return 1;
}
OLUA_END_DECLS

static int _olua_fun_OpenXLSX_XLSharedStrings_appendString(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLSharedStrings *self = nullptr;
        std::string arg1;       /** str */

        olua_to_object(L, 1, &self, "openxlsx.XLSharedStrings");
        olua_check_string(L, 2, &arg1);

        // int32_t appendString(const std::string &str)
        int32_t ret = self->appendString(arg1);
        int num_ret = olua_push_integer(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLSharedStrings::appendString(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLSharedStrings_clearString(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLSharedStrings *self = nullptr;
        int32_t arg1 = 0;       /** index */

        olua_to_object(L, 1, &self, "openxlsx.XLSharedStrings");
        olua_check_integer(L, 2, &arg1);

        // void clearString(int32_t index)
        self->clearString(arg1);

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLSharedStrings::clearString(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLSharedStrings_getString(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLSharedStrings *self = nullptr;
        int32_t arg1 = 0;       /** index */

        olua_to_object(L, 1, &self, "openxlsx.XLSharedStrings");
        olua_check_integer(L, 2, &arg1);

        // const char *getString(int32_t index)
        const char *ret = self->getString(arg1);
        int num_ret = olua_push_string(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLSharedStrings::getString(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLSharedStrings_getStringIndex(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLSharedStrings *self = nullptr;
        std::string arg1;       /** str */

        olua_to_object(L, 1, &self, "openxlsx.XLSharedStrings");
        olua_check_string(L, 2, &arg1);

        // int32_t getStringIndex(const std::string &str)
        int32_t ret = self->getStringIndex(arg1);
        int num_ret = olua_push_integer(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLSharedStrings::getStringIndex(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLSharedStrings_new(lua_State *L)
{
    try {
        olua_startinvoke(L);

        // OpenXLSX::XLSharedStrings()
        OpenXLSX::XLSharedStrings *ret = new OpenXLSX::XLSharedStrings();
        int num_ret = olua_push_object(L, ret, "openxlsx.XLSharedStrings");
        olua_postnew(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLSharedStrings::new(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLSharedStrings_stringExists(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLSharedStrings *self = nullptr;
        std::string arg1;       /** str */

        olua_to_object(L, 1, &self, "openxlsx.XLSharedStrings");
        olua_check_string(L, 2, &arg1);

        // bool stringExists(const std::string &str)
        bool ret = self->stringExists(arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLSharedStrings::stringExists(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_cls_openxlsx_XLSharedStrings(lua_State *L)
{
    oluacls_class<OpenXLSX::XLSharedStrings, OpenXLSX::XLXmlFile>(L, "openxlsx.XLSharedStrings");
    oluacls_func(L, "appendString", _olua_fun_OpenXLSX_XLSharedStrings_appendString);
    oluacls_func(L, "clearString", _olua_fun_OpenXLSX_XLSharedStrings_clearString);
    oluacls_func(L, "getString", _olua_fun_OpenXLSX_XLSharedStrings_getString);
    oluacls_func(L, "getStringIndex", _olua_fun_OpenXLSX_XLSharedStrings_getStringIndex);
    oluacls_func(L, "new", _olua_fun_OpenXLSX_XLSharedStrings_new);
    oluacls_func(L, "stringExists", _olua_fun_OpenXLSX_XLSharedStrings_stringExists);

    return 1;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_openxlsx_XLSharedStrings(lua_State *L)
{
    olua_require(L, ".olua.module.openxlsx",  _olua_module_openxlsx);
    if (!olua_getclass(L, "openxlsx.XLSharedStrings")) {
        luaL_error(L, "class not found: OpenXLSX::XLSharedStrings");
    }
    return 1;
}
OLUA_END_DECLS

static int _olua_fun_OpenXLSX_XLWorksheet___gc(lua_State *L)
{
    try {
        olua_startinvoke(L);
        auto self = (OpenXLSX::XLWorksheet *)olua_toobj(L, 1, "openxlsx.XLWorksheet");
        olua_postgc(L, self);
        olua_endinvoke(L);
        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLWorksheet::__gc(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLWorksheet_cell$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLWorksheet *self = nullptr;
        std::string arg1;       /** ref */

        olua_to_object(L, 1, &self, "openxlsx.XLWorksheet");
        olua_check_string(L, 2, &arg1);

        // OpenXLSX::XLCellAssignable cell(const std::string &ref)
        OpenXLSX::XLCellAssignable ret = self->cell(arg1);
        int num_ret = olua_copy_object(L, ret, "openxlsx.XLCellAssignable");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLWorksheet::cell(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLWorksheet_cell$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLWorksheet *self = nullptr;
        OpenXLSX::XLCellReference *arg1;       /** ref */
        OpenXLSX::XLCellReference arg1_fromstring = OpenXLSX::XLCellReference("A1");       /** ref */

        olua_to_object(L, 1, &self, "openxlsx.XLWorksheet");
        if (olua_isstring(L, 2)) {
            olua_check_string(L, 2, &arg1_fromstring);
            arg1 = &arg1_fromstring;
        } else {
            olua_check_object(L, 2, &arg1, "openxlsx.XLCellReference");
        }

        // OpenXLSX::XLCell cell(const OpenXLSX::XLCellReference &ref)
        OpenXLSX::XLCell ret = self->cell(*arg1);
        int num_ret = olua_copy_object(L, ret, "openxlsx.XLCell");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLWorksheet::cell(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLWorksheet_cell$3(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLWorksheet *self = nullptr;
        uint32_t arg1 = 0;       /** rowNumber */
        uint16_t arg2 = 0;       /** columnNumber */

        olua_to_object(L, 1, &self, "openxlsx.XLWorksheet");
        olua_check_integer(L, 2, &arg1);
        olua_check_integer(L, 3, &arg2);

        // OpenXLSX::XLCell cell(uint32_t rowNumber, uint16_t columnNumber)
        OpenXLSX::XLCell ret = self->cell(arg1, arg2);
        int num_ret = olua_copy_object(L, ret, "openxlsx.XLCell");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLWorksheet::cell(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLWorksheet_cell(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 2) {
        if ((olua_is_object(L, 1, "openxlsx.XLWorksheet")) && (olua_is_string(L, 2))) {
            // OpenXLSX::XLCellAssignable cell(const std::string &ref)
            return _olua_fun_OpenXLSX_XLWorksheet_cell$1(L);
        }

        // if ((olua_is_object(L, 1, "openxlsx.XLWorksheet")) && (olua_is_object(L, 2, "openxlsx.XLCellReference") || olua_is_string(L, 2))) {
            // OpenXLSX::XLCell cell(const OpenXLSX::XLCellReference &ref)
            return _olua_fun_OpenXLSX_XLWorksheet_cell$2(L);
        // }
    }

    if (num_args == 3) {
        // if ((olua_is_object(L, 1, "openxlsx.XLWorksheet")) && (olua_is_integer(L, 2)) && (olua_is_integer(L, 3))) {
            // OpenXLSX::XLCell cell(uint32_t rowNumber, uint16_t columnNumber)
            return _olua_fun_OpenXLSX_XLWorksheet_cell$3(L);
        // }
    }

    luaL_error(L, "method 'OpenXLSX::XLWorksheet::cell' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_OpenXLSX_XLWorksheet_clone(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLWorksheet *self = nullptr;
        std::string arg1;       /** newName */

        olua_to_object(L, 1, &self, "openxlsx.XLWorksheet");
        olua_check_string(L, 2, &arg1);

        // @copyfrom(OpenXLSX::XLSheetBase) void clone(const std::string &newName)
        self->clone(arg1);

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLWorksheet::clone(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLWorksheet_color(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLWorksheet *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLWorksheet");

        // @copyfrom(OpenXLSX::XLSheetBase) OpenXLSX::XLColor color()
        OpenXLSX::XLColor ret = self->color();
        int num_ret = olua_copy_object(L, ret, "openxlsx.XLColor");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLWorksheet::color(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLWorksheet_column(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLWorksheet *self = nullptr;
        uint16_t arg1 = 0;       /** columnNumber */

        olua_to_object(L, 1, &self, "openxlsx.XLWorksheet");
        olua_check_integer(L, 2, &arg1);

        // OpenXLSX::XLColumn column(uint16_t columnNumber)
        OpenXLSX::XLColumn ret = self->column(arg1);
        int num_ret = olua_copy_object(L, ret, "openxlsx.XLColumn");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLWorksheet::column(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLWorksheet_columnCount(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLWorksheet *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLWorksheet");

        // uint16_t columnCount()
        uint16_t ret = self->columnCount();
        int num_ret = olua_push_integer(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLWorksheet::columnCount(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLWorksheet_index(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLWorksheet *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLWorksheet");

        // @copyfrom(OpenXLSX::XLSheetBase) uint16_t index()
        uint16_t ret = self->index();
        int num_ret = olua_push_integer(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLWorksheet::index(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLWorksheet_isActive(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLWorksheet *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLWorksheet");

        // @copyfrom(OpenXLSX::XLSheetBase) bool isActive()
        bool ret = self->isActive();
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLWorksheet::isActive(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLWorksheet_isSelected(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLWorksheet *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLWorksheet");

        // @copyfrom(OpenXLSX::XLSheetBase) bool isSelected()
        bool ret = self->isSelected();
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLWorksheet::isSelected(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLWorksheet_lastCell(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLWorksheet *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLWorksheet");

        // OpenXLSX::XLCellReference lastCell()
        OpenXLSX::XLCellReference ret = self->lastCell();
        int num_ret = olua_copy_object(L, ret, "openxlsx.XLCellReference");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLWorksheet::lastCell(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLWorksheet_name(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLWorksheet *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLWorksheet");

        // @copyfrom(OpenXLSX::XLSheetBase) std::string name()
        std::string ret = self->name();
        int num_ret = olua_push_string(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLWorksheet::name(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLWorksheet_new$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        // OpenXLSX::XLWorksheet()
        OpenXLSX::XLWorksheet *ret = new OpenXLSX::XLWorksheet();
        int num_ret = olua_push_object(L, ret, "openxlsx.XLWorksheet");
        olua_postnew(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLWorksheet::new(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLWorksheet_new$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLXmlData *arg1 = nullptr;       /** xmlData */

        olua_check_object(L, 1, &arg1, "openxlsx.XLXmlData");

        // OpenXLSX::XLWorksheet(OpenXLSX::XLXmlData *xmlData)
        OpenXLSX::XLWorksheet *ret = new OpenXLSX::XLWorksheet(arg1);
        int num_ret = olua_push_object(L, ret, "openxlsx.XLWorksheet");
        olua_postnew(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLWorksheet::new(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLWorksheet_new(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 0) {
        // OpenXLSX::XLWorksheet()
        return _olua_fun_OpenXLSX_XLWorksheet_new$1(L);
    }

    if (num_args == 1) {
        // if ((olua_is_object(L, 1, "openxlsx.XLXmlData"))) {
            // OpenXLSX::XLWorksheet(OpenXLSX::XLXmlData *xmlData)
            return _olua_fun_OpenXLSX_XLWorksheet_new$2(L);
        // }
    }

    luaL_error(L, "method 'OpenXLSX::XLWorksheet::new' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_OpenXLSX_XLWorksheet_range$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLWorksheet *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLWorksheet");

        // OpenXLSX::XLCellRange range()
        OpenXLSX::XLCellRange ret = self->range();
        int num_ret = olua_copy_object(L, ret, "openxlsx.XLCellRange");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLWorksheet::range(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLWorksheet_range$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLWorksheet *self = nullptr;
        OpenXLSX::XLCellReference *arg1;       /** topLeft */
        OpenXLSX::XLCellReference arg1_fromstring = OpenXLSX::XLCellReference("A1");       /** topLeft */
        OpenXLSX::XLCellReference *arg2;       /** bottomRight */
        OpenXLSX::XLCellReference arg2_fromstring = OpenXLSX::XLCellReference("A1");       /** bottomRight */

        olua_to_object(L, 1, &self, "openxlsx.XLWorksheet");
        if (olua_isstring(L, 2)) {
            olua_check_string(L, 2, &arg1_fromstring);
            arg1 = &arg1_fromstring;
        } else {
            olua_check_object(L, 2, &arg1, "openxlsx.XLCellReference");
        }
        if (olua_isstring(L, 3)) {
            olua_check_string(L, 3, &arg2_fromstring);
            arg2 = &arg2_fromstring;
        } else {
            olua_check_object(L, 3, &arg2, "openxlsx.XLCellReference");
        }

        // OpenXLSX::XLCellRange range(const OpenXLSX::XLCellReference &topLeft, const OpenXLSX::XLCellReference &bottomRight)
        OpenXLSX::XLCellRange ret = self->range(*arg1, *arg2);
        int num_ret = olua_copy_object(L, ret, "openxlsx.XLCellRange");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLWorksheet::range(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLWorksheet_range(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 1) {
        // OpenXLSX::XLCellRange range()
        return _olua_fun_OpenXLSX_XLWorksheet_range$1(L);
    }

    if (num_args == 3) {
        // if ((olua_is_object(L, 1, "openxlsx.XLWorksheet")) && (olua_is_object(L, 2, "openxlsx.XLCellReference") || olua_is_string(L, 2)) && (olua_is_object(L, 3, "openxlsx.XLCellReference") || olua_is_string(L, 3))) {
            // OpenXLSX::XLCellRange range(const OpenXLSX::XLCellReference &topLeft, const OpenXLSX::XLCellReference &bottomRight)
            return _olua_fun_OpenXLSX_XLWorksheet_range$2(L);
        // }
    }

    luaL_error(L, "method 'OpenXLSX::XLWorksheet::range' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_OpenXLSX_XLWorksheet_row(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLWorksheet *self = nullptr;
        uint32_t arg1 = 0;       /** rowNumber */

        olua_to_object(L, 1, &self, "openxlsx.XLWorksheet");
        olua_check_integer(L, 2, &arg1);

        // OpenXLSX::XLRow row(uint32_t rowNumber)
        OpenXLSX::XLRow ret = self->row(arg1);
        int num_ret = olua_copy_object(L, ret, "openxlsx.XLRow");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLWorksheet::row(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLWorksheet_rowCount(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLWorksheet *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLWorksheet");

        // uint32_t rowCount()
        uint32_t ret = self->rowCount();
        int num_ret = olua_push_integer(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLWorksheet::rowCount(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLWorksheet_rows$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLWorksheet *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLWorksheet");

        // OpenXLSX::XLRowRange rows()
        OpenXLSX::XLRowRange ret = self->rows();
        int num_ret = olua_copy_object(L, ret, "openxlsx.XLRowRange");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLWorksheet::rows(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLWorksheet_rows$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLWorksheet *self = nullptr;
        uint32_t arg1 = 0;       /** rowCount */

        olua_to_object(L, 1, &self, "openxlsx.XLWorksheet");
        olua_check_integer(L, 2, &arg1);

        // OpenXLSX::XLRowRange rows(uint32_t rowCount)
        OpenXLSX::XLRowRange ret = self->rows(arg1);
        int num_ret = olua_copy_object(L, ret, "openxlsx.XLRowRange");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLWorksheet::rows(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLWorksheet_rows$3(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLWorksheet *self = nullptr;
        uint32_t arg1 = 0;       /** firstRow */
        uint32_t arg2 = 0;       /** lastRow */

        olua_to_object(L, 1, &self, "openxlsx.XLWorksheet");
        olua_check_integer(L, 2, &arg1);
        olua_check_integer(L, 3, &arg2);

        // OpenXLSX::XLRowRange rows(uint32_t firstRow, uint32_t lastRow)
        OpenXLSX::XLRowRange ret = self->rows(arg1, arg2);
        int num_ret = olua_copy_object(L, ret, "openxlsx.XLRowRange");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLWorksheet::rows(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLWorksheet_rows(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 1) {
        // OpenXLSX::XLRowRange rows()
        return _olua_fun_OpenXLSX_XLWorksheet_rows$1(L);
    }

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "openxlsx.XLWorksheet")) && (olua_is_integer(L, 2))) {
            // OpenXLSX::XLRowRange rows(uint32_t rowCount)
            return _olua_fun_OpenXLSX_XLWorksheet_rows$2(L);
        // }
    }

    if (num_args == 3) {
        // if ((olua_is_object(L, 1, "openxlsx.XLWorksheet")) && (olua_is_integer(L, 2)) && (olua_is_integer(L, 3))) {
            // OpenXLSX::XLRowRange rows(uint32_t firstRow, uint32_t lastRow)
            return _olua_fun_OpenXLSX_XLWorksheet_rows$3(L);
        // }
    }

    luaL_error(L, "method 'OpenXLSX::XLWorksheet::rows' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_OpenXLSX_XLWorksheet_setActive(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLWorksheet *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLWorksheet");

        // @copyfrom(OpenXLSX::XLSheetBase) bool setActive()
        bool ret = self->setActive();
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLWorksheet::setActive(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLWorksheet_setColor(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLWorksheet *self = nullptr;
        OpenXLSX::XLColor *arg1;       /** color */

        olua_to_object(L, 1, &self, "openxlsx.XLWorksheet");
        olua_check_object(L, 2, &arg1, "openxlsx.XLColor");

        // @copyfrom(OpenXLSX::XLSheetBase) void setColor(const OpenXLSX::XLColor &color)
        self->setColor(*arg1);

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLWorksheet::setColor(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLWorksheet_setIndex(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLWorksheet *self = nullptr;
        uint16_t arg1 = 0;       /** index */

        olua_to_object(L, 1, &self, "openxlsx.XLWorksheet");
        olua_check_integer(L, 2, &arg1);

        // @copyfrom(OpenXLSX::XLSheetBase) void setIndex(uint16_t index)
        self->setIndex(arg1);

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLWorksheet::setIndex(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLWorksheet_setName(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLWorksheet *self = nullptr;
        std::string arg1;       /** sheetName */

        olua_to_object(L, 1, &self, "openxlsx.XLWorksheet");
        olua_check_string(L, 2, &arg1);

        // @copyfrom(OpenXLSX::XLSheetBase) void setName(const std::string &sheetName)
        self->setName(arg1);

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLWorksheet::setName(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLWorksheet_setSelected(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLWorksheet *self = nullptr;
        bool arg1 = false;       /** selected */

        olua_to_object(L, 1, &self, "openxlsx.XLWorksheet");
        olua_check_bool(L, 2, &arg1);

        // @copyfrom(OpenXLSX::XLSheetBase) void setSelected(bool selected)
        self->setSelected(arg1);

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLWorksheet::setSelected(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLWorksheet_setVisibility(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLWorksheet *self = nullptr;
        OpenXLSX::XLSheetState arg1 = (OpenXLSX::XLSheetState)0;       /** state */

        olua_to_object(L, 1, &self, "openxlsx.XLWorksheet");
        olua_check_enum(L, 2, &arg1);

        // @copyfrom(OpenXLSX::XLSheetBase) void setVisibility(OpenXLSX::XLSheetState state)
        self->setVisibility(arg1);

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLWorksheet::setVisibility(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLWorksheet_updateSheetName(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLWorksheet *self = nullptr;
        std::string arg1;       /** oldName */
        std::string arg2;       /** newName */

        olua_to_object(L, 1, &self, "openxlsx.XLWorksheet");
        olua_check_string(L, 2, &arg1);
        olua_check_string(L, 3, &arg2);

        // void updateSheetName(const std::string &oldName, const std::string &newName)
        self->updateSheetName(arg1, arg2);

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLWorksheet::updateSheetName(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLWorksheet_visibility(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLWorksheet *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLWorksheet");

        // @copyfrom(OpenXLSX::XLSheetBase) OpenXLSX::XLSheetState visibility()
        OpenXLSX::XLSheetState ret = self->visibility();
        int num_ret = olua_push_enum(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLWorksheet::visibility(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_cls_openxlsx_XLWorksheet(lua_State *L)
{
    oluacls_class<OpenXLSX::XLWorksheet>(L, "openxlsx.XLWorksheet");
    oluacls_func(L, "__gc", _olua_fun_OpenXLSX_XLWorksheet___gc);
    oluacls_func(L, "cell", _olua_fun_OpenXLSX_XLWorksheet_cell);
    oluacls_func(L, "clone", _olua_fun_OpenXLSX_XLWorksheet_clone);
    oluacls_func(L, "color", _olua_fun_OpenXLSX_XLWorksheet_color);
    oluacls_func(L, "column", _olua_fun_OpenXLSX_XLWorksheet_column);
    oluacls_func(L, "columnCount", _olua_fun_OpenXLSX_XLWorksheet_columnCount);
    oluacls_func(L, "index", _olua_fun_OpenXLSX_XLWorksheet_index);
    oluacls_func(L, "isActive", _olua_fun_OpenXLSX_XLWorksheet_isActive);
    oluacls_func(L, "isSelected", _olua_fun_OpenXLSX_XLWorksheet_isSelected);
    oluacls_func(L, "lastCell", _olua_fun_OpenXLSX_XLWorksheet_lastCell);
    oluacls_func(L, "name", _olua_fun_OpenXLSX_XLWorksheet_name);
    oluacls_func(L, "new", _olua_fun_OpenXLSX_XLWorksheet_new);
    oluacls_func(L, "range", _olua_fun_OpenXLSX_XLWorksheet_range);
    oluacls_func(L, "row", _olua_fun_OpenXLSX_XLWorksheet_row);
    oluacls_func(L, "rowCount", _olua_fun_OpenXLSX_XLWorksheet_rowCount);
    oluacls_func(L, "rows", _olua_fun_OpenXLSX_XLWorksheet_rows);
    oluacls_func(L, "setActive", _olua_fun_OpenXLSX_XLWorksheet_setActive);
    oluacls_func(L, "setColor", _olua_fun_OpenXLSX_XLWorksheet_setColor);
    oluacls_func(L, "setIndex", _olua_fun_OpenXLSX_XLWorksheet_setIndex);
    oluacls_func(L, "setName", _olua_fun_OpenXLSX_XLWorksheet_setName);
    oluacls_func(L, "setSelected", _olua_fun_OpenXLSX_XLWorksheet_setSelected);
    oluacls_func(L, "setVisibility", _olua_fun_OpenXLSX_XLWorksheet_setVisibility);
    oluacls_func(L, "updateSheetName", _olua_fun_OpenXLSX_XLWorksheet_updateSheetName);
    oluacls_func(L, "visibility", _olua_fun_OpenXLSX_XLWorksheet_visibility);
    oluacls_prop(L, "active", _olua_fun_OpenXLSX_XLWorksheet_isActive, _olua_fun_OpenXLSX_XLWorksheet_setActive);
    oluacls_prop(L, "selected", _olua_fun_OpenXLSX_XLWorksheet_isSelected, _olua_fun_OpenXLSX_XLWorksheet_setSelected);

    return 1;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_openxlsx_XLWorksheet(lua_State *L)
{
    olua_require(L, ".olua.module.openxlsx",  _olua_module_openxlsx);
    if (!olua_getclass(L, "openxlsx.XLWorksheet")) {
        luaL_error(L, "class not found: OpenXLSX::XLWorksheet");
    }
    return 1;
}
OLUA_END_DECLS

static int _olua_fun_OpenXLSX_XLWorkbook_addWorksheet(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLWorkbook *self = nullptr;
        std::string arg1;       /** sheetName */

        olua_to_object(L, 1, &self, "openxlsx.XLWorkbook");
        olua_check_string(L, 2, &arg1);

        // void addWorksheet(const std::string &sheetName)
        self->addWorksheet(arg1);

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLWorkbook::addWorksheet(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLWorkbook_chartsheet$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLWorkbook *self = nullptr;
        std::string arg1;       /** sheetName */

        olua_to_object(L, 1, &self, "openxlsx.XLWorkbook");
        olua_check_string(L, 2, &arg1);

        // OpenXLSX::XLChartsheet chartsheet(const std::string &sheetName)
        OpenXLSX::XLChartsheet ret = self->chartsheet(arg1);
        int num_ret = olua_copy_object(L, ret, "openxlsx.XLChartsheet");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLWorkbook::chartsheet(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLWorkbook_chartsheet$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLWorkbook *self = nullptr;
        uint16_t arg1 = 0;       /** index */

        olua_to_object(L, 1, &self, "openxlsx.XLWorkbook");
        olua_check_integer(L, 2, &arg1);

        // OpenXLSX::XLChartsheet chartsheet(uint16_t index)
        OpenXLSX::XLChartsheet ret = self->chartsheet(arg1);
        int num_ret = olua_copy_object(L, ret, "openxlsx.XLChartsheet");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLWorkbook::chartsheet(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLWorkbook_chartsheet(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 2) {
        if ((olua_is_object(L, 1, "openxlsx.XLWorkbook")) && (olua_is_string(L, 2))) {
            // OpenXLSX::XLChartsheet chartsheet(const std::string &sheetName)
            return _olua_fun_OpenXLSX_XLWorkbook_chartsheet$1(L);
        }

        // if ((olua_is_object(L, 1, "openxlsx.XLWorkbook")) && (olua_is_integer(L, 2))) {
            // OpenXLSX::XLChartsheet chartsheet(uint16_t index)
            return _olua_fun_OpenXLSX_XLWorkbook_chartsheet$2(L);
        // }
    }

    luaL_error(L, "method 'OpenXLSX::XLWorkbook::chartsheet' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_OpenXLSX_XLWorkbook_chartsheetCount(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLWorkbook *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLWorkbook");

        // unsigned int chartsheetCount()
        unsigned int ret = self->chartsheetCount();
        int num_ret = olua_push_integer(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLWorkbook::chartsheetCount(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLWorkbook_chartsheetExists(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLWorkbook *self = nullptr;
        std::string arg1;       /** sheetName */

        olua_to_object(L, 1, &self, "openxlsx.XLWorkbook");
        olua_check_string(L, 2, &arg1);

        // bool chartsheetExists(const std::string &sheetName)
        bool ret = self->chartsheetExists(arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLWorkbook::chartsheetExists(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLWorkbook_chartsheetNames(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLWorkbook *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLWorkbook");

        // std::vector<std::string> chartsheetNames()
        std::vector<std::string> ret = self->chartsheetNames();
        int num_ret = olua_push_array<std::string>(L, ret, [L](std::string &arg1) {
            olua_push_string(L, arg1);
        });

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLWorkbook::chartsheetNames(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLWorkbook_cloneSheet(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLWorkbook *self = nullptr;
        std::string arg1;       /** existingName */
        std::string arg2;       /** newName */

        olua_to_object(L, 1, &self, "openxlsx.XLWorkbook");
        olua_check_string(L, 2, &arg1);
        olua_check_string(L, 3, &arg2);

        // void cloneSheet(const std::string &existingName, const std::string &newName)
        self->cloneSheet(arg1, arg2);

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLWorkbook::cloneSheet(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLWorkbook_deleteNamedRanges(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLWorkbook *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLWorkbook");

        // void deleteNamedRanges()
        self->deleteNamedRanges();

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLWorkbook::deleteNamedRanges(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLWorkbook_deleteSheet(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLWorkbook *self = nullptr;
        std::string arg1;       /** sheetName */

        olua_to_object(L, 1, &self, "openxlsx.XLWorkbook");
        olua_check_string(L, 2, &arg1);

        // void deleteSheet(const std::string &sheetName)
        self->deleteSheet(arg1);

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLWorkbook::deleteSheet(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLWorkbook_hasSharedStrings(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLWorkbook *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLWorkbook");

        // bool hasSharedStrings()
        bool ret = self->hasSharedStrings();
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLWorkbook::hasSharedStrings(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLWorkbook_indexOfSheet(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLWorkbook *self = nullptr;
        std::string arg1;       /** sheetName */

        olua_to_object(L, 1, &self, "openxlsx.XLWorkbook");
        olua_check_string(L, 2, &arg1);

        // unsigned int indexOfSheet(const std::string &sheetName)
        unsigned int ret = self->indexOfSheet(arg1);
        int num_ret = olua_push_integer(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLWorkbook::indexOfSheet(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLWorkbook_new$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        // OpenXLSX::XLWorkbook()
        OpenXLSX::XLWorkbook *ret = new OpenXLSX::XLWorkbook();
        int num_ret = olua_push_object(L, ret, "openxlsx.XLWorkbook");
        olua_postnew(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLWorkbook::new(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLWorkbook_new$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLXmlData *arg1 = nullptr;       /** xmlData */

        olua_check_object(L, 1, &arg1, "openxlsx.XLXmlData");

        // OpenXLSX::XLWorkbook(OpenXLSX::XLXmlData *xmlData)
        OpenXLSX::XLWorkbook *ret = new OpenXLSX::XLWorkbook(arg1);
        int num_ret = olua_push_object(L, ret, "openxlsx.XLWorkbook");
        olua_postnew(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLWorkbook::new(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLWorkbook_new(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 0) {
        // OpenXLSX::XLWorkbook()
        return _olua_fun_OpenXLSX_XLWorkbook_new$1(L);
    }

    if (num_args == 1) {
        // if ((olua_is_object(L, 1, "openxlsx.XLXmlData"))) {
            // OpenXLSX::XLWorkbook(OpenXLSX::XLXmlData *xmlData)
            return _olua_fun_OpenXLSX_XLWorkbook_new$2(L);
        // }
    }

    luaL_error(L, "method 'OpenXLSX::XLWorkbook::new' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_OpenXLSX_XLWorkbook_setFullCalculationOnLoad(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLWorkbook *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLWorkbook");

        // void setFullCalculationOnLoad()
        self->setFullCalculationOnLoad();

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLWorkbook::setFullCalculationOnLoad(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLWorkbook_setSheetIndex(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLWorkbook *self = nullptr;
        std::string arg1;       /** sheetName */
        unsigned int arg2 = 0;       /** index */

        olua_to_object(L, 1, &self, "openxlsx.XLWorkbook");
        olua_check_string(L, 2, &arg1);
        olua_check_integer(L, 3, &arg2);

        // void setSheetIndex(const std::string &sheetName, unsigned int index)
        self->setSheetIndex(arg1, arg2);

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLWorkbook::setSheetIndex(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLWorkbook_sharedStrings(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLWorkbook *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLWorkbook");

        // OpenXLSX::XLSharedStrings sharedStrings()
        OpenXLSX::XLSharedStrings ret = self->sharedStrings();
        int num_ret = olua_copy_object(L, ret, "openxlsx.XLSharedStrings");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLWorkbook::sharedStrings(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLWorkbook_sheet$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLWorkbook *self = nullptr;
        uint16_t arg1 = 0;       /** index */

        olua_to_object(L, 1, &self, "openxlsx.XLWorkbook");
        olua_check_integer(L, 2, &arg1);

        // OpenXLSX::XLSheet sheet(uint16_t index)
        OpenXLSX::XLSheet ret = self->sheet(arg1);
        int num_ret = olua_copy_object(L, ret, "openxlsx.XLSheet");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLWorkbook::sheet(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLWorkbook_sheet$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLWorkbook *self = nullptr;
        std::string arg1;       /** sheetName */

        olua_to_object(L, 1, &self, "openxlsx.XLWorkbook");
        olua_check_string(L, 2, &arg1);

        // OpenXLSX::XLSheet sheet(const std::string &sheetName)
        OpenXLSX::XLSheet ret = self->sheet(arg1);
        int num_ret = olua_copy_object(L, ret, "openxlsx.XLSheet");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLWorkbook::sheet(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLWorkbook_sheet(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 2) {
        if ((olua_is_object(L, 1, "openxlsx.XLWorkbook")) && (olua_is_integer(L, 2))) {
            // OpenXLSX::XLSheet sheet(uint16_t index)
            return _olua_fun_OpenXLSX_XLWorkbook_sheet$1(L);
        }

        // if ((olua_is_object(L, 1, "openxlsx.XLWorkbook")) && (olua_is_string(L, 2))) {
            // OpenXLSX::XLSheet sheet(const std::string &sheetName)
            return _olua_fun_OpenXLSX_XLWorkbook_sheet$2(L);
        // }
    }

    luaL_error(L, "method 'OpenXLSX::XLWorkbook::sheet' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_OpenXLSX_XLWorkbook_sheetCount(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLWorkbook *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLWorkbook");

        // unsigned int sheetCount()
        unsigned int ret = self->sheetCount();
        int num_ret = olua_push_integer(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLWorkbook::sheetCount(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLWorkbook_sheetExists(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLWorkbook *self = nullptr;
        std::string arg1;       /** sheetName */

        olua_to_object(L, 1, &self, "openxlsx.XLWorkbook");
        olua_check_string(L, 2, &arg1);

        // bool sheetExists(const std::string &sheetName)
        bool ret = self->sheetExists(arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLWorkbook::sheetExists(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLWorkbook_sheetNames(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLWorkbook *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLWorkbook");

        // std::vector<std::string> sheetNames()
        std::vector<std::string> ret = self->sheetNames();
        int num_ret = olua_push_array<std::string>(L, ret, [L](std::string &arg1) {
            olua_push_string(L, arg1);
        });

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLWorkbook::sheetNames(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLWorkbook_typeOfSheet$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLWorkbook *self = nullptr;
        std::string arg1;       /** sheetName */

        olua_to_object(L, 1, &self, "openxlsx.XLWorkbook");
        olua_check_string(L, 2, &arg1);

        // OpenXLSX::XLSheetType typeOfSheet(const std::string &sheetName)
        OpenXLSX::XLSheetType ret = self->typeOfSheet(arg1);
        int num_ret = olua_push_enum(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLWorkbook::typeOfSheet(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLWorkbook_typeOfSheet$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLWorkbook *self = nullptr;
        unsigned int arg1 = 0;       /** index */

        olua_to_object(L, 1, &self, "openxlsx.XLWorkbook");
        olua_check_integer(L, 2, &arg1);

        // OpenXLSX::XLSheetType typeOfSheet(unsigned int index)
        OpenXLSX::XLSheetType ret = self->typeOfSheet(arg1);
        int num_ret = olua_push_enum(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLWorkbook::typeOfSheet(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLWorkbook_typeOfSheet(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 2) {
        if ((olua_is_object(L, 1, "openxlsx.XLWorkbook")) && (olua_is_string(L, 2))) {
            // OpenXLSX::XLSheetType typeOfSheet(const std::string &sheetName)
            return _olua_fun_OpenXLSX_XLWorkbook_typeOfSheet$1(L);
        }

        // if ((olua_is_object(L, 1, "openxlsx.XLWorkbook")) && (olua_is_integer(L, 2))) {
            // OpenXLSX::XLSheetType typeOfSheet(unsigned int index)
            return _olua_fun_OpenXLSX_XLWorkbook_typeOfSheet$2(L);
        // }
    }

    luaL_error(L, "method 'OpenXLSX::XLWorkbook::typeOfSheet' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_OpenXLSX_XLWorkbook_updateSheetReferences(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLWorkbook *self = nullptr;
        std::string arg1;       /** oldName */
        std::string arg2;       /** newName */

        olua_to_object(L, 1, &self, "openxlsx.XLWorkbook");
        olua_check_string(L, 2, &arg1);
        olua_check_string(L, 3, &arg2);

        // void updateSheetReferences(const std::string &oldName, const std::string &newName)
        self->updateSheetReferences(arg1, arg2);

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLWorkbook::updateSheetReferences(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLWorkbook_worksheet$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLWorkbook *self = nullptr;
        std::string arg1;       /** sheetName */

        olua_to_object(L, 1, &self, "openxlsx.XLWorkbook");
        olua_check_string(L, 2, &arg1);

        // OpenXLSX::XLWorksheet worksheet(const std::string &sheetName)
        OpenXLSX::XLWorksheet ret = self->worksheet(arg1);
        int num_ret = olua_copy_object(L, ret, "openxlsx.XLWorksheet");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLWorkbook::worksheet(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLWorkbook_worksheet$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLWorkbook *self = nullptr;
        uint16_t arg1 = 0;       /** index */

        olua_to_object(L, 1, &self, "openxlsx.XLWorkbook");
        olua_check_integer(L, 2, &arg1);

        // OpenXLSX::XLWorksheet worksheet(uint16_t index)
        OpenXLSX::XLWorksheet ret = self->worksheet(arg1);
        int num_ret = olua_copy_object(L, ret, "openxlsx.XLWorksheet");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLWorkbook::worksheet(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLWorkbook_worksheet(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 2) {
        if ((olua_is_object(L, 1, "openxlsx.XLWorkbook")) && (olua_is_string(L, 2))) {
            // OpenXLSX::XLWorksheet worksheet(const std::string &sheetName)
            return _olua_fun_OpenXLSX_XLWorkbook_worksheet$1(L);
        }

        // if ((olua_is_object(L, 1, "openxlsx.XLWorkbook")) && (olua_is_integer(L, 2))) {
            // OpenXLSX::XLWorksheet worksheet(uint16_t index)
            return _olua_fun_OpenXLSX_XLWorkbook_worksheet$2(L);
        // }
    }

    luaL_error(L, "method 'OpenXLSX::XLWorkbook::worksheet' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_OpenXLSX_XLWorkbook_worksheetCount(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLWorkbook *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLWorkbook");

        // unsigned int worksheetCount()
        unsigned int ret = self->worksheetCount();
        int num_ret = olua_push_integer(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLWorkbook::worksheetCount(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLWorkbook_worksheetExists(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLWorkbook *self = nullptr;
        std::string arg1;       /** sheetName */

        olua_to_object(L, 1, &self, "openxlsx.XLWorkbook");
        olua_check_string(L, 2, &arg1);

        // bool worksheetExists(const std::string &sheetName)
        bool ret = self->worksheetExists(arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLWorkbook::worksheetExists(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLWorkbook_worksheetNames(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLWorkbook *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLWorkbook");

        // std::vector<std::string> worksheetNames()
        std::vector<std::string> ret = self->worksheetNames();
        int num_ret = olua_push_array<std::string>(L, ret, [L](std::string &arg1) {
            olua_push_string(L, arg1);
        });

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLWorkbook::worksheetNames(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_cls_openxlsx_XLWorkbook(lua_State *L)
{
    oluacls_class<OpenXLSX::XLWorkbook, OpenXLSX::XLXmlFile>(L, "openxlsx.XLWorkbook");
    oluacls_func(L, "addWorksheet", _olua_fun_OpenXLSX_XLWorkbook_addWorksheet);
    oluacls_func(L, "chartsheet", _olua_fun_OpenXLSX_XLWorkbook_chartsheet);
    oluacls_func(L, "chartsheetCount", _olua_fun_OpenXLSX_XLWorkbook_chartsheetCount);
    oluacls_func(L, "chartsheetExists", _olua_fun_OpenXLSX_XLWorkbook_chartsheetExists);
    oluacls_func(L, "chartsheetNames", _olua_fun_OpenXLSX_XLWorkbook_chartsheetNames);
    oluacls_func(L, "cloneSheet", _olua_fun_OpenXLSX_XLWorkbook_cloneSheet);
    oluacls_func(L, "deleteNamedRanges", _olua_fun_OpenXLSX_XLWorkbook_deleteNamedRanges);
    oluacls_func(L, "deleteSheet", _olua_fun_OpenXLSX_XLWorkbook_deleteSheet);
    oluacls_func(L, "hasSharedStrings", _olua_fun_OpenXLSX_XLWorkbook_hasSharedStrings);
    oluacls_func(L, "indexOfSheet", _olua_fun_OpenXLSX_XLWorkbook_indexOfSheet);
    oluacls_func(L, "new", _olua_fun_OpenXLSX_XLWorkbook_new);
    oluacls_func(L, "setFullCalculationOnLoad", _olua_fun_OpenXLSX_XLWorkbook_setFullCalculationOnLoad);
    oluacls_func(L, "setSheetIndex", _olua_fun_OpenXLSX_XLWorkbook_setSheetIndex);
    oluacls_func(L, "sharedStrings", _olua_fun_OpenXLSX_XLWorkbook_sharedStrings);
    oluacls_func(L, "sheet", _olua_fun_OpenXLSX_XLWorkbook_sheet);
    oluacls_func(L, "sheetCount", _olua_fun_OpenXLSX_XLWorkbook_sheetCount);
    oluacls_func(L, "sheetExists", _olua_fun_OpenXLSX_XLWorkbook_sheetExists);
    oluacls_func(L, "sheetNames", _olua_fun_OpenXLSX_XLWorkbook_sheetNames);
    oluacls_func(L, "typeOfSheet", _olua_fun_OpenXLSX_XLWorkbook_typeOfSheet);
    oluacls_func(L, "updateSheetReferences", _olua_fun_OpenXLSX_XLWorkbook_updateSheetReferences);
    oluacls_func(L, "worksheet", _olua_fun_OpenXLSX_XLWorkbook_worksheet);
    oluacls_func(L, "worksheetCount", _olua_fun_OpenXLSX_XLWorkbook_worksheetCount);
    oluacls_func(L, "worksheetExists", _olua_fun_OpenXLSX_XLWorkbook_worksheetExists);
    oluacls_func(L, "worksheetNames", _olua_fun_OpenXLSX_XLWorkbook_worksheetNames);

    return 1;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_openxlsx_XLWorkbook(lua_State *L)
{
    olua_require(L, ".olua.module.openxlsx",  _olua_module_openxlsx);
    if (!olua_getclass(L, "openxlsx.XLWorkbook")) {
        luaL_error(L, "class not found: OpenXLSX::XLWorkbook");
    }
    return 1;
}
OLUA_END_DECLS

static int _olua_fun_OpenXLSX_XLDocument___gc(lua_State *L)
{
    try {
        olua_startinvoke(L);
        auto self = (OpenXLSX::XLDocument *)olua_toobj(L, 1, "openxlsx.XLDocument");
        olua_postgc(L, self);
        olua_endinvoke(L);
        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLDocument::__gc(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLDocument_close(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLDocument *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLDocument");

        // void close()
        self->close();

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLDocument::close(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLDocument_create(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLDocument *self = nullptr;
        std::string arg1;       /** fileName */

        olua_to_object(L, 1, &self, "openxlsx.XLDocument");
        olua_check_string(L, 2, &arg1);

        // void create(const std::string &fileName)
        self->create(arg1);

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLDocument::create(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLDocument_deleteProperty(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLDocument *self = nullptr;
        OpenXLSX::XLProperty arg1 = (OpenXLSX::XLProperty)0;       /** theProperty */

        olua_to_object(L, 1, &self, "openxlsx.XLDocument");
        olua_check_enum(L, 2, &arg1);

        // void deleteProperty(OpenXLSX::XLProperty theProperty)
        self->deleteProperty(arg1);

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLDocument::deleteProperty(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLDocument_execCommand(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLDocument *self = nullptr;
        OpenXLSX::XLCommand *arg1;       /** command */

        olua_to_object(L, 1, &self, "openxlsx.XLDocument");
        olua_check_object(L, 2, &arg1, "openxlsx.XLCommand");

        // bool execCommand(const OpenXLSX::XLCommand &command)
        bool ret = self->execCommand(*arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLDocument::execCommand(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLDocument_execQuery(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLDocument *self = nullptr;
        OpenXLSX::XLQuery *arg1;       /** query */

        olua_to_object(L, 1, &self, "openxlsx.XLDocument");
        olua_check_object(L, 2, &arg1, "openxlsx.XLQuery");

        // OpenXLSX::XLQuery execQuery(const OpenXLSX::XLQuery &query)
        OpenXLSX::XLQuery ret = self->execQuery(*arg1);
        int num_ret = olua_copy_object(L, ret, "openxlsx.XLQuery");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLDocument::execQuery(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLDocument_isOpen(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLDocument *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLDocument");

        // bool isOpen()
        bool ret = self->isOpen();
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLDocument::isOpen(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLDocument_name(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLDocument *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLDocument");

        // std::string name()
        std::string ret = self->name();
        int num_ret = olua_push_string(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLDocument::name(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLDocument_new$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::IZipArchive *arg1;       /** zipArchive */

        olua_check_object(L, 1, &arg1, "openxlsx.IZipArchive");

        // OpenXLSX::XLDocument(@optional const OpenXLSX::IZipArchive &zipArchive)
        OpenXLSX::XLDocument *ret = new OpenXLSX::XLDocument(*arg1);
        int num_ret = olua_push_object(L, ret, "openxlsx.XLDocument");
        olua_postnew(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLDocument::new(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLDocument_new$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        // OpenXLSX::XLDocument()
        OpenXLSX::XLDocument *ret = new OpenXLSX::XLDocument();
        int num_ret = olua_push_object(L, ret, "openxlsx.XLDocument");
        olua_postnew(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLDocument::new(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLDocument_new$3(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::string arg1;       /** docPath */
        OpenXLSX::IZipArchive *arg2;       /** zipArchive */

        olua_check_string(L, 1, &arg1);
        olua_check_object(L, 2, &arg2, "openxlsx.IZipArchive");

        // OpenXLSX::XLDocument(const std::string &docPath, @optional const OpenXLSX::IZipArchive &zipArchive)
        OpenXLSX::XLDocument *ret = new OpenXLSX::XLDocument(arg1, *arg2);
        int num_ret = olua_push_object(L, ret, "openxlsx.XLDocument");
        olua_postnew(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLDocument::new(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLDocument_new$4(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::string arg1;       /** docPath */

        olua_check_string(L, 1, &arg1);

        // OpenXLSX::XLDocument(const std::string &docPath)
        OpenXLSX::XLDocument *ret = new OpenXLSX::XLDocument(arg1);
        int num_ret = olua_push_object(L, ret, "openxlsx.XLDocument");
        olua_postnew(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLDocument::new(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLDocument_new(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 0) {
        // OpenXLSX::XLDocument()
        return _olua_fun_OpenXLSX_XLDocument_new$2(L);
    }

    if (num_args == 1) {
        if ((olua_is_object(L, 1, "openxlsx.IZipArchive"))) {
            // OpenXLSX::XLDocument(@optional const OpenXLSX::IZipArchive &zipArchive)
            return _olua_fun_OpenXLSX_XLDocument_new$1(L);
        }

        // if ((olua_is_string(L, 1))) {
            // OpenXLSX::XLDocument(const std::string &docPath)
            return _olua_fun_OpenXLSX_XLDocument_new$4(L);
        // }
    }

    if (num_args == 2) {
        // if ((olua_is_string(L, 1)) && (olua_is_object(L, 2, "openxlsx.IZipArchive"))) {
            // OpenXLSX::XLDocument(const std::string &docPath, @optional const OpenXLSX::IZipArchive &zipArchive)
            return _olua_fun_OpenXLSX_XLDocument_new$3(L);
        // }
    }

    luaL_error(L, "method 'OpenXLSX::XLDocument::new' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_OpenXLSX_XLDocument_open(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLDocument *self = nullptr;
        std::string arg1;       /** fileName */

        olua_to_object(L, 1, &self, "openxlsx.XLDocument");
        olua_check_string(L, 2, &arg1);

        // void open(const std::string &fileName)
        self->open(arg1);

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLDocument::open(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLDocument_path(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLDocument *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLDocument");

        // const std::string &path()
        const std::string &ret = self->path();
        int num_ret = olua_push_string(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLDocument::path(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLDocument_property(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLDocument *self = nullptr;
        OpenXLSX::XLProperty arg1 = (OpenXLSX::XLProperty)0;       /** prop */

        olua_to_object(L, 1, &self, "openxlsx.XLDocument");
        olua_check_enum(L, 2, &arg1);

        // std::string property(OpenXLSX::XLProperty prop)
        std::string ret = self->property(arg1);
        int num_ret = olua_push_string(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLDocument::property(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLDocument_save(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLDocument *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLDocument");

        // void save()
        self->save();

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLDocument::save(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLDocument_saveAs(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLDocument *self = nullptr;
        std::string arg1;       /** fileName */

        olua_to_object(L, 1, &self, "openxlsx.XLDocument");
        olua_check_string(L, 2, &arg1);

        // void saveAs(const std::string &fileName)
        self->saveAs(arg1);

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLDocument::saveAs(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLDocument_setProperty(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLDocument *self = nullptr;
        OpenXLSX::XLProperty arg1 = (OpenXLSX::XLProperty)0;       /** prop */
        std::string arg2;       /** value */

        olua_to_object(L, 1, &self, "openxlsx.XLDocument");
        olua_check_enum(L, 2, &arg1);
        olua_check_string(L, 3, &arg2);

        // void setProperty(OpenXLSX::XLProperty prop, const std::string &value)
        self->setProperty(arg1, arg2);

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLDocument::setProperty(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLDocument_workbook(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLDocument *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLDocument");

        // OpenXLSX::XLWorkbook workbook()
        OpenXLSX::XLWorkbook ret = self->workbook();
        int num_ret = olua_copy_object(L, ret, "openxlsx.XLWorkbook");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLDocument::workbook(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_cls_openxlsx_XLDocument(lua_State *L)
{
    oluacls_class<OpenXLSX::XLDocument>(L, "openxlsx.XLDocument");
    oluacls_func(L, "__gc", _olua_fun_OpenXLSX_XLDocument___gc);
    oluacls_func(L, "close", _olua_fun_OpenXLSX_XLDocument_close);
    oluacls_func(L, "create", _olua_fun_OpenXLSX_XLDocument_create);
    oluacls_func(L, "deleteProperty", _olua_fun_OpenXLSX_XLDocument_deleteProperty);
    oluacls_func(L, "execCommand", _olua_fun_OpenXLSX_XLDocument_execCommand);
    oluacls_func(L, "execQuery", _olua_fun_OpenXLSX_XLDocument_execQuery);
    oluacls_func(L, "isOpen", _olua_fun_OpenXLSX_XLDocument_isOpen);
    oluacls_func(L, "name", _olua_fun_OpenXLSX_XLDocument_name);
    oluacls_func(L, "new", _olua_fun_OpenXLSX_XLDocument_new);
    oluacls_func(L, "open", _olua_fun_OpenXLSX_XLDocument_open);
    oluacls_func(L, "path", _olua_fun_OpenXLSX_XLDocument_path);
    oluacls_func(L, "property", _olua_fun_OpenXLSX_XLDocument_property);
    oluacls_func(L, "save", _olua_fun_OpenXLSX_XLDocument_save);
    oluacls_func(L, "saveAs", _olua_fun_OpenXLSX_XLDocument_saveAs);
    oluacls_func(L, "setProperty", _olua_fun_OpenXLSX_XLDocument_setProperty);
    oluacls_func(L, "workbook", _olua_fun_OpenXLSX_XLDocument_workbook);

    return 1;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_openxlsx_XLDocument(lua_State *L)
{
    olua_require(L, ".olua.module.openxlsx",  _olua_module_openxlsx);
    if (!olua_getclass(L, "openxlsx.XLDocument")) {
        luaL_error(L, "class not found: OpenXLSX::XLDocument");
    }
    return 1;
}
OLUA_END_DECLS

int _olua_module_openxlsx(lua_State *L)
{
    olua_require(L, "openxlsx.XLCommandType", _olua_cls_openxlsx_XLCommandType);
    olua_require(L, "openxlsx.XLContentType", _olua_cls_openxlsx_XLContentType);
    olua_require(L, "openxlsx.XLProperty", _olua_cls_openxlsx_XLProperty);
    olua_require(L, "openxlsx.XLQueryType", _olua_cls_openxlsx_XLQueryType);
    olua_require(L, "openxlsx.XLSheetType", _olua_cls_openxlsx_XLSheetType);
    olua_require(L, "openxlsx.XLValueType", _olua_cls_openxlsx_XLValueType);
    olua_require(L, "openxlsx.XLCoordinates", _olua_cls_openxlsx_XLCoordinates);
    olua_require(L, "openxlsx.XLCellRange", _olua_cls_openxlsx_XLCellRange);
    olua_require(L, "openxlsx.XLCellIterator", _olua_cls_openxlsx_XLCellIterator);
    olua_require(L, "openxlsx.XLRowRange", _olua_cls_openxlsx_XLRowRange);
    olua_require(L, "openxlsx.XLRowIterator", _olua_cls_openxlsx_XLRowIterator);
    olua_require(L, "openxlsx.XLRowDataRange", _olua_cls_openxlsx_XLRowDataRange);
    olua_require(L, "openxlsx.XLRowDataIterator", _olua_cls_openxlsx_XLRowDataIterator);
    olua_require(L, "openxlsx.XLRowDataProxy", _olua_cls_openxlsx_XLRowDataProxy);
    olua_require(L, "openxlsx.IZipArchive", _olua_cls_openxlsx_IZipArchive);
    olua_require(L, "openxlsx.XLCommand", _olua_cls_openxlsx_XLCommand);
    olua_require(L, "openxlsx.XLXmlFile", _olua_cls_openxlsx_XLXmlFile);
    olua_require(L, "openxlsx.XLQuery", _olua_cls_openxlsx_XLQuery);
    olua_require(L, "openxlsx.XLXmlData", _olua_cls_openxlsx_XLXmlData);
    olua_require(L, "openxlsx.XLFormulaProxy", _olua_cls_openxlsx_XLFormulaProxy);
    olua_require(L, "openxlsx.XLCellValueProxy", _olua_cls_openxlsx_XLCellValueProxy);
    olua_require(L, "openxlsx.XLCell", _olua_cls_openxlsx_XLCell);
    olua_require(L, "openxlsx.XLCellReference", _olua_cls_openxlsx_XLCellReference);
    olua_require(L, "openxlsx.XLCellAssignable", _olua_cls_openxlsx_XLCellAssignable);
    olua_require(L, "openxlsx.XLColor", _olua_cls_openxlsx_XLColor);
    olua_require(L, "openxlsx.XLColumn", _olua_cls_openxlsx_XLColumn);
    olua_require(L, "openxlsx.XLRow", _olua_cls_openxlsx_XLRow);
    olua_require(L, "openxlsx.XLSheetState", _olua_cls_openxlsx_XLSheetState);
    olua_require(L, "openxlsx.XLSheet", _olua_cls_openxlsx_XLSheet);
    olua_require(L, "openxlsx.XLChartsheet", _olua_cls_openxlsx_XLChartsheet);
    olua_require(L, "openxlsx.XLSharedStrings", _olua_cls_openxlsx_XLSharedStrings);
    olua_require(L, "openxlsx.XLWorksheet", _olua_cls_openxlsx_XLWorksheet);
    olua_require(L, "openxlsx.XLWorkbook", _olua_cls_openxlsx_XLWorkbook);
    olua_require(L, "openxlsx.XLDocument", _olua_cls_openxlsx_XLDocument);

    return 0;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_openxlsx(lua_State *L)
{
    olua_require(L, ".olua.module.openxlsx",  _olua_module_openxlsx);

    if (olua_getclass(L, "openxlsx.XLDocument")) {
        return 1;
    }

    return 0;
}
OLUA_END_DECLS
