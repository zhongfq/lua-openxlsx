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
    oluacls_enum(L, "AddStyles", (lua_Integer)OpenXLSX::XLCommandType::AddStyles);
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

static int _olua_fun_OpenXLSX_XLCellRange_address(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLCellRange *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLCellRange");

        // std::string address()
        std::string ret = self->address();
        int num_ret = olua_push_string(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCellRange::address(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCellRange_bottomRight(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLCellRange *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLCellRange");

        // const OpenXLSX::XLCellReference bottomRight()
        const OpenXLSX::XLCellReference ret = self->bottomRight();
        int num_ret = olua_copy_object(L, ret, "openxlsx.XLCellReference");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCellRange::bottomRight(): %s", e.what());
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

static int _olua_fun_OpenXLSX_XLCellRange_fetchColumnStyles(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLCellRange *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLCellRange");

        // void fetchColumnStyles()
        self->fetchColumnStyles();

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCellRange::fetchColumnStyles(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCellRange_new(lua_State *L)
{
    try {
        olua_startinvoke(L);

        // OpenXLSX::XLCellRange()
        OpenXLSX::XLCellRange *ret = new OpenXLSX::XLCellRange();
        int num_ret = olua_push_object(L, ret, "openxlsx.XLCellRange");
        olua_postnew(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCellRange::new(): %s", e.what());
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

static int _olua_fun_OpenXLSX_XLCellRange_setFormat(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLCellRange *self = nullptr;
        OpenXLSX::XLStyleIndex arg1 = 0;       /** cellFormatIndex */

        olua_to_object(L, 1, &self, "openxlsx.XLCellRange");
        olua_check_integer(L, 2, &arg1);

        // bool setFormat(OpenXLSX::XLStyleIndex cellFormatIndex)
        bool ret = self->setFormat(arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCellRange::setFormat(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCellRange_topLeft(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLCellRange *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLCellRange");

        // const OpenXLSX::XLCellReference topLeft()
        const OpenXLSX::XLCellReference ret = self->topLeft();
        int num_ret = olua_copy_object(L, ret, "openxlsx.XLCellReference");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCellRange::topLeft(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_cls_openxlsx_XLCellRange(lua_State *L)
{
    oluacls_class<OpenXLSX::XLCellRange>(L, "openxlsx.XLCellRange");
    oluacls_func(L, "__gc", _olua_fun_OpenXLSX_XLCellRange___gc);
    oluacls_func(L, "__pairs", _olua_fun_OpenXLSX_XLCellRange___pairs);
    oluacls_func(L, "address", _olua_fun_OpenXLSX_XLCellRange_address);
    oluacls_func(L, "bottomRight", _olua_fun_OpenXLSX_XLCellRange_bottomRight);
    oluacls_func(L, "clear", _olua_fun_OpenXLSX_XLCellRange_clear);
    oluacls_func(L, "fetchColumnStyles", _olua_fun_OpenXLSX_XLCellRange_fetchColumnStyles);
    oluacls_func(L, "new", _olua_fun_OpenXLSX_XLCellRange_new);
    oluacls_func(L, "numColumns", _olua_fun_OpenXLSX_XLCellRange_numColumns);
    oluacls_func(L, "numRows", _olua_fun_OpenXLSX_XLCellRange_numRows);
    oluacls_func(L, "setFormat", _olua_fun_OpenXLSX_XLCellRange_setFormat);
    oluacls_func(L, "topLeft", _olua_fun_OpenXLSX_XLCellRange_topLeft);

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

static int _olua_fun_OpenXLSX_XLXmlData_getRawData$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLXmlData *self = nullptr;
        OpenXLSX::XLXmlSavingDeclaration *arg1;       /** savingDeclaration */

        olua_to_object(L, 1, &self, "openxlsx.XLXmlData");
        olua_check_object(L, 2, &arg1, "openxlsx.XLXmlSavingDeclaration");

        // std::string getRawData(@optional OpenXLSX::XLXmlSavingDeclaration savingDeclaration)
        std::string ret = self->getRawData(*arg1);
        int num_ret = olua_push_string(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLXmlData::getRawData(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLXmlData_getRawData$2(lua_State *L)
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

static int _olua_fun_OpenXLSX_XLXmlData_getRawData(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 1) {
        // std::string getRawData()
        return _olua_fun_OpenXLSX_XLXmlData_getRawData$2(L);
    }

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "openxlsx.XLXmlData")) && (olua_is_object(L, 2, "openxlsx.XLXmlSavingDeclaration"))) {
            // std::string getRawData(@optional OpenXLSX::XLXmlSavingDeclaration savingDeclaration)
            return _olua_fun_OpenXLSX_XLXmlData_getRawData$1(L);
        // }
    }

    luaL_error(L, "method 'OpenXLSX::XLXmlData::getRawData' not support '%d' arguments", num_args);

    return 0;
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

static int _olua_fun_OpenXLSX_XLStyles_borders(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLStyles *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLStyles");

        // OpenXLSX::XLBorders &borders()
        OpenXLSX::XLBorders &ret = self->borders();
        int num_ret = olua_push_object(L, &ret, "openxlsx.XLBorders");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLStyles::borders(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLStyles_cellFormats(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLStyles *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLStyles");

        // OpenXLSX::XLCellFormats &cellFormats()
        OpenXLSX::XLCellFormats &ret = self->cellFormats();
        int num_ret = olua_push_object(L, &ret, "openxlsx.XLCellFormats");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLStyles::cellFormats(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLStyles_cellStyleFormats(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLStyles *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLStyles");

        // OpenXLSX::XLCellFormats &cellStyleFormats()
        OpenXLSX::XLCellFormats &ret = self->cellStyleFormats();
        int num_ret = olua_push_object(L, &ret, "openxlsx.XLCellFormats");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLStyles::cellStyleFormats(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLStyles_cellStyles(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLStyles *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLStyles");

        // OpenXLSX::XLCellStyles &cellStyles()
        OpenXLSX::XLCellStyles &ret = self->cellStyles();
        int num_ret = olua_push_object(L, &ret, "openxlsx.XLCellStyles");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLStyles::cellStyles(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLStyles_fills(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLStyles *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLStyles");

        // OpenXLSX::XLFills &fills()
        OpenXLSX::XLFills &ret = self->fills();
        int num_ret = olua_push_object(L, &ret, "openxlsx.XLFills");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLStyles::fills(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLStyles_fonts(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLStyles *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLStyles");

        // OpenXLSX::XLFonts &fonts()
        OpenXLSX::XLFonts &ret = self->fonts();
        int num_ret = olua_push_object(L, &ret, "openxlsx.XLFonts");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLStyles::fonts(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLStyles_new$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        // OpenXLSX::XLStyles()
        OpenXLSX::XLStyles *ret = new OpenXLSX::XLStyles();
        int num_ret = olua_push_object(L, ret, "openxlsx.XLStyles");
        olua_postnew(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLStyles::new(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLStyles_new$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLXmlData *arg1 = nullptr;       /** xmlData */
        bool arg2 = false;       /** suppressWarnings */
        std::string arg3;       /** stylesPrefix */

        olua_check_object(L, 1, &arg1, "openxlsx.XLXmlData");
        olua_check_bool(L, 2, &arg2);
        olua_check_string(L, 3, &arg3);

        // OpenXLSX::XLStyles(OpenXLSX::XLXmlData *xmlData, @optional bool suppressWarnings, @optional std::string stylesPrefix)
        OpenXLSX::XLStyles *ret = new OpenXLSX::XLStyles(arg1, arg2, arg3);
        int num_ret = olua_push_object(L, ret, "openxlsx.XLStyles");
        olua_postnew(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLStyles::new(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLStyles_new$3(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLXmlData *arg1 = nullptr;       /** xmlData */

        olua_check_object(L, 1, &arg1, "openxlsx.XLXmlData");

        // OpenXLSX::XLStyles(OpenXLSX::XLXmlData *xmlData)
        OpenXLSX::XLStyles *ret = new OpenXLSX::XLStyles(arg1);
        int num_ret = olua_push_object(L, ret, "openxlsx.XLStyles");
        olua_postnew(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLStyles::new(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLStyles_new$4(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLXmlData *arg1 = nullptr;       /** xmlData */
        bool arg2 = false;       /** suppressWarnings */

        olua_check_object(L, 1, &arg1, "openxlsx.XLXmlData");
        olua_check_bool(L, 2, &arg2);

        // OpenXLSX::XLStyles(OpenXLSX::XLXmlData *xmlData, @optional bool suppressWarnings)
        OpenXLSX::XLStyles *ret = new OpenXLSX::XLStyles(arg1, arg2);
        int num_ret = olua_push_object(L, ret, "openxlsx.XLStyles");
        olua_postnew(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLStyles::new(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLStyles_new(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 0) {
        // OpenXLSX::XLStyles()
        return _olua_fun_OpenXLSX_XLStyles_new$1(L);
    }

    if (num_args == 1) {
        // if ((olua_is_object(L, 1, "openxlsx.XLXmlData"))) {
            // OpenXLSX::XLStyles(OpenXLSX::XLXmlData *xmlData)
            return _olua_fun_OpenXLSX_XLStyles_new$3(L);
        // }
    }

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "openxlsx.XLXmlData")) && (olua_is_bool(L, 2))) {
            // OpenXLSX::XLStyles(OpenXLSX::XLXmlData *xmlData, @optional bool suppressWarnings)
            return _olua_fun_OpenXLSX_XLStyles_new$4(L);
        // }
    }

    if (num_args == 3) {
        // if ((olua_is_object(L, 1, "openxlsx.XLXmlData")) && (olua_is_bool(L, 2)) && (olua_is_string(L, 3))) {
            // OpenXLSX::XLStyles(OpenXLSX::XLXmlData *xmlData, @optional bool suppressWarnings, @optional std::string stylesPrefix)
            return _olua_fun_OpenXLSX_XLStyles_new$2(L);
        // }
    }

    luaL_error(L, "method 'OpenXLSX::XLStyles::new' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_OpenXLSX_XLStyles_numberFormats(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLStyles *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLStyles");

        // OpenXLSX::XLNumberFormats &numberFormats()
        OpenXLSX::XLNumberFormats &ret = self->numberFormats();
        int num_ret = olua_push_object(L, &ret, "openxlsx.XLNumberFormats");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLStyles::numberFormats(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_cls_openxlsx_XLStyles(lua_State *L)
{
    oluacls_class<OpenXLSX::XLStyles, OpenXLSX::XLXmlFile>(L, "openxlsx.XLStyles");
    oluacls_func(L, "borders", _olua_fun_OpenXLSX_XLStyles_borders);
    oluacls_func(L, "cellFormats", _olua_fun_OpenXLSX_XLStyles_cellFormats);
    oluacls_func(L, "cellStyleFormats", _olua_fun_OpenXLSX_XLStyles_cellStyleFormats);
    oluacls_func(L, "cellStyles", _olua_fun_OpenXLSX_XLStyles_cellStyles);
    oluacls_func(L, "fills", _olua_fun_OpenXLSX_XLStyles_fills);
    oluacls_func(L, "fonts", _olua_fun_OpenXLSX_XLStyles_fonts);
    oluacls_func(L, "new", _olua_fun_OpenXLSX_XLStyles_new);
    oluacls_func(L, "numberFormats", _olua_fun_OpenXLSX_XLStyles_numberFormats);

    return 1;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_openxlsx_XLStyles(lua_State *L)
{
    olua_require(L, ".olua.module.openxlsx",  _olua_module_openxlsx);
    if (!olua_getclass(L, "openxlsx.XLStyles")) {
        luaL_error(L, "class not found: OpenXLSX::XLStyles");
    }
    return 1;
}
OLUA_END_DECLS

static int _olua_fun_OpenXLSX_XLBorders___gc(lua_State *L)
{
    try {
        olua_startinvoke(L);
        auto self = (OpenXLSX::XLBorders *)olua_toobj(L, 1, "openxlsx.XLBorders");
        olua_postgc(L, self);
        olua_endinvoke(L);
        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLBorders::__gc(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLBorders_borderByIndex(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLBorders *self = nullptr;
        OpenXLSX::XLStyleIndex arg1 = 0;       /** index */

        olua_to_object(L, 1, &self, "openxlsx.XLBorders");
        olua_check_integer(L, 2, &arg1);

        // OpenXLSX::XLBorder borderByIndex(OpenXLSX::XLStyleIndex index)
        OpenXLSX::XLBorder ret = self->borderByIndex(arg1);
        int num_ret = olua_copy_object(L, ret, "openxlsx.XLBorder");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLBorders::borderByIndex(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLBorders_count(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLBorders *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLBorders");

        // size_t count()
        size_t ret = self->count();
        int num_ret = olua_push_integer(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLBorders::count(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLBorders_create$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLBorders *self = nullptr;
        OpenXLSX::XLBorder *arg1;       /** copyFrom */
        std::string arg2;       /** styleEntriesPrefix */

        olua_to_object(L, 1, &self, "openxlsx.XLBorders");
        olua_check_object(L, 2, &arg1, "openxlsx.XLBorder");
        olua_check_string(L, 3, &arg2);

        // OpenXLSX::XLStyleIndex create(@optional OpenXLSX::XLBorder copyFrom, @optional std::string styleEntriesPrefix)
        OpenXLSX::XLStyleIndex ret = self->create(*arg1, arg2);
        int num_ret = olua_push_integer(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLBorders::create(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLBorders_create$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLBorders *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLBorders");

        // OpenXLSX::XLStyleIndex create()
        OpenXLSX::XLStyleIndex ret = self->create();
        int num_ret = olua_push_integer(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLBorders::create(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLBorders_create$3(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLBorders *self = nullptr;
        OpenXLSX::XLBorder *arg1;       /** copyFrom */

        olua_to_object(L, 1, &self, "openxlsx.XLBorders");
        olua_check_object(L, 2, &arg1, "openxlsx.XLBorder");

        // OpenXLSX::XLStyleIndex create(@optional OpenXLSX::XLBorder copyFrom)
        OpenXLSX::XLStyleIndex ret = self->create(*arg1);
        int num_ret = olua_push_integer(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLBorders::create(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLBorders_create(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 1) {
        // OpenXLSX::XLStyleIndex create()
        return _olua_fun_OpenXLSX_XLBorders_create$2(L);
    }

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "openxlsx.XLBorders")) && (olua_is_object(L, 2, "openxlsx.XLBorder"))) {
            // OpenXLSX::XLStyleIndex create(@optional OpenXLSX::XLBorder copyFrom)
            return _olua_fun_OpenXLSX_XLBorders_create$3(L);
        // }
    }

    if (num_args == 3) {
        // if ((olua_is_object(L, 1, "openxlsx.XLBorders")) && (olua_is_object(L, 2, "openxlsx.XLBorder")) && (olua_is_string(L, 3))) {
            // OpenXLSX::XLStyleIndex create(@optional OpenXLSX::XLBorder copyFrom, @optional std::string styleEntriesPrefix)
            return _olua_fun_OpenXLSX_XLBorders_create$1(L);
        // }
    }

    luaL_error(L, "method 'OpenXLSX::XLBorders::create' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_OpenXLSX_XLBorders_new(lua_State *L)
{
    try {
        olua_startinvoke(L);

        // OpenXLSX::XLBorders()
        OpenXLSX::XLBorders *ret = new OpenXLSX::XLBorders();
        int num_ret = olua_push_object(L, ret, "openxlsx.XLBorders");
        olua_postnew(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLBorders::new(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_cls_openxlsx_XLBorders(lua_State *L)
{
    oluacls_class<OpenXLSX::XLBorders>(L, "openxlsx.XLBorders");
    oluacls_func(L, "__gc", _olua_fun_OpenXLSX_XLBorders___gc);
    oluacls_func(L, "borderByIndex", _olua_fun_OpenXLSX_XLBorders_borderByIndex);
    oluacls_func(L, "count", _olua_fun_OpenXLSX_XLBorders_count);
    oluacls_func(L, "create", _olua_fun_OpenXLSX_XLBorders_create);
    oluacls_func(L, "new", _olua_fun_OpenXLSX_XLBorders_new);

    return 1;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_openxlsx_XLBorders(lua_State *L)
{
    olua_require(L, ".olua.module.openxlsx",  _olua_module_openxlsx);
    if (!olua_getclass(L, "openxlsx.XLBorders")) {
        luaL_error(L, "class not found: OpenXLSX::XLBorders");
    }
    return 1;
}
OLUA_END_DECLS

static int _olua_fun_OpenXLSX_XLBorder___gc(lua_State *L)
{
    try {
        olua_startinvoke(L);
        auto self = (OpenXLSX::XLBorder *)olua_toobj(L, 1, "openxlsx.XLBorder");
        olua_postgc(L, self);
        olua_endinvoke(L);
        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLBorder::__gc(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLBorder_bottom(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLBorder *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLBorder");

        // OpenXLSX::XLLine bottom()
        OpenXLSX::XLLine ret = self->bottom();
        int num_ret = olua_copy_object(L, ret, "openxlsx.XLLine");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLBorder::bottom(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLBorder_diagonal(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLBorder *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLBorder");

        // OpenXLSX::XLLine diagonal()
        OpenXLSX::XLLine ret = self->diagonal();
        int num_ret = olua_copy_object(L, ret, "openxlsx.XLLine");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLBorder::diagonal(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLBorder_diagonalDown(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLBorder *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLBorder");

        // bool diagonalDown()
        bool ret = self->diagonalDown();
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLBorder::diagonalDown(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLBorder_diagonalUp(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLBorder *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLBorder");

        // bool diagonalUp()
        bool ret = self->diagonalUp();
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLBorder::diagonalUp(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLBorder_horizontal(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLBorder *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLBorder");

        // OpenXLSX::XLLine horizontal()
        OpenXLSX::XLLine ret = self->horizontal();
        int num_ret = olua_copy_object(L, ret, "openxlsx.XLLine");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLBorder::horizontal(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLBorder_left(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLBorder *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLBorder");

        // OpenXLSX::XLLine left()
        OpenXLSX::XLLine ret = self->left();
        int num_ret = olua_copy_object(L, ret, "openxlsx.XLLine");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLBorder::left(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLBorder_new(lua_State *L)
{
    try {
        olua_startinvoke(L);

        // OpenXLSX::XLBorder()
        OpenXLSX::XLBorder *ret = new OpenXLSX::XLBorder();
        int num_ret = olua_push_object(L, ret, "openxlsx.XLBorder");
        olua_postnew(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLBorder::new(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLBorder_outline(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLBorder *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLBorder");

        // bool outline()
        bool ret = self->outline();
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLBorder::outline(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLBorder_right(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLBorder *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLBorder");

        // OpenXLSX::XLLine right()
        OpenXLSX::XLLine ret = self->right();
        int num_ret = olua_copy_object(L, ret, "openxlsx.XLLine");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLBorder::right(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLBorder_setBottom$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLBorder *self = nullptr;
        OpenXLSX::XLLineStyle arg1 = (OpenXLSX::XLLineStyle)0;       /** lineStyle */
        OpenXLSX::XLColor *arg2;       /** lineColor */
        double arg3 = 0;       /** lineTint */

        olua_to_object(L, 1, &self, "openxlsx.XLBorder");
        olua_check_enum(L, 2, &arg1);
        olua_check_object(L, 3, &arg2, "openxlsx.XLColor");
        olua_check_number(L, 4, &arg3);

        // bool setBottom(OpenXLSX::XLLineStyle lineStyle, OpenXLSX::XLColor lineColor, @optional double lineTint)
        bool ret = self->setBottom(arg1, *arg2, arg3);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLBorder::setBottom(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLBorder_setBottom$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLBorder *self = nullptr;
        OpenXLSX::XLLineStyle arg1 = (OpenXLSX::XLLineStyle)0;       /** lineStyle */
        OpenXLSX::XLColor *arg2;       /** lineColor */

        olua_to_object(L, 1, &self, "openxlsx.XLBorder");
        olua_check_enum(L, 2, &arg1);
        olua_check_object(L, 3, &arg2, "openxlsx.XLColor");

        // bool setBottom(OpenXLSX::XLLineStyle lineStyle, OpenXLSX::XLColor lineColor)
        bool ret = self->setBottom(arg1, *arg2);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLBorder::setBottom(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLBorder_setBottom(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 3) {
        // if ((olua_is_object(L, 1, "openxlsx.XLBorder")) && (olua_is_enum(L, 2)) && (olua_is_object(L, 3, "openxlsx.XLColor"))) {
            // bool setBottom(OpenXLSX::XLLineStyle lineStyle, OpenXLSX::XLColor lineColor)
            return _olua_fun_OpenXLSX_XLBorder_setBottom$2(L);
        // }
    }

    if (num_args == 4) {
        // if ((olua_is_object(L, 1, "openxlsx.XLBorder")) && (olua_is_enum(L, 2)) && (olua_is_object(L, 3, "openxlsx.XLColor")) && (olua_is_number(L, 4))) {
            // bool setBottom(OpenXLSX::XLLineStyle lineStyle, OpenXLSX::XLColor lineColor, @optional double lineTint)
            return _olua_fun_OpenXLSX_XLBorder_setBottom$1(L);
        // }
    }

    luaL_error(L, "method 'OpenXLSX::XLBorder::setBottom' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_OpenXLSX_XLBorder_setDiagonal$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLBorder *self = nullptr;
        OpenXLSX::XLLineStyle arg1 = (OpenXLSX::XLLineStyle)0;       /** lineStyle */
        OpenXLSX::XLColor *arg2;       /** lineColor */
        double arg3 = 0;       /** lineTint */

        olua_to_object(L, 1, &self, "openxlsx.XLBorder");
        olua_check_enum(L, 2, &arg1);
        olua_check_object(L, 3, &arg2, "openxlsx.XLColor");
        olua_check_number(L, 4, &arg3);

        // bool setDiagonal(OpenXLSX::XLLineStyle lineStyle, OpenXLSX::XLColor lineColor, @optional double lineTint)
        bool ret = self->setDiagonal(arg1, *arg2, arg3);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLBorder::setDiagonal(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLBorder_setDiagonal$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLBorder *self = nullptr;
        OpenXLSX::XLLineStyle arg1 = (OpenXLSX::XLLineStyle)0;       /** lineStyle */
        OpenXLSX::XLColor *arg2;       /** lineColor */

        olua_to_object(L, 1, &self, "openxlsx.XLBorder");
        olua_check_enum(L, 2, &arg1);
        olua_check_object(L, 3, &arg2, "openxlsx.XLColor");

        // bool setDiagonal(OpenXLSX::XLLineStyle lineStyle, OpenXLSX::XLColor lineColor)
        bool ret = self->setDiagonal(arg1, *arg2);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLBorder::setDiagonal(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLBorder_setDiagonal(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 3) {
        // if ((olua_is_object(L, 1, "openxlsx.XLBorder")) && (olua_is_enum(L, 2)) && (olua_is_object(L, 3, "openxlsx.XLColor"))) {
            // bool setDiagonal(OpenXLSX::XLLineStyle lineStyle, OpenXLSX::XLColor lineColor)
            return _olua_fun_OpenXLSX_XLBorder_setDiagonal$2(L);
        // }
    }

    if (num_args == 4) {
        // if ((olua_is_object(L, 1, "openxlsx.XLBorder")) && (olua_is_enum(L, 2)) && (olua_is_object(L, 3, "openxlsx.XLColor")) && (olua_is_number(L, 4))) {
            // bool setDiagonal(OpenXLSX::XLLineStyle lineStyle, OpenXLSX::XLColor lineColor, @optional double lineTint)
            return _olua_fun_OpenXLSX_XLBorder_setDiagonal$1(L);
        // }
    }

    luaL_error(L, "method 'OpenXLSX::XLBorder::setDiagonal' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_OpenXLSX_XLBorder_setDiagonalDown$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLBorder *self = nullptr;
        bool arg1 = false;       /** set */

        olua_to_object(L, 1, &self, "openxlsx.XLBorder");
        olua_check_bool(L, 2, &arg1);

        // bool setDiagonalDown(@optional bool set)
        bool ret = self->setDiagonalDown(arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLBorder::setDiagonalDown(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLBorder_setDiagonalDown$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLBorder *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLBorder");

        // bool setDiagonalDown()
        bool ret = self->setDiagonalDown();
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLBorder::setDiagonalDown(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLBorder_setDiagonalDown(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 1) {
        // bool setDiagonalDown()
        return _olua_fun_OpenXLSX_XLBorder_setDiagonalDown$2(L);
    }

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "openxlsx.XLBorder")) && (olua_is_bool(L, 2))) {
            // bool setDiagonalDown(@optional bool set)
            return _olua_fun_OpenXLSX_XLBorder_setDiagonalDown$1(L);
        // }
    }

    luaL_error(L, "method 'OpenXLSX::XLBorder::setDiagonalDown' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_OpenXLSX_XLBorder_setDiagonalUp$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLBorder *self = nullptr;
        bool arg1 = false;       /** set */

        olua_to_object(L, 1, &self, "openxlsx.XLBorder");
        olua_check_bool(L, 2, &arg1);

        // bool setDiagonalUp(@optional bool set)
        bool ret = self->setDiagonalUp(arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLBorder::setDiagonalUp(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLBorder_setDiagonalUp$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLBorder *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLBorder");

        // bool setDiagonalUp()
        bool ret = self->setDiagonalUp();
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLBorder::setDiagonalUp(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLBorder_setDiagonalUp(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 1) {
        // bool setDiagonalUp()
        return _olua_fun_OpenXLSX_XLBorder_setDiagonalUp$2(L);
    }

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "openxlsx.XLBorder")) && (olua_is_bool(L, 2))) {
            // bool setDiagonalUp(@optional bool set)
            return _olua_fun_OpenXLSX_XLBorder_setDiagonalUp$1(L);
        // }
    }

    luaL_error(L, "method 'OpenXLSX::XLBorder::setDiagonalUp' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_OpenXLSX_XLBorder_setHorizontal$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLBorder *self = nullptr;
        OpenXLSX::XLLineStyle arg1 = (OpenXLSX::XLLineStyle)0;       /** lineStyle */
        OpenXLSX::XLColor *arg2;       /** lineColor */
        double arg3 = 0;       /** lineTint */

        olua_to_object(L, 1, &self, "openxlsx.XLBorder");
        olua_check_enum(L, 2, &arg1);
        olua_check_object(L, 3, &arg2, "openxlsx.XLColor");
        olua_check_number(L, 4, &arg3);

        // bool setHorizontal(OpenXLSX::XLLineStyle lineStyle, OpenXLSX::XLColor lineColor, @optional double lineTint)
        bool ret = self->setHorizontal(arg1, *arg2, arg3);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLBorder::setHorizontal(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLBorder_setHorizontal$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLBorder *self = nullptr;
        OpenXLSX::XLLineStyle arg1 = (OpenXLSX::XLLineStyle)0;       /** lineStyle */
        OpenXLSX::XLColor *arg2;       /** lineColor */

        olua_to_object(L, 1, &self, "openxlsx.XLBorder");
        olua_check_enum(L, 2, &arg1);
        olua_check_object(L, 3, &arg2, "openxlsx.XLColor");

        // bool setHorizontal(OpenXLSX::XLLineStyle lineStyle, OpenXLSX::XLColor lineColor)
        bool ret = self->setHorizontal(arg1, *arg2);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLBorder::setHorizontal(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLBorder_setHorizontal(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 3) {
        // if ((olua_is_object(L, 1, "openxlsx.XLBorder")) && (olua_is_enum(L, 2)) && (olua_is_object(L, 3, "openxlsx.XLColor"))) {
            // bool setHorizontal(OpenXLSX::XLLineStyle lineStyle, OpenXLSX::XLColor lineColor)
            return _olua_fun_OpenXLSX_XLBorder_setHorizontal$2(L);
        // }
    }

    if (num_args == 4) {
        // if ((olua_is_object(L, 1, "openxlsx.XLBorder")) && (olua_is_enum(L, 2)) && (olua_is_object(L, 3, "openxlsx.XLColor")) && (olua_is_number(L, 4))) {
            // bool setHorizontal(OpenXLSX::XLLineStyle lineStyle, OpenXLSX::XLColor lineColor, @optional double lineTint)
            return _olua_fun_OpenXLSX_XLBorder_setHorizontal$1(L);
        // }
    }

    luaL_error(L, "method 'OpenXLSX::XLBorder::setHorizontal' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_OpenXLSX_XLBorder_setLeft$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLBorder *self = nullptr;
        OpenXLSX::XLLineStyle arg1 = (OpenXLSX::XLLineStyle)0;       /** lineStyle */
        OpenXLSX::XLColor *arg2;       /** lineColor */
        double arg3 = 0;       /** lineTint */

        olua_to_object(L, 1, &self, "openxlsx.XLBorder");
        olua_check_enum(L, 2, &arg1);
        olua_check_object(L, 3, &arg2, "openxlsx.XLColor");
        olua_check_number(L, 4, &arg3);

        // bool setLeft(OpenXLSX::XLLineStyle lineStyle, OpenXLSX::XLColor lineColor, @optional double lineTint)
        bool ret = self->setLeft(arg1, *arg2, arg3);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLBorder::setLeft(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLBorder_setLeft$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLBorder *self = nullptr;
        OpenXLSX::XLLineStyle arg1 = (OpenXLSX::XLLineStyle)0;       /** lineStyle */
        OpenXLSX::XLColor *arg2;       /** lineColor */

        olua_to_object(L, 1, &self, "openxlsx.XLBorder");
        olua_check_enum(L, 2, &arg1);
        olua_check_object(L, 3, &arg2, "openxlsx.XLColor");

        // bool setLeft(OpenXLSX::XLLineStyle lineStyle, OpenXLSX::XLColor lineColor)
        bool ret = self->setLeft(arg1, *arg2);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLBorder::setLeft(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLBorder_setLeft(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 3) {
        // if ((olua_is_object(L, 1, "openxlsx.XLBorder")) && (olua_is_enum(L, 2)) && (olua_is_object(L, 3, "openxlsx.XLColor"))) {
            // bool setLeft(OpenXLSX::XLLineStyle lineStyle, OpenXLSX::XLColor lineColor)
            return _olua_fun_OpenXLSX_XLBorder_setLeft$2(L);
        // }
    }

    if (num_args == 4) {
        // if ((olua_is_object(L, 1, "openxlsx.XLBorder")) && (olua_is_enum(L, 2)) && (olua_is_object(L, 3, "openxlsx.XLColor")) && (olua_is_number(L, 4))) {
            // bool setLeft(OpenXLSX::XLLineStyle lineStyle, OpenXLSX::XLColor lineColor, @optional double lineTint)
            return _olua_fun_OpenXLSX_XLBorder_setLeft$1(L);
        // }
    }

    luaL_error(L, "method 'OpenXLSX::XLBorder::setLeft' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_OpenXLSX_XLBorder_setLine$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLBorder *self = nullptr;
        OpenXLSX::XLLineType arg1 = (OpenXLSX::XLLineType)0;       /** lineType */
        OpenXLSX::XLLineStyle arg2 = (OpenXLSX::XLLineStyle)0;       /** lineStyle */
        OpenXLSX::XLColor *arg3;       /** lineColor */
        double arg4 = 0;       /** lineTint */

        olua_to_object(L, 1, &self, "openxlsx.XLBorder");
        olua_check_enum(L, 2, &arg1);
        olua_check_enum(L, 3, &arg2);
        olua_check_object(L, 4, &arg3, "openxlsx.XLColor");
        olua_check_number(L, 5, &arg4);

        // bool setLine(OpenXLSX::XLLineType lineType, OpenXLSX::XLLineStyle lineStyle, OpenXLSX::XLColor lineColor, @optional double lineTint)
        bool ret = self->setLine(arg1, arg2, *arg3, arg4);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLBorder::setLine(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLBorder_setLine$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLBorder *self = nullptr;
        OpenXLSX::XLLineType arg1 = (OpenXLSX::XLLineType)0;       /** lineType */
        OpenXLSX::XLLineStyle arg2 = (OpenXLSX::XLLineStyle)0;       /** lineStyle */
        OpenXLSX::XLColor *arg3;       /** lineColor */

        olua_to_object(L, 1, &self, "openxlsx.XLBorder");
        olua_check_enum(L, 2, &arg1);
        olua_check_enum(L, 3, &arg2);
        olua_check_object(L, 4, &arg3, "openxlsx.XLColor");

        // bool setLine(OpenXLSX::XLLineType lineType, OpenXLSX::XLLineStyle lineStyle, OpenXLSX::XLColor lineColor)
        bool ret = self->setLine(arg1, arg2, *arg3);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLBorder::setLine(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLBorder_setLine(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 4) {
        // if ((olua_is_object(L, 1, "openxlsx.XLBorder")) && (olua_is_enum(L, 2)) && (olua_is_enum(L, 3)) && (olua_is_object(L, 4, "openxlsx.XLColor"))) {
            // bool setLine(OpenXLSX::XLLineType lineType, OpenXLSX::XLLineStyle lineStyle, OpenXLSX::XLColor lineColor)
            return _olua_fun_OpenXLSX_XLBorder_setLine$2(L);
        // }
    }

    if (num_args == 5) {
        // if ((olua_is_object(L, 1, "openxlsx.XLBorder")) && (olua_is_enum(L, 2)) && (olua_is_enum(L, 3)) && (olua_is_object(L, 4, "openxlsx.XLColor")) && (olua_is_number(L, 5))) {
            // bool setLine(OpenXLSX::XLLineType lineType, OpenXLSX::XLLineStyle lineStyle, OpenXLSX::XLColor lineColor, @optional double lineTint)
            return _olua_fun_OpenXLSX_XLBorder_setLine$1(L);
        // }
    }

    luaL_error(L, "method 'OpenXLSX::XLBorder::setLine' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_OpenXLSX_XLBorder_setOutline$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLBorder *self = nullptr;
        bool arg1 = false;       /** set */

        olua_to_object(L, 1, &self, "openxlsx.XLBorder");
        olua_check_bool(L, 2, &arg1);

        // bool setOutline(@optional bool set)
        bool ret = self->setOutline(arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLBorder::setOutline(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLBorder_setOutline$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLBorder *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLBorder");

        // bool setOutline()
        bool ret = self->setOutline();
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLBorder::setOutline(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLBorder_setOutline(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 1) {
        // bool setOutline()
        return _olua_fun_OpenXLSX_XLBorder_setOutline$2(L);
    }

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "openxlsx.XLBorder")) && (olua_is_bool(L, 2))) {
            // bool setOutline(@optional bool set)
            return _olua_fun_OpenXLSX_XLBorder_setOutline$1(L);
        // }
    }

    luaL_error(L, "method 'OpenXLSX::XLBorder::setOutline' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_OpenXLSX_XLBorder_setRight$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLBorder *self = nullptr;
        OpenXLSX::XLLineStyle arg1 = (OpenXLSX::XLLineStyle)0;       /** lineStyle */
        OpenXLSX::XLColor *arg2;       /** lineColor */
        double arg3 = 0;       /** lineTint */

        olua_to_object(L, 1, &self, "openxlsx.XLBorder");
        olua_check_enum(L, 2, &arg1);
        olua_check_object(L, 3, &arg2, "openxlsx.XLColor");
        olua_check_number(L, 4, &arg3);

        // bool setRight(OpenXLSX::XLLineStyle lineStyle, OpenXLSX::XLColor lineColor, @optional double lineTint)
        bool ret = self->setRight(arg1, *arg2, arg3);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLBorder::setRight(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLBorder_setRight$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLBorder *self = nullptr;
        OpenXLSX::XLLineStyle arg1 = (OpenXLSX::XLLineStyle)0;       /** lineStyle */
        OpenXLSX::XLColor *arg2;       /** lineColor */

        olua_to_object(L, 1, &self, "openxlsx.XLBorder");
        olua_check_enum(L, 2, &arg1);
        olua_check_object(L, 3, &arg2, "openxlsx.XLColor");

        // bool setRight(OpenXLSX::XLLineStyle lineStyle, OpenXLSX::XLColor lineColor)
        bool ret = self->setRight(arg1, *arg2);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLBorder::setRight(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLBorder_setRight(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 3) {
        // if ((olua_is_object(L, 1, "openxlsx.XLBorder")) && (olua_is_enum(L, 2)) && (olua_is_object(L, 3, "openxlsx.XLColor"))) {
            // bool setRight(OpenXLSX::XLLineStyle lineStyle, OpenXLSX::XLColor lineColor)
            return _olua_fun_OpenXLSX_XLBorder_setRight$2(L);
        // }
    }

    if (num_args == 4) {
        // if ((olua_is_object(L, 1, "openxlsx.XLBorder")) && (olua_is_enum(L, 2)) && (olua_is_object(L, 3, "openxlsx.XLColor")) && (olua_is_number(L, 4))) {
            // bool setRight(OpenXLSX::XLLineStyle lineStyle, OpenXLSX::XLColor lineColor, @optional double lineTint)
            return _olua_fun_OpenXLSX_XLBorder_setRight$1(L);
        // }
    }

    luaL_error(L, "method 'OpenXLSX::XLBorder::setRight' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_OpenXLSX_XLBorder_setTop$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLBorder *self = nullptr;
        OpenXLSX::XLLineStyle arg1 = (OpenXLSX::XLLineStyle)0;       /** lineStyle */
        OpenXLSX::XLColor *arg2;       /** lineColor */
        double arg3 = 0;       /** lineTint */

        olua_to_object(L, 1, &self, "openxlsx.XLBorder");
        olua_check_enum(L, 2, &arg1);
        olua_check_object(L, 3, &arg2, "openxlsx.XLColor");
        olua_check_number(L, 4, &arg3);

        // bool setTop(OpenXLSX::XLLineStyle lineStyle, OpenXLSX::XLColor lineColor, @optional double lineTint)
        bool ret = self->setTop(arg1, *arg2, arg3);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLBorder::setTop(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLBorder_setTop$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLBorder *self = nullptr;
        OpenXLSX::XLLineStyle arg1 = (OpenXLSX::XLLineStyle)0;       /** lineStyle */
        OpenXLSX::XLColor *arg2;       /** lineColor */

        olua_to_object(L, 1, &self, "openxlsx.XLBorder");
        olua_check_enum(L, 2, &arg1);
        olua_check_object(L, 3, &arg2, "openxlsx.XLColor");

        // bool setTop(OpenXLSX::XLLineStyle lineStyle, OpenXLSX::XLColor lineColor)
        bool ret = self->setTop(arg1, *arg2);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLBorder::setTop(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLBorder_setTop(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 3) {
        // if ((olua_is_object(L, 1, "openxlsx.XLBorder")) && (olua_is_enum(L, 2)) && (olua_is_object(L, 3, "openxlsx.XLColor"))) {
            // bool setTop(OpenXLSX::XLLineStyle lineStyle, OpenXLSX::XLColor lineColor)
            return _olua_fun_OpenXLSX_XLBorder_setTop$2(L);
        // }
    }

    if (num_args == 4) {
        // if ((olua_is_object(L, 1, "openxlsx.XLBorder")) && (olua_is_enum(L, 2)) && (olua_is_object(L, 3, "openxlsx.XLColor")) && (olua_is_number(L, 4))) {
            // bool setTop(OpenXLSX::XLLineStyle lineStyle, OpenXLSX::XLColor lineColor, @optional double lineTint)
            return _olua_fun_OpenXLSX_XLBorder_setTop$1(L);
        // }
    }

    luaL_error(L, "method 'OpenXLSX::XLBorder::setTop' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_OpenXLSX_XLBorder_setVertical$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLBorder *self = nullptr;
        OpenXLSX::XLLineStyle arg1 = (OpenXLSX::XLLineStyle)0;       /** lineStyle */
        OpenXLSX::XLColor *arg2;       /** lineColor */
        double arg3 = 0;       /** lineTint */

        olua_to_object(L, 1, &self, "openxlsx.XLBorder");
        olua_check_enum(L, 2, &arg1);
        olua_check_object(L, 3, &arg2, "openxlsx.XLColor");
        olua_check_number(L, 4, &arg3);

        // bool setVertical(OpenXLSX::XLLineStyle lineStyle, OpenXLSX::XLColor lineColor, @optional double lineTint)
        bool ret = self->setVertical(arg1, *arg2, arg3);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLBorder::setVertical(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLBorder_setVertical$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLBorder *self = nullptr;
        OpenXLSX::XLLineStyle arg1 = (OpenXLSX::XLLineStyle)0;       /** lineStyle */
        OpenXLSX::XLColor *arg2;       /** lineColor */

        olua_to_object(L, 1, &self, "openxlsx.XLBorder");
        olua_check_enum(L, 2, &arg1);
        olua_check_object(L, 3, &arg2, "openxlsx.XLColor");

        // bool setVertical(OpenXLSX::XLLineStyle lineStyle, OpenXLSX::XLColor lineColor)
        bool ret = self->setVertical(arg1, *arg2);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLBorder::setVertical(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLBorder_setVertical(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 3) {
        // if ((olua_is_object(L, 1, "openxlsx.XLBorder")) && (olua_is_enum(L, 2)) && (olua_is_object(L, 3, "openxlsx.XLColor"))) {
            // bool setVertical(OpenXLSX::XLLineStyle lineStyle, OpenXLSX::XLColor lineColor)
            return _olua_fun_OpenXLSX_XLBorder_setVertical$2(L);
        // }
    }

    if (num_args == 4) {
        // if ((olua_is_object(L, 1, "openxlsx.XLBorder")) && (olua_is_enum(L, 2)) && (olua_is_object(L, 3, "openxlsx.XLColor")) && (olua_is_number(L, 4))) {
            // bool setVertical(OpenXLSX::XLLineStyle lineStyle, OpenXLSX::XLColor lineColor, @optional double lineTint)
            return _olua_fun_OpenXLSX_XLBorder_setVertical$1(L);
        // }
    }

    luaL_error(L, "method 'OpenXLSX::XLBorder::setVertical' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_OpenXLSX_XLBorder_summary(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLBorder *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLBorder");

        // std::string summary()
        std::string ret = self->summary();
        int num_ret = olua_push_string(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLBorder::summary(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLBorder_top(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLBorder *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLBorder");

        // OpenXLSX::XLLine top()
        OpenXLSX::XLLine ret = self->top();
        int num_ret = olua_copy_object(L, ret, "openxlsx.XLLine");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLBorder::top(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLBorder_vertical(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLBorder *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLBorder");

        // OpenXLSX::XLLine vertical()
        OpenXLSX::XLLine ret = self->vertical();
        int num_ret = olua_copy_object(L, ret, "openxlsx.XLLine");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLBorder::vertical(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_cls_openxlsx_XLBorder(lua_State *L)
{
    oluacls_class<OpenXLSX::XLBorder>(L, "openxlsx.XLBorder");
    oluacls_func(L, "__gc", _olua_fun_OpenXLSX_XLBorder___gc);
    oluacls_func(L, "bottom", _olua_fun_OpenXLSX_XLBorder_bottom);
    oluacls_func(L, "diagonal", _olua_fun_OpenXLSX_XLBorder_diagonal);
    oluacls_func(L, "diagonalDown", _olua_fun_OpenXLSX_XLBorder_diagonalDown);
    oluacls_func(L, "diagonalUp", _olua_fun_OpenXLSX_XLBorder_diagonalUp);
    oluacls_func(L, "horizontal", _olua_fun_OpenXLSX_XLBorder_horizontal);
    oluacls_func(L, "left", _olua_fun_OpenXLSX_XLBorder_left);
    oluacls_func(L, "new", _olua_fun_OpenXLSX_XLBorder_new);
    oluacls_func(L, "outline", _olua_fun_OpenXLSX_XLBorder_outline);
    oluacls_func(L, "right", _olua_fun_OpenXLSX_XLBorder_right);
    oluacls_func(L, "setBottom", _olua_fun_OpenXLSX_XLBorder_setBottom);
    oluacls_func(L, "setDiagonal", _olua_fun_OpenXLSX_XLBorder_setDiagonal);
    oluacls_func(L, "setDiagonalDown", _olua_fun_OpenXLSX_XLBorder_setDiagonalDown);
    oluacls_func(L, "setDiagonalUp", _olua_fun_OpenXLSX_XLBorder_setDiagonalUp);
    oluacls_func(L, "setHorizontal", _olua_fun_OpenXLSX_XLBorder_setHorizontal);
    oluacls_func(L, "setLeft", _olua_fun_OpenXLSX_XLBorder_setLeft);
    oluacls_func(L, "setLine", _olua_fun_OpenXLSX_XLBorder_setLine);
    oluacls_func(L, "setOutline", _olua_fun_OpenXLSX_XLBorder_setOutline);
    oluacls_func(L, "setRight", _olua_fun_OpenXLSX_XLBorder_setRight);
    oluacls_func(L, "setTop", _olua_fun_OpenXLSX_XLBorder_setTop);
    oluacls_func(L, "setVertical", _olua_fun_OpenXLSX_XLBorder_setVertical);
    oluacls_func(L, "summary", _olua_fun_OpenXLSX_XLBorder_summary);
    oluacls_func(L, "top", _olua_fun_OpenXLSX_XLBorder_top);
    oluacls_func(L, "vertical", _olua_fun_OpenXLSX_XLBorder_vertical);

    return 1;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_openxlsx_XLBorder(lua_State *L)
{
    olua_require(L, ".olua.module.openxlsx",  _olua_module_openxlsx);
    if (!olua_getclass(L, "openxlsx.XLBorder")) {
        luaL_error(L, "class not found: OpenXLSX::XLBorder");
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

static int _olua_fun_OpenXLSX_XLCell_cellFormat(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLCell *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLCell");

        // OpenXLSX::XLStyleIndex cellFormat()
        OpenXLSX::XLStyleIndex ret = self->cellFormat();
        int num_ret = olua_push_integer(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCell::cellFormat(): %s", e.what());
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

static int _olua_fun_OpenXLSX_XLCell_clear(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLCell *self = nullptr;
        uint32_t arg1 = 0;       /** keep */

        olua_to_object(L, 1, &self, "openxlsx.XLCell");
        olua_check_integer(L, 2, &arg1);

        // void clear(uint32_t keep)
        self->clear(arg1);

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCell::clear(): %s", e.what());
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

static int _olua_fun_OpenXLSX_XLCell_empty(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLCell *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLCell");

        // bool empty()
        bool ret = self->empty();
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCell::empty(): %s", e.what());
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

static int _olua_fun_OpenXLSX_XLCell_setCellFormat(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLCell *self = nullptr;
        OpenXLSX::XLStyleIndex arg1 = 0;       /** cellFormatIndex */

        olua_to_object(L, 1, &self, "openxlsx.XLCell");
        olua_check_integer(L, 2, &arg1);

        // bool setCellFormat(OpenXLSX::XLStyleIndex cellFormatIndex)
        bool ret = self->setCellFormat(arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCell::setCellFormat(): %s", e.what());
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
    oluacls_func(L, "cellFormat", _olua_fun_OpenXLSX_XLCell_cellFormat);
    oluacls_func(L, "cellReference", _olua_fun_OpenXLSX_XLCell_cellReference);
    oluacls_func(L, "clear", _olua_fun_OpenXLSX_XLCell_clear);
    oluacls_func(L, "copyFrom", _olua_fun_OpenXLSX_XLCell_copyFrom);
    oluacls_func(L, "empty", _olua_fun_OpenXLSX_XLCell_empty);
    oluacls_func(L, "formula", _olua_fun_OpenXLSX_XLCell_formula);
    oluacls_func(L, "getString", _olua_fun_OpenXLSX_XLCell_getString);
    oluacls_func(L, "hasFormula", _olua_fun_OpenXLSX_XLCell_hasFormula);
    oluacls_func(L, "new", _olua_fun_OpenXLSX_XLCell_new);
    oluacls_func(L, "offset", _olua_fun_OpenXLSX_XLCell_offset);
    oluacls_func(L, "setCellFormat", _olua_fun_OpenXLSX_XLCell_setCellFormat);
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
        OpenXLSX::XLCellReference arg1_from_string = OpenXLSX::XLCellReference("A1");       /** lhs */
        OpenXLSX::XLCellReference *arg2;       /** rhs */
        OpenXLSX::XLCellReference arg2_from_string = OpenXLSX::XLCellReference("A1");       /** rhs */

        if (olua_isstring(L, 1)) {
            olua_check_string(L, 1, &arg1_from_string);
            arg1 = &arg1_from_string;
        } else {
            olua_check_object(L, 1, &arg1, "openxlsx.XLCellReference");
        }
        if (olua_isstring(L, 2)) {
            olua_check_string(L, 2, &arg2_from_string);
            arg2 = &arg2_from_string;
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
        OpenXLSX::XLCellReference arg1_from_string = OpenXLSX::XLCellReference("A1");       /** lhs */
        OpenXLSX::XLCellReference *arg2;       /** rhs */
        OpenXLSX::XLCellReference arg2_from_string = OpenXLSX::XLCellReference("A1");       /** rhs */

        if (olua_isstring(L, 1)) {
            olua_check_string(L, 1, &arg1_from_string);
            arg1 = &arg1_from_string;
        } else {
            olua_check_object(L, 1, &arg1, "openxlsx.XLCellReference");
        }
        if (olua_isstring(L, 2)) {
            olua_check_string(L, 2, &arg2_from_string);
            arg2 = &arg2_from_string;
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
        OpenXLSX::XLCellReference arg1_from_string = OpenXLSX::XLCellReference("A1");       /** lhs */
        OpenXLSX::XLCellReference *arg2;       /** rhs */
        OpenXLSX::XLCellReference arg2_from_string = OpenXLSX::XLCellReference("A1");       /** rhs */

        if (olua_isstring(L, 1)) {
            olua_check_string(L, 1, &arg1_from_string);
            arg1 = &arg1_from_string;
        } else {
            olua_check_object(L, 1, &arg1, "openxlsx.XLCellReference");
        }
        if (olua_isstring(L, 2)) {
            olua_check_string(L, 2, &arg2_from_string);
            arg2 = &arg2_from_string;
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

static int _olua_fun_OpenXLSX_XLMergeCells___gc(lua_State *L)
{
    try {
        olua_startinvoke(L);
        auto self = (OpenXLSX::XLMergeCells *)olua_toobj(L, 1, "openxlsx.XLMergeCells");
        olua_postgc(L, self);
        olua_endinvoke(L);
        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLMergeCells::__gc(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLMergeCells_appendMerge(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLMergeCells *self = nullptr;
        std::string arg1;       /** reference */

        olua_to_object(L, 1, &self, "openxlsx.XLMergeCells");
        olua_check_string(L, 2, &arg1);

        // int32_t appendMerge(const std::string &reference)
        int32_t ret = self->appendMerge(arg1);
        int num_ret = olua_push_integer(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLMergeCells::appendMerge(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLMergeCells_count(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLMergeCells *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLMergeCells");

        // size_t count()
        size_t ret = self->count();
        int num_ret = olua_push_integer(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLMergeCells::count(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLMergeCells_deleteMerge(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLMergeCells *self = nullptr;
        int32_t arg1 = 0;       /** index */

        olua_to_object(L, 1, &self, "openxlsx.XLMergeCells");
        olua_check_integer(L, 2, &arg1);

        // void deleteMerge(int32_t index)
        self->deleteMerge(arg1);

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLMergeCells::deleteMerge(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLMergeCells_findMerge(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLMergeCells *self = nullptr;
        std::string arg1;       /** reference */

        olua_to_object(L, 1, &self, "openxlsx.XLMergeCells");
        olua_check_string(L, 2, &arg1);

        // int32_t findMerge(const std::string &reference)
        int32_t ret = self->findMerge(arg1);
        int num_ret = olua_push_integer(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLMergeCells::findMerge(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLMergeCells_findMergeByCell$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLMergeCells *self = nullptr;
        std::string arg1;       /** cellRef */

        olua_to_object(L, 1, &self, "openxlsx.XLMergeCells");
        olua_check_string(L, 2, &arg1);

        // int32_t findMergeByCell(const std::string &cellRef)
        int32_t ret = self->findMergeByCell(arg1);
        int num_ret = olua_push_integer(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLMergeCells::findMergeByCell(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLMergeCells_findMergeByCell$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLMergeCells *self = nullptr;
        OpenXLSX::XLCellReference *arg1;       /** cellRef */
        OpenXLSX::XLCellReference arg1_from_string = OpenXLSX::XLCellReference("A1");       /** cellRef */

        olua_to_object(L, 1, &self, "openxlsx.XLMergeCells");
        if (olua_isstring(L, 2)) {
            olua_check_string(L, 2, &arg1_from_string);
            arg1 = &arg1_from_string;
        } else {
            olua_check_object(L, 2, &arg1, "openxlsx.XLCellReference");
        }

        // int32_t findMergeByCell(OpenXLSX::XLCellReference cellRef)
        int32_t ret = self->findMergeByCell(*arg1);
        int num_ret = olua_push_integer(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLMergeCells::findMergeByCell(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLMergeCells_findMergeByCell(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 2) {
        if ((olua_is_object(L, 1, "openxlsx.XLMergeCells")) && (olua_is_string(L, 2))) {
            // int32_t findMergeByCell(const std::string &cellRef)
            return _olua_fun_OpenXLSX_XLMergeCells_findMergeByCell$1(L);
        }

        // if ((olua_is_object(L, 1, "openxlsx.XLMergeCells")) && (olua_is_object(L, 2, "openxlsx.XLCellReference") || olua_is_string(L, 2))) {
            // int32_t findMergeByCell(OpenXLSX::XLCellReference cellRef)
            return _olua_fun_OpenXLSX_XLMergeCells_findMergeByCell$2(L);
        // }
    }

    luaL_error(L, "method 'OpenXLSX::XLMergeCells::findMergeByCell' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_OpenXLSX_XLMergeCells_merge(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLMergeCells *self = nullptr;
        int32_t arg1 = 0;       /** index */

        olua_to_object(L, 1, &self, "openxlsx.XLMergeCells");
        olua_check_integer(L, 2, &arg1);

        // const char *merge(int32_t index)
        const char *ret = self->merge(arg1);
        int num_ret = olua_push_string(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLMergeCells::merge(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLMergeCells_mergeExists(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLMergeCells *self = nullptr;
        std::string arg1;       /** reference */

        olua_to_object(L, 1, &self, "openxlsx.XLMergeCells");
        olua_check_string(L, 2, &arg1);

        // bool mergeExists(const std::string &reference)
        bool ret = self->mergeExists(arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLMergeCells::mergeExists(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLMergeCells_new(lua_State *L)
{
    try {
        olua_startinvoke(L);

        // OpenXLSX::XLMergeCells()
        OpenXLSX::XLMergeCells *ret = new OpenXLSX::XLMergeCells();
        int num_ret = olua_push_object(L, ret, "openxlsx.XLMergeCells");
        olua_postnew(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLMergeCells::new(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLMergeCells_uninitialized(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLMergeCells *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLMergeCells");

        // bool uninitialized()
        bool ret = self->uninitialized();
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLMergeCells::uninitialized(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_cls_openxlsx_XLMergeCells(lua_State *L)
{
    oluacls_class<OpenXLSX::XLMergeCells>(L, "openxlsx.XLMergeCells");
    oluacls_func(L, "__gc", _olua_fun_OpenXLSX_XLMergeCells___gc);
    oluacls_func(L, "appendMerge", _olua_fun_OpenXLSX_XLMergeCells_appendMerge);
    oluacls_func(L, "count", _olua_fun_OpenXLSX_XLMergeCells_count);
    oluacls_func(L, "deleteMerge", _olua_fun_OpenXLSX_XLMergeCells_deleteMerge);
    oluacls_func(L, "findMerge", _olua_fun_OpenXLSX_XLMergeCells_findMerge);
    oluacls_func(L, "findMergeByCell", _olua_fun_OpenXLSX_XLMergeCells_findMergeByCell);
    oluacls_func(L, "merge", _olua_fun_OpenXLSX_XLMergeCells_merge);
    oluacls_func(L, "mergeExists", _olua_fun_OpenXLSX_XLMergeCells_mergeExists);
    oluacls_func(L, "new", _olua_fun_OpenXLSX_XLMergeCells_new);
    oluacls_func(L, "uninitialized", _olua_fun_OpenXLSX_XLMergeCells_uninitialized);

    return 1;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_openxlsx_XLMergeCells(lua_State *L)
{
    olua_require(L, ".olua.module.openxlsx",  _olua_module_openxlsx);
    if (!olua_getclass(L, "openxlsx.XLMergeCells")) {
        luaL_error(L, "class not found: OpenXLSX::XLMergeCells");
    }
    return 1;
}
OLUA_END_DECLS

static int _olua_fun_OpenXLSX_XLCellFormats___gc(lua_State *L)
{
    try {
        olua_startinvoke(L);
        auto self = (OpenXLSX::XLCellFormats *)olua_toobj(L, 1, "openxlsx.XLCellFormats");
        olua_postgc(L, self);
        olua_endinvoke(L);
        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCellFormats::__gc(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCellFormats_cellFormatByIndex(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLCellFormats *self = nullptr;
        OpenXLSX::XLStyleIndex arg1 = 0;       /** index */

        olua_to_object(L, 1, &self, "openxlsx.XLCellFormats");
        olua_check_integer(L, 2, &arg1);

        // OpenXLSX::XLCellFormat cellFormatByIndex(OpenXLSX::XLStyleIndex index)
        OpenXLSX::XLCellFormat ret = self->cellFormatByIndex(arg1);
        int num_ret = olua_copy_object(L, ret, "openxlsx.XLCellFormat");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCellFormats::cellFormatByIndex(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCellFormats_count(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLCellFormats *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLCellFormats");

        // size_t count()
        size_t ret = self->count();
        int num_ret = olua_push_integer(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCellFormats::count(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCellFormats_create$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLCellFormats *self = nullptr;
        OpenXLSX::XLCellFormat *arg1;       /** copyFrom */
        std::string arg2;       /** styleEntriesPrefix */

        olua_to_object(L, 1, &self, "openxlsx.XLCellFormats");
        olua_check_object(L, 2, &arg1, "openxlsx.XLCellFormat");
        olua_check_string(L, 3, &arg2);

        // OpenXLSX::XLStyleIndex create(@optional OpenXLSX::XLCellFormat copyFrom, @optional std::string styleEntriesPrefix)
        OpenXLSX::XLStyleIndex ret = self->create(*arg1, arg2);
        int num_ret = olua_push_integer(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCellFormats::create(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCellFormats_create$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLCellFormats *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLCellFormats");

        // OpenXLSX::XLStyleIndex create()
        OpenXLSX::XLStyleIndex ret = self->create();
        int num_ret = olua_push_integer(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCellFormats::create(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCellFormats_create$3(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLCellFormats *self = nullptr;
        OpenXLSX::XLCellFormat *arg1;       /** copyFrom */

        olua_to_object(L, 1, &self, "openxlsx.XLCellFormats");
        olua_check_object(L, 2, &arg1, "openxlsx.XLCellFormat");

        // OpenXLSX::XLStyleIndex create(@optional OpenXLSX::XLCellFormat copyFrom)
        OpenXLSX::XLStyleIndex ret = self->create(*arg1);
        int num_ret = olua_push_integer(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCellFormats::create(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCellFormats_create(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 1) {
        // OpenXLSX::XLStyleIndex create()
        return _olua_fun_OpenXLSX_XLCellFormats_create$2(L);
    }

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "openxlsx.XLCellFormats")) && (olua_is_object(L, 2, "openxlsx.XLCellFormat"))) {
            // OpenXLSX::XLStyleIndex create(@optional OpenXLSX::XLCellFormat copyFrom)
            return _olua_fun_OpenXLSX_XLCellFormats_create$3(L);
        // }
    }

    if (num_args == 3) {
        // if ((olua_is_object(L, 1, "openxlsx.XLCellFormats")) && (olua_is_object(L, 2, "openxlsx.XLCellFormat")) && (olua_is_string(L, 3))) {
            // OpenXLSX::XLStyleIndex create(@optional OpenXLSX::XLCellFormat copyFrom, @optional std::string styleEntriesPrefix)
            return _olua_fun_OpenXLSX_XLCellFormats_create$1(L);
        // }
    }

    luaL_error(L, "method 'OpenXLSX::XLCellFormats::create' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_OpenXLSX_XLCellFormats_new(lua_State *L)
{
    try {
        olua_startinvoke(L);

        // OpenXLSX::XLCellFormats()
        OpenXLSX::XLCellFormats *ret = new OpenXLSX::XLCellFormats();
        int num_ret = olua_push_object(L, ret, "openxlsx.XLCellFormats");
        olua_postnew(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCellFormats::new(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_cls_openxlsx_XLCellFormats(lua_State *L)
{
    oluacls_class<OpenXLSX::XLCellFormats>(L, "openxlsx.XLCellFormats");
    oluacls_func(L, "__gc", _olua_fun_OpenXLSX_XLCellFormats___gc);
    oluacls_func(L, "cellFormatByIndex", _olua_fun_OpenXLSX_XLCellFormats_cellFormatByIndex);
    oluacls_func(L, "count", _olua_fun_OpenXLSX_XLCellFormats_count);
    oluacls_func(L, "create", _olua_fun_OpenXLSX_XLCellFormats_create);
    oluacls_func(L, "new", _olua_fun_OpenXLSX_XLCellFormats_new);

    return 1;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_openxlsx_XLCellFormats(lua_State *L)
{
    olua_require(L, ".olua.module.openxlsx",  _olua_module_openxlsx);
    if (!olua_getclass(L, "openxlsx.XLCellFormats")) {
        luaL_error(L, "class not found: OpenXLSX::XLCellFormats");
    }
    return 1;
}
OLUA_END_DECLS

static int _olua_fun_OpenXLSX_XLCellFormat___gc(lua_State *L)
{
    try {
        olua_startinvoke(L);
        auto self = (OpenXLSX::XLCellFormat *)olua_toobj(L, 1, "openxlsx.XLCellFormat");
        olua_postgc(L, self);
        olua_endinvoke(L);
        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCellFormat::__gc(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCellFormat_alignment$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLCellFormat *self = nullptr;
        bool arg1 = false;       /** createIfMissing */

        olua_to_object(L, 1, &self, "openxlsx.XLCellFormat");
        olua_check_bool(L, 2, &arg1);

        // OpenXLSX::XLAlignment alignment(@optional bool createIfMissing)
        OpenXLSX::XLAlignment ret = self->alignment(arg1);
        int num_ret = olua_copy_object(L, ret, "openxlsx.XLAlignment");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCellFormat::alignment(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCellFormat_alignment$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLCellFormat *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLCellFormat");

        // OpenXLSX::XLAlignment alignment()
        OpenXLSX::XLAlignment ret = self->alignment();
        int num_ret = olua_copy_object(L, ret, "openxlsx.XLAlignment");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCellFormat::alignment(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCellFormat_alignment(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 1) {
        // OpenXLSX::XLAlignment alignment()
        return _olua_fun_OpenXLSX_XLCellFormat_alignment$2(L);
    }

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "openxlsx.XLCellFormat")) && (olua_is_bool(L, 2))) {
            // OpenXLSX::XLAlignment alignment(@optional bool createIfMissing)
            return _olua_fun_OpenXLSX_XLCellFormat_alignment$1(L);
        // }
    }

    luaL_error(L, "method 'OpenXLSX::XLCellFormat::alignment' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_OpenXLSX_XLCellFormat_applyAlignment(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLCellFormat *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLCellFormat");

        // bool applyAlignment()
        bool ret = self->applyAlignment();
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCellFormat::applyAlignment(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCellFormat_applyBorder(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLCellFormat *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLCellFormat");

        // bool applyBorder()
        bool ret = self->applyBorder();
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCellFormat::applyBorder(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCellFormat_applyFill(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLCellFormat *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLCellFormat");

        // bool applyFill()
        bool ret = self->applyFill();
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCellFormat::applyFill(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCellFormat_applyFont(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLCellFormat *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLCellFormat");

        // bool applyFont()
        bool ret = self->applyFont();
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCellFormat::applyFont(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCellFormat_applyNumberFormat(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLCellFormat *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLCellFormat");

        // bool applyNumberFormat()
        bool ret = self->applyNumberFormat();
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCellFormat::applyNumberFormat(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCellFormat_applyProtection(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLCellFormat *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLCellFormat");

        // bool applyProtection()
        bool ret = self->applyProtection();
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCellFormat::applyProtection(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCellFormat_borderIndex(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLCellFormat *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLCellFormat");

        // OpenXLSX::XLStyleIndex borderIndex()
        OpenXLSX::XLStyleIndex ret = self->borderIndex();
        int num_ret = olua_push_integer(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCellFormat::borderIndex(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCellFormat_extLst(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLCellFormat *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLCellFormat");

        // OpenXLSX::XLUnsupportedElement extLst()
        OpenXLSX::XLUnsupportedElement ret = self->extLst();
        int num_ret = olua_copy_object(L, ret, "openxlsx.XLUnsupportedElement");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCellFormat::extLst(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCellFormat_fillIndex(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLCellFormat *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLCellFormat");

        // OpenXLSX::XLStyleIndex fillIndex()
        OpenXLSX::XLStyleIndex ret = self->fillIndex();
        int num_ret = olua_push_integer(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCellFormat::fillIndex(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCellFormat_fontIndex(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLCellFormat *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLCellFormat");

        // OpenXLSX::XLStyleIndex fontIndex()
        OpenXLSX::XLStyleIndex ret = self->fontIndex();
        int num_ret = olua_push_integer(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCellFormat::fontIndex(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCellFormat_hidden(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLCellFormat *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLCellFormat");

        // bool hidden()
        bool ret = self->hidden();
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCellFormat::hidden(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCellFormat_locked(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLCellFormat *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLCellFormat");

        // bool locked()
        bool ret = self->locked();
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCellFormat::locked(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCellFormat_new(lua_State *L)
{
    try {
        olua_startinvoke(L);

        // OpenXLSX::XLCellFormat()
        OpenXLSX::XLCellFormat *ret = new OpenXLSX::XLCellFormat();
        int num_ret = olua_push_object(L, ret, "openxlsx.XLCellFormat");
        olua_postnew(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCellFormat::new(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCellFormat_numberFormatId(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLCellFormat *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLCellFormat");

        // uint32_t numberFormatId()
        uint32_t ret = self->numberFormatId();
        int num_ret = olua_push_integer(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCellFormat::numberFormatId(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCellFormat_pivotButton(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLCellFormat *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLCellFormat");

        // bool pivotButton()
        bool ret = self->pivotButton();
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCellFormat::pivotButton(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCellFormat_quotePrefix(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLCellFormat *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLCellFormat");

        // bool quotePrefix()
        bool ret = self->quotePrefix();
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCellFormat::quotePrefix(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCellFormat_setApplyAlignment$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLCellFormat *self = nullptr;
        bool arg1 = false;       /** set */

        olua_to_object(L, 1, &self, "openxlsx.XLCellFormat");
        olua_check_bool(L, 2, &arg1);

        // bool setApplyAlignment(@optional bool set)
        bool ret = self->setApplyAlignment(arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCellFormat::setApplyAlignment(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCellFormat_setApplyAlignment$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLCellFormat *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLCellFormat");

        // bool setApplyAlignment()
        bool ret = self->setApplyAlignment();
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCellFormat::setApplyAlignment(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCellFormat_setApplyAlignment(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 1) {
        // bool setApplyAlignment()
        return _olua_fun_OpenXLSX_XLCellFormat_setApplyAlignment$2(L);
    }

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "openxlsx.XLCellFormat")) && (olua_is_bool(L, 2))) {
            // bool setApplyAlignment(@optional bool set)
            return _olua_fun_OpenXLSX_XLCellFormat_setApplyAlignment$1(L);
        // }
    }

    luaL_error(L, "method 'OpenXLSX::XLCellFormat::setApplyAlignment' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_OpenXLSX_XLCellFormat_setApplyBorder$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLCellFormat *self = nullptr;
        bool arg1 = false;       /** set */

        olua_to_object(L, 1, &self, "openxlsx.XLCellFormat");
        olua_check_bool(L, 2, &arg1);

        // bool setApplyBorder(@optional bool set)
        bool ret = self->setApplyBorder(arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCellFormat::setApplyBorder(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCellFormat_setApplyBorder$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLCellFormat *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLCellFormat");

        // bool setApplyBorder()
        bool ret = self->setApplyBorder();
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCellFormat::setApplyBorder(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCellFormat_setApplyBorder(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 1) {
        // bool setApplyBorder()
        return _olua_fun_OpenXLSX_XLCellFormat_setApplyBorder$2(L);
    }

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "openxlsx.XLCellFormat")) && (olua_is_bool(L, 2))) {
            // bool setApplyBorder(@optional bool set)
            return _olua_fun_OpenXLSX_XLCellFormat_setApplyBorder$1(L);
        // }
    }

    luaL_error(L, "method 'OpenXLSX::XLCellFormat::setApplyBorder' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_OpenXLSX_XLCellFormat_setApplyFill$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLCellFormat *self = nullptr;
        bool arg1 = false;       /** set */

        olua_to_object(L, 1, &self, "openxlsx.XLCellFormat");
        olua_check_bool(L, 2, &arg1);

        // bool setApplyFill(@optional bool set)
        bool ret = self->setApplyFill(arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCellFormat::setApplyFill(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCellFormat_setApplyFill$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLCellFormat *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLCellFormat");

        // bool setApplyFill()
        bool ret = self->setApplyFill();
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCellFormat::setApplyFill(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCellFormat_setApplyFill(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 1) {
        // bool setApplyFill()
        return _olua_fun_OpenXLSX_XLCellFormat_setApplyFill$2(L);
    }

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "openxlsx.XLCellFormat")) && (olua_is_bool(L, 2))) {
            // bool setApplyFill(@optional bool set)
            return _olua_fun_OpenXLSX_XLCellFormat_setApplyFill$1(L);
        // }
    }

    luaL_error(L, "method 'OpenXLSX::XLCellFormat::setApplyFill' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_OpenXLSX_XLCellFormat_setApplyFont$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLCellFormat *self = nullptr;
        bool arg1 = false;       /** set */

        olua_to_object(L, 1, &self, "openxlsx.XLCellFormat");
        olua_check_bool(L, 2, &arg1);

        // bool setApplyFont(@optional bool set)
        bool ret = self->setApplyFont(arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCellFormat::setApplyFont(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCellFormat_setApplyFont$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLCellFormat *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLCellFormat");

        // bool setApplyFont()
        bool ret = self->setApplyFont();
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCellFormat::setApplyFont(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCellFormat_setApplyFont(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 1) {
        // bool setApplyFont()
        return _olua_fun_OpenXLSX_XLCellFormat_setApplyFont$2(L);
    }

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "openxlsx.XLCellFormat")) && (olua_is_bool(L, 2))) {
            // bool setApplyFont(@optional bool set)
            return _olua_fun_OpenXLSX_XLCellFormat_setApplyFont$1(L);
        // }
    }

    luaL_error(L, "method 'OpenXLSX::XLCellFormat::setApplyFont' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_OpenXLSX_XLCellFormat_setApplyNumberFormat$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLCellFormat *self = nullptr;
        bool arg1 = false;       /** set */

        olua_to_object(L, 1, &self, "openxlsx.XLCellFormat");
        olua_check_bool(L, 2, &arg1);

        // bool setApplyNumberFormat(@optional bool set)
        bool ret = self->setApplyNumberFormat(arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCellFormat::setApplyNumberFormat(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCellFormat_setApplyNumberFormat$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLCellFormat *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLCellFormat");

        // bool setApplyNumberFormat()
        bool ret = self->setApplyNumberFormat();
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCellFormat::setApplyNumberFormat(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCellFormat_setApplyNumberFormat(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 1) {
        // bool setApplyNumberFormat()
        return _olua_fun_OpenXLSX_XLCellFormat_setApplyNumberFormat$2(L);
    }

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "openxlsx.XLCellFormat")) && (olua_is_bool(L, 2))) {
            // bool setApplyNumberFormat(@optional bool set)
            return _olua_fun_OpenXLSX_XLCellFormat_setApplyNumberFormat$1(L);
        // }
    }

    luaL_error(L, "method 'OpenXLSX::XLCellFormat::setApplyNumberFormat' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_OpenXLSX_XLCellFormat_setApplyProtection$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLCellFormat *self = nullptr;
        bool arg1 = false;       /** set */

        olua_to_object(L, 1, &self, "openxlsx.XLCellFormat");
        olua_check_bool(L, 2, &arg1);

        // bool setApplyProtection(@optional bool set)
        bool ret = self->setApplyProtection(arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCellFormat::setApplyProtection(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCellFormat_setApplyProtection$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLCellFormat *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLCellFormat");

        // bool setApplyProtection()
        bool ret = self->setApplyProtection();
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCellFormat::setApplyProtection(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCellFormat_setApplyProtection(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 1) {
        // bool setApplyProtection()
        return _olua_fun_OpenXLSX_XLCellFormat_setApplyProtection$2(L);
    }

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "openxlsx.XLCellFormat")) && (olua_is_bool(L, 2))) {
            // bool setApplyProtection(@optional bool set)
            return _olua_fun_OpenXLSX_XLCellFormat_setApplyProtection$1(L);
        // }
    }

    luaL_error(L, "method 'OpenXLSX::XLCellFormat::setApplyProtection' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_OpenXLSX_XLCellFormat_setBorderIndex(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLCellFormat *self = nullptr;
        OpenXLSX::XLStyleIndex arg1 = 0;       /** newBorderIndex */

        olua_to_object(L, 1, &self, "openxlsx.XLCellFormat");
        olua_check_integer(L, 2, &arg1);

        // bool setBorderIndex(OpenXLSX::XLStyleIndex newBorderIndex)
        bool ret = self->setBorderIndex(arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCellFormat::setBorderIndex(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCellFormat_setExtLst(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLCellFormat *self = nullptr;
        OpenXLSX::XLUnsupportedElement *arg1;       /** newExtLst */

        olua_to_object(L, 1, &self, "openxlsx.XLCellFormat");
        olua_check_object(L, 2, &arg1, "openxlsx.XLUnsupportedElement");

        // bool setExtLst(const OpenXLSX::XLUnsupportedElement &newExtLst)
        bool ret = self->setExtLst(*arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCellFormat::setExtLst(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCellFormat_setFillIndex(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLCellFormat *self = nullptr;
        OpenXLSX::XLStyleIndex arg1 = 0;       /** newFillIndex */

        olua_to_object(L, 1, &self, "openxlsx.XLCellFormat");
        olua_check_integer(L, 2, &arg1);

        // bool setFillIndex(OpenXLSX::XLStyleIndex newFillIndex)
        bool ret = self->setFillIndex(arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCellFormat::setFillIndex(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCellFormat_setFontIndex(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLCellFormat *self = nullptr;
        OpenXLSX::XLStyleIndex arg1 = 0;       /** newFontIndex */

        olua_to_object(L, 1, &self, "openxlsx.XLCellFormat");
        olua_check_integer(L, 2, &arg1);

        // bool setFontIndex(OpenXLSX::XLStyleIndex newFontIndex)
        bool ret = self->setFontIndex(arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCellFormat::setFontIndex(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCellFormat_setHidden$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLCellFormat *self = nullptr;
        bool arg1 = false;       /** set */

        olua_to_object(L, 1, &self, "openxlsx.XLCellFormat");
        olua_check_bool(L, 2, &arg1);

        // bool setHidden(@optional bool set)
        bool ret = self->setHidden(arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCellFormat::setHidden(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCellFormat_setHidden$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLCellFormat *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLCellFormat");

        // bool setHidden()
        bool ret = self->setHidden();
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCellFormat::setHidden(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCellFormat_setHidden(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 1) {
        // bool setHidden()
        return _olua_fun_OpenXLSX_XLCellFormat_setHidden$2(L);
    }

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "openxlsx.XLCellFormat")) && (olua_is_bool(L, 2))) {
            // bool setHidden(@optional bool set)
            return _olua_fun_OpenXLSX_XLCellFormat_setHidden$1(L);
        // }
    }

    luaL_error(L, "method 'OpenXLSX::XLCellFormat::setHidden' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_OpenXLSX_XLCellFormat_setLocked$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLCellFormat *self = nullptr;
        bool arg1 = false;       /** set */

        olua_to_object(L, 1, &self, "openxlsx.XLCellFormat");
        olua_check_bool(L, 2, &arg1);

        // bool setLocked(@optional bool set)
        bool ret = self->setLocked(arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCellFormat::setLocked(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCellFormat_setLocked$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLCellFormat *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLCellFormat");

        // bool setLocked()
        bool ret = self->setLocked();
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCellFormat::setLocked(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCellFormat_setLocked(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 1) {
        // bool setLocked()
        return _olua_fun_OpenXLSX_XLCellFormat_setLocked$2(L);
    }

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "openxlsx.XLCellFormat")) && (olua_is_bool(L, 2))) {
            // bool setLocked(@optional bool set)
            return _olua_fun_OpenXLSX_XLCellFormat_setLocked$1(L);
        // }
    }

    luaL_error(L, "method 'OpenXLSX::XLCellFormat::setLocked' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_OpenXLSX_XLCellFormat_setNumberFormatId(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLCellFormat *self = nullptr;
        uint32_t arg1 = 0;       /** newNumFmtId */

        olua_to_object(L, 1, &self, "openxlsx.XLCellFormat");
        olua_check_integer(L, 2, &arg1);

        // bool setNumberFormatId(uint32_t newNumFmtId)
        bool ret = self->setNumberFormatId(arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCellFormat::setNumberFormatId(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCellFormat_setPivotButton$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLCellFormat *self = nullptr;
        bool arg1 = false;       /** set */

        olua_to_object(L, 1, &self, "openxlsx.XLCellFormat");
        olua_check_bool(L, 2, &arg1);

        // bool setPivotButton(@optional bool set)
        bool ret = self->setPivotButton(arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCellFormat::setPivotButton(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCellFormat_setPivotButton$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLCellFormat *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLCellFormat");

        // bool setPivotButton()
        bool ret = self->setPivotButton();
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCellFormat::setPivotButton(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCellFormat_setPivotButton(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 1) {
        // bool setPivotButton()
        return _olua_fun_OpenXLSX_XLCellFormat_setPivotButton$2(L);
    }

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "openxlsx.XLCellFormat")) && (olua_is_bool(L, 2))) {
            // bool setPivotButton(@optional bool set)
            return _olua_fun_OpenXLSX_XLCellFormat_setPivotButton$1(L);
        // }
    }

    luaL_error(L, "method 'OpenXLSX::XLCellFormat::setPivotButton' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_OpenXLSX_XLCellFormat_setQuotePrefix$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLCellFormat *self = nullptr;
        bool arg1 = false;       /** set */

        olua_to_object(L, 1, &self, "openxlsx.XLCellFormat");
        olua_check_bool(L, 2, &arg1);

        // bool setQuotePrefix(@optional bool set)
        bool ret = self->setQuotePrefix(arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCellFormat::setQuotePrefix(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCellFormat_setQuotePrefix$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLCellFormat *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLCellFormat");

        // bool setQuotePrefix()
        bool ret = self->setQuotePrefix();
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCellFormat::setQuotePrefix(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCellFormat_setQuotePrefix(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 1) {
        // bool setQuotePrefix()
        return _olua_fun_OpenXLSX_XLCellFormat_setQuotePrefix$2(L);
    }

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "openxlsx.XLCellFormat")) && (olua_is_bool(L, 2))) {
            // bool setQuotePrefix(@optional bool set)
            return _olua_fun_OpenXLSX_XLCellFormat_setQuotePrefix$1(L);
        // }
    }

    luaL_error(L, "method 'OpenXLSX::XLCellFormat::setQuotePrefix' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_OpenXLSX_XLCellFormat_setXfId(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLCellFormat *self = nullptr;
        OpenXLSX::XLStyleIndex arg1 = 0;       /** newXfId */

        olua_to_object(L, 1, &self, "openxlsx.XLCellFormat");
        olua_check_integer(L, 2, &arg1);

        // bool setXfId(OpenXLSX::XLStyleIndex newXfId)
        bool ret = self->setXfId(arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCellFormat::setXfId(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCellFormat_summary(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLCellFormat *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLCellFormat");

        // std::string summary()
        std::string ret = self->summary();
        int num_ret = olua_push_string(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCellFormat::summary(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCellFormat_xfId(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLCellFormat *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLCellFormat");

        // OpenXLSX::XLStyleIndex xfId()
        OpenXLSX::XLStyleIndex ret = self->xfId();
        int num_ret = olua_push_integer(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCellFormat::xfId(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_cls_openxlsx_XLCellFormat(lua_State *L)
{
    oluacls_class<OpenXLSX::XLCellFormat>(L, "openxlsx.XLCellFormat");
    oluacls_func(L, "__gc", _olua_fun_OpenXLSX_XLCellFormat___gc);
    oluacls_func(L, "alignment", _olua_fun_OpenXLSX_XLCellFormat_alignment);
    oluacls_func(L, "applyAlignment", _olua_fun_OpenXLSX_XLCellFormat_applyAlignment);
    oluacls_func(L, "applyBorder", _olua_fun_OpenXLSX_XLCellFormat_applyBorder);
    oluacls_func(L, "applyFill", _olua_fun_OpenXLSX_XLCellFormat_applyFill);
    oluacls_func(L, "applyFont", _olua_fun_OpenXLSX_XLCellFormat_applyFont);
    oluacls_func(L, "applyNumberFormat", _olua_fun_OpenXLSX_XLCellFormat_applyNumberFormat);
    oluacls_func(L, "applyProtection", _olua_fun_OpenXLSX_XLCellFormat_applyProtection);
    oluacls_func(L, "borderIndex", _olua_fun_OpenXLSX_XLCellFormat_borderIndex);
    oluacls_func(L, "extLst", _olua_fun_OpenXLSX_XLCellFormat_extLst);
    oluacls_func(L, "fillIndex", _olua_fun_OpenXLSX_XLCellFormat_fillIndex);
    oluacls_func(L, "fontIndex", _olua_fun_OpenXLSX_XLCellFormat_fontIndex);
    oluacls_func(L, "hidden", _olua_fun_OpenXLSX_XLCellFormat_hidden);
    oluacls_func(L, "locked", _olua_fun_OpenXLSX_XLCellFormat_locked);
    oluacls_func(L, "new", _olua_fun_OpenXLSX_XLCellFormat_new);
    oluacls_func(L, "numberFormatId", _olua_fun_OpenXLSX_XLCellFormat_numberFormatId);
    oluacls_func(L, "pivotButton", _olua_fun_OpenXLSX_XLCellFormat_pivotButton);
    oluacls_func(L, "quotePrefix", _olua_fun_OpenXLSX_XLCellFormat_quotePrefix);
    oluacls_func(L, "setApplyAlignment", _olua_fun_OpenXLSX_XLCellFormat_setApplyAlignment);
    oluacls_func(L, "setApplyBorder", _olua_fun_OpenXLSX_XLCellFormat_setApplyBorder);
    oluacls_func(L, "setApplyFill", _olua_fun_OpenXLSX_XLCellFormat_setApplyFill);
    oluacls_func(L, "setApplyFont", _olua_fun_OpenXLSX_XLCellFormat_setApplyFont);
    oluacls_func(L, "setApplyNumberFormat", _olua_fun_OpenXLSX_XLCellFormat_setApplyNumberFormat);
    oluacls_func(L, "setApplyProtection", _olua_fun_OpenXLSX_XLCellFormat_setApplyProtection);
    oluacls_func(L, "setBorderIndex", _olua_fun_OpenXLSX_XLCellFormat_setBorderIndex);
    oluacls_func(L, "setExtLst", _olua_fun_OpenXLSX_XLCellFormat_setExtLst);
    oluacls_func(L, "setFillIndex", _olua_fun_OpenXLSX_XLCellFormat_setFillIndex);
    oluacls_func(L, "setFontIndex", _olua_fun_OpenXLSX_XLCellFormat_setFontIndex);
    oluacls_func(L, "setHidden", _olua_fun_OpenXLSX_XLCellFormat_setHidden);
    oluacls_func(L, "setLocked", _olua_fun_OpenXLSX_XLCellFormat_setLocked);
    oluacls_func(L, "setNumberFormatId", _olua_fun_OpenXLSX_XLCellFormat_setNumberFormatId);
    oluacls_func(L, "setPivotButton", _olua_fun_OpenXLSX_XLCellFormat_setPivotButton);
    oluacls_func(L, "setQuotePrefix", _olua_fun_OpenXLSX_XLCellFormat_setQuotePrefix);
    oluacls_func(L, "setXfId", _olua_fun_OpenXLSX_XLCellFormat_setXfId);
    oluacls_func(L, "summary", _olua_fun_OpenXLSX_XLCellFormat_summary);
    oluacls_func(L, "xfId", _olua_fun_OpenXLSX_XLCellFormat_xfId);

    return 1;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_openxlsx_XLCellFormat(lua_State *L)
{
    olua_require(L, ".olua.module.openxlsx",  _olua_module_openxlsx);
    if (!olua_getclass(L, "openxlsx.XLCellFormat")) {
        luaL_error(L, "class not found: OpenXLSX::XLCellFormat");
    }
    return 1;
}
OLUA_END_DECLS

static int _olua_fun_OpenXLSX_XLAlignment___gc(lua_State *L)
{
    try {
        olua_startinvoke(L);
        auto self = (OpenXLSX::XLAlignment *)olua_toobj(L, 1, "openxlsx.XLAlignment");
        olua_postgc(L, self);
        olua_endinvoke(L);
        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLAlignment::__gc(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLAlignment_horizontal(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLAlignment *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLAlignment");

        // OpenXLSX::XLAlignmentStyle horizontal()
        OpenXLSX::XLAlignmentStyle ret = self->horizontal();
        int num_ret = olua_push_enum(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLAlignment::horizontal(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLAlignment_indent(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLAlignment *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLAlignment");

        // uint32_t indent()
        uint32_t ret = self->indent();
        int num_ret = olua_push_integer(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLAlignment::indent(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLAlignment_justifyLastLine(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLAlignment *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLAlignment");

        // bool justifyLastLine()
        bool ret = self->justifyLastLine();
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLAlignment::justifyLastLine(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLAlignment_new(lua_State *L)
{
    try {
        olua_startinvoke(L);

        // OpenXLSX::XLAlignment()
        OpenXLSX::XLAlignment *ret = new OpenXLSX::XLAlignment();
        int num_ret = olua_push_object(L, ret, "openxlsx.XLAlignment");
        olua_postnew(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLAlignment::new(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLAlignment_readingOrder(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLAlignment *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLAlignment");

        // uint32_t readingOrder()
        uint32_t ret = self->readingOrder();
        int num_ret = olua_push_integer(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLAlignment::readingOrder(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLAlignment_relativeIndent(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLAlignment *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLAlignment");

        // int32_t relativeIndent()
        int32_t ret = self->relativeIndent();
        int num_ret = olua_push_integer(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLAlignment::relativeIndent(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLAlignment_setHorizontal(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLAlignment *self = nullptr;
        OpenXLSX::XLAlignmentStyle arg1 = (OpenXLSX::XLAlignmentStyle)0;       /** newStyle */

        olua_to_object(L, 1, &self, "openxlsx.XLAlignment");
        olua_check_enum(L, 2, &arg1);

        // bool setHorizontal(OpenXLSX::XLAlignmentStyle newStyle)
        bool ret = self->setHorizontal(arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLAlignment::setHorizontal(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLAlignment_setIndent(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLAlignment *self = nullptr;
        uint32_t arg1 = 0;       /** newIndent */

        olua_to_object(L, 1, &self, "openxlsx.XLAlignment");
        olua_check_integer(L, 2, &arg1);

        // bool setIndent(uint32_t newIndent)
        bool ret = self->setIndent(arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLAlignment::setIndent(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLAlignment_setJustifyLastLine$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLAlignment *self = nullptr;
        bool arg1 = false;       /** set */

        olua_to_object(L, 1, &self, "openxlsx.XLAlignment");
        olua_check_bool(L, 2, &arg1);

        // bool setJustifyLastLine(@optional bool set)
        bool ret = self->setJustifyLastLine(arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLAlignment::setJustifyLastLine(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLAlignment_setJustifyLastLine$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLAlignment *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLAlignment");

        // bool setJustifyLastLine()
        bool ret = self->setJustifyLastLine();
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLAlignment::setJustifyLastLine(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLAlignment_setJustifyLastLine(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 1) {
        // bool setJustifyLastLine()
        return _olua_fun_OpenXLSX_XLAlignment_setJustifyLastLine$2(L);
    }

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "openxlsx.XLAlignment")) && (olua_is_bool(L, 2))) {
            // bool setJustifyLastLine(@optional bool set)
            return _olua_fun_OpenXLSX_XLAlignment_setJustifyLastLine$1(L);
        // }
    }

    luaL_error(L, "method 'OpenXLSX::XLAlignment::setJustifyLastLine' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_OpenXLSX_XLAlignment_setReadingOrder(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLAlignment *self = nullptr;
        uint32_t arg1 = 0;       /** newReadingOrder */

        olua_to_object(L, 1, &self, "openxlsx.XLAlignment");
        olua_check_integer(L, 2, &arg1);

        // bool setReadingOrder(uint32_t newReadingOrder)
        bool ret = self->setReadingOrder(arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLAlignment::setReadingOrder(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLAlignment_setRelativeIndent(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLAlignment *self = nullptr;
        int32_t arg1 = 0;       /** newIndent */

        olua_to_object(L, 1, &self, "openxlsx.XLAlignment");
        olua_check_integer(L, 2, &arg1);

        // bool setRelativeIndent(int32_t newIndent)
        bool ret = self->setRelativeIndent(arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLAlignment::setRelativeIndent(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLAlignment_setShrinkToFit$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLAlignment *self = nullptr;
        bool arg1 = false;       /** set */

        olua_to_object(L, 1, &self, "openxlsx.XLAlignment");
        olua_check_bool(L, 2, &arg1);

        // bool setShrinkToFit(@optional bool set)
        bool ret = self->setShrinkToFit(arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLAlignment::setShrinkToFit(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLAlignment_setShrinkToFit$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLAlignment *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLAlignment");

        // bool setShrinkToFit()
        bool ret = self->setShrinkToFit();
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLAlignment::setShrinkToFit(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLAlignment_setShrinkToFit(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 1) {
        // bool setShrinkToFit()
        return _olua_fun_OpenXLSX_XLAlignment_setShrinkToFit$2(L);
    }

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "openxlsx.XLAlignment")) && (olua_is_bool(L, 2))) {
            // bool setShrinkToFit(@optional bool set)
            return _olua_fun_OpenXLSX_XLAlignment_setShrinkToFit$1(L);
        // }
    }

    luaL_error(L, "method 'OpenXLSX::XLAlignment::setShrinkToFit' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_OpenXLSX_XLAlignment_setTextRotation(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLAlignment *self = nullptr;
        uint16_t arg1 = 0;       /** newRotation */

        olua_to_object(L, 1, &self, "openxlsx.XLAlignment");
        olua_check_integer(L, 2, &arg1);

        // bool setTextRotation(uint16_t newRotation)
        bool ret = self->setTextRotation(arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLAlignment::setTextRotation(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLAlignment_setVertical(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLAlignment *self = nullptr;
        OpenXLSX::XLAlignmentStyle arg1 = (OpenXLSX::XLAlignmentStyle)0;       /** newStyle */

        olua_to_object(L, 1, &self, "openxlsx.XLAlignment");
        olua_check_enum(L, 2, &arg1);

        // bool setVertical(OpenXLSX::XLAlignmentStyle newStyle)
        bool ret = self->setVertical(arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLAlignment::setVertical(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLAlignment_setWrapText$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLAlignment *self = nullptr;
        bool arg1 = false;       /** set */

        olua_to_object(L, 1, &self, "openxlsx.XLAlignment");
        olua_check_bool(L, 2, &arg1);

        // bool setWrapText(@optional bool set)
        bool ret = self->setWrapText(arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLAlignment::setWrapText(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLAlignment_setWrapText$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLAlignment *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLAlignment");

        // bool setWrapText()
        bool ret = self->setWrapText();
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLAlignment::setWrapText(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLAlignment_setWrapText(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 1) {
        // bool setWrapText()
        return _olua_fun_OpenXLSX_XLAlignment_setWrapText$2(L);
    }

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "openxlsx.XLAlignment")) && (olua_is_bool(L, 2))) {
            // bool setWrapText(@optional bool set)
            return _olua_fun_OpenXLSX_XLAlignment_setWrapText$1(L);
        // }
    }

    luaL_error(L, "method 'OpenXLSX::XLAlignment::setWrapText' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_OpenXLSX_XLAlignment_shrinkToFit(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLAlignment *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLAlignment");

        // bool shrinkToFit()
        bool ret = self->shrinkToFit();
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLAlignment::shrinkToFit(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLAlignment_summary(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLAlignment *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLAlignment");

        // std::string summary()
        std::string ret = self->summary();
        int num_ret = olua_push_string(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLAlignment::summary(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLAlignment_textRotation(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLAlignment *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLAlignment");

        // uint16_t textRotation()
        uint16_t ret = self->textRotation();
        int num_ret = olua_push_integer(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLAlignment::textRotation(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLAlignment_vertical(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLAlignment *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLAlignment");

        // OpenXLSX::XLAlignmentStyle vertical()
        OpenXLSX::XLAlignmentStyle ret = self->vertical();
        int num_ret = olua_push_enum(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLAlignment::vertical(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLAlignment_wrapText(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLAlignment *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLAlignment");

        // bool wrapText()
        bool ret = self->wrapText();
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLAlignment::wrapText(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_cls_openxlsx_XLAlignment(lua_State *L)
{
    oluacls_class<OpenXLSX::XLAlignment>(L, "openxlsx.XLAlignment");
    oluacls_func(L, "__gc", _olua_fun_OpenXLSX_XLAlignment___gc);
    oluacls_func(L, "horizontal", _olua_fun_OpenXLSX_XLAlignment_horizontal);
    oluacls_func(L, "indent", _olua_fun_OpenXLSX_XLAlignment_indent);
    oluacls_func(L, "justifyLastLine", _olua_fun_OpenXLSX_XLAlignment_justifyLastLine);
    oluacls_func(L, "new", _olua_fun_OpenXLSX_XLAlignment_new);
    oluacls_func(L, "readingOrder", _olua_fun_OpenXLSX_XLAlignment_readingOrder);
    oluacls_func(L, "relativeIndent", _olua_fun_OpenXLSX_XLAlignment_relativeIndent);
    oluacls_func(L, "setHorizontal", _olua_fun_OpenXLSX_XLAlignment_setHorizontal);
    oluacls_func(L, "setIndent", _olua_fun_OpenXLSX_XLAlignment_setIndent);
    oluacls_func(L, "setJustifyLastLine", _olua_fun_OpenXLSX_XLAlignment_setJustifyLastLine);
    oluacls_func(L, "setReadingOrder", _olua_fun_OpenXLSX_XLAlignment_setReadingOrder);
    oluacls_func(L, "setRelativeIndent", _olua_fun_OpenXLSX_XLAlignment_setRelativeIndent);
    oluacls_func(L, "setShrinkToFit", _olua_fun_OpenXLSX_XLAlignment_setShrinkToFit);
    oluacls_func(L, "setTextRotation", _olua_fun_OpenXLSX_XLAlignment_setTextRotation);
    oluacls_func(L, "setVertical", _olua_fun_OpenXLSX_XLAlignment_setVertical);
    oluacls_func(L, "setWrapText", _olua_fun_OpenXLSX_XLAlignment_setWrapText);
    oluacls_func(L, "shrinkToFit", _olua_fun_OpenXLSX_XLAlignment_shrinkToFit);
    oluacls_func(L, "summary", _olua_fun_OpenXLSX_XLAlignment_summary);
    oluacls_func(L, "textRotation", _olua_fun_OpenXLSX_XLAlignment_textRotation);
    oluacls_func(L, "vertical", _olua_fun_OpenXLSX_XLAlignment_vertical);
    oluacls_func(L, "wrapText", _olua_fun_OpenXLSX_XLAlignment_wrapText);

    return 1;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_openxlsx_XLAlignment(lua_State *L)
{
    olua_require(L, ".olua.module.openxlsx",  _olua_module_openxlsx);
    if (!olua_getclass(L, "openxlsx.XLAlignment")) {
        luaL_error(L, "class not found: OpenXLSX::XLAlignment");
    }
    return 1;
}
OLUA_END_DECLS

static int _olua_cls_openxlsx_XLAlignmentStyle(lua_State *L)
{
    oluacls_class<OpenXLSX::XLAlignmentStyle>(L, "openxlsx.XLAlignmentStyle");
    oluacls_func(L, "__index", olua_indexerror);
    oluacls_func(L, "__newindex", olua_newindexerror);
    oluacls_enum(L, "XLAlignBottom", (lua_Integer)OpenXLSX::XLAlignmentStyle::XLAlignBottom);
    oluacls_enum(L, "XLAlignCenter", (lua_Integer)OpenXLSX::XLAlignmentStyle::XLAlignCenter);
    oluacls_enum(L, "XLAlignCenterContinuous", (lua_Integer)OpenXLSX::XLAlignmentStyle::XLAlignCenterContinuous);
    oluacls_enum(L, "XLAlignDistributed", (lua_Integer)OpenXLSX::XLAlignmentStyle::XLAlignDistributed);
    oluacls_enum(L, "XLAlignFill", (lua_Integer)OpenXLSX::XLAlignmentStyle::XLAlignFill);
    oluacls_enum(L, "XLAlignGeneral", (lua_Integer)OpenXLSX::XLAlignmentStyle::XLAlignGeneral);
    oluacls_enum(L, "XLAlignInvalid", (lua_Integer)OpenXLSX::XLAlignmentStyle::XLAlignInvalid);
    oluacls_enum(L, "XLAlignJustify", (lua_Integer)OpenXLSX::XLAlignmentStyle::XLAlignJustify);
    oluacls_enum(L, "XLAlignLeft", (lua_Integer)OpenXLSX::XLAlignmentStyle::XLAlignLeft);
    oluacls_enum(L, "XLAlignRight", (lua_Integer)OpenXLSX::XLAlignmentStyle::XLAlignRight);
    oluacls_enum(L, "XLAlignTop", (lua_Integer)OpenXLSX::XLAlignmentStyle::XLAlignTop);

    return 1;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_openxlsx_XLAlignmentStyle(lua_State *L)
{
    olua_require(L, ".olua.module.openxlsx",  _olua_module_openxlsx);
    if (!olua_getclass(L, "openxlsx.XLAlignmentStyle")) {
        luaL_error(L, "class not found: OpenXLSX::XLAlignmentStyle");
    }
    return 1;
}
OLUA_END_DECLS

static int _olua_fun_OpenXLSX_XLCellStyles___gc(lua_State *L)
{
    try {
        olua_startinvoke(L);
        auto self = (OpenXLSX::XLCellStyles *)olua_toobj(L, 1, "openxlsx.XLCellStyles");
        olua_postgc(L, self);
        olua_endinvoke(L);
        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCellStyles::__gc(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCellStyles_cellStyleByIndex(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLCellStyles *self = nullptr;
        OpenXLSX::XLStyleIndex arg1 = 0;       /** index */

        olua_to_object(L, 1, &self, "openxlsx.XLCellStyles");
        olua_check_integer(L, 2, &arg1);

        // OpenXLSX::XLCellStyle cellStyleByIndex(OpenXLSX::XLStyleIndex index)
        OpenXLSX::XLCellStyle ret = self->cellStyleByIndex(arg1);
        int num_ret = olua_copy_object(L, ret, "openxlsx.XLCellStyle");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCellStyles::cellStyleByIndex(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCellStyles_count(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLCellStyles *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLCellStyles");

        // size_t count()
        size_t ret = self->count();
        int num_ret = olua_push_integer(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCellStyles::count(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCellStyles_create$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLCellStyles *self = nullptr;
        OpenXLSX::XLCellStyle *arg1;       /** copyFrom */
        std::string arg2;       /** styleEntriesPrefix */

        olua_to_object(L, 1, &self, "openxlsx.XLCellStyles");
        olua_check_object(L, 2, &arg1, "openxlsx.XLCellStyle");
        olua_check_string(L, 3, &arg2);

        // OpenXLSX::XLStyleIndex create(@optional OpenXLSX::XLCellStyle copyFrom, @optional std::string styleEntriesPrefix)
        OpenXLSX::XLStyleIndex ret = self->create(*arg1, arg2);
        int num_ret = olua_push_integer(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCellStyles::create(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCellStyles_create$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLCellStyles *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLCellStyles");

        // OpenXLSX::XLStyleIndex create()
        OpenXLSX::XLStyleIndex ret = self->create();
        int num_ret = olua_push_integer(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCellStyles::create(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCellStyles_create$3(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLCellStyles *self = nullptr;
        OpenXLSX::XLCellStyle *arg1;       /** copyFrom */

        olua_to_object(L, 1, &self, "openxlsx.XLCellStyles");
        olua_check_object(L, 2, &arg1, "openxlsx.XLCellStyle");

        // OpenXLSX::XLStyleIndex create(@optional OpenXLSX::XLCellStyle copyFrom)
        OpenXLSX::XLStyleIndex ret = self->create(*arg1);
        int num_ret = olua_push_integer(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCellStyles::create(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCellStyles_create(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 1) {
        // OpenXLSX::XLStyleIndex create()
        return _olua_fun_OpenXLSX_XLCellStyles_create$2(L);
    }

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "openxlsx.XLCellStyles")) && (olua_is_object(L, 2, "openxlsx.XLCellStyle"))) {
            // OpenXLSX::XLStyleIndex create(@optional OpenXLSX::XLCellStyle copyFrom)
            return _olua_fun_OpenXLSX_XLCellStyles_create$3(L);
        // }
    }

    if (num_args == 3) {
        // if ((olua_is_object(L, 1, "openxlsx.XLCellStyles")) && (olua_is_object(L, 2, "openxlsx.XLCellStyle")) && (olua_is_string(L, 3))) {
            // OpenXLSX::XLStyleIndex create(@optional OpenXLSX::XLCellStyle copyFrom, @optional std::string styleEntriesPrefix)
            return _olua_fun_OpenXLSX_XLCellStyles_create$1(L);
        // }
    }

    luaL_error(L, "method 'OpenXLSX::XLCellStyles::create' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_OpenXLSX_XLCellStyles_new(lua_State *L)
{
    try {
        olua_startinvoke(L);

        // OpenXLSX::XLCellStyles()
        OpenXLSX::XLCellStyles *ret = new OpenXLSX::XLCellStyles();
        int num_ret = olua_push_object(L, ret, "openxlsx.XLCellStyles");
        olua_postnew(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCellStyles::new(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_cls_openxlsx_XLCellStyles(lua_State *L)
{
    oluacls_class<OpenXLSX::XLCellStyles>(L, "openxlsx.XLCellStyles");
    oluacls_func(L, "__gc", _olua_fun_OpenXLSX_XLCellStyles___gc);
    oluacls_func(L, "cellStyleByIndex", _olua_fun_OpenXLSX_XLCellStyles_cellStyleByIndex);
    oluacls_func(L, "count", _olua_fun_OpenXLSX_XLCellStyles_count);
    oluacls_func(L, "create", _olua_fun_OpenXLSX_XLCellStyles_create);
    oluacls_func(L, "new", _olua_fun_OpenXLSX_XLCellStyles_new);

    return 1;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_openxlsx_XLCellStyles(lua_State *L)
{
    olua_require(L, ".olua.module.openxlsx",  _olua_module_openxlsx);
    if (!olua_getclass(L, "openxlsx.XLCellStyles")) {
        luaL_error(L, "class not found: OpenXLSX::XLCellStyles");
    }
    return 1;
}
OLUA_END_DECLS

static int _olua_fun_OpenXLSX_XLCellStyle___gc(lua_State *L)
{
    try {
        olua_startinvoke(L);
        auto self = (OpenXLSX::XLCellStyle *)olua_toobj(L, 1, "openxlsx.XLCellStyle");
        olua_postgc(L, self);
        olua_endinvoke(L);
        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCellStyle::__gc(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCellStyle_builtinId(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLCellStyle *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLCellStyle");

        // uint32_t builtinId()
        uint32_t ret = self->builtinId();
        int num_ret = olua_push_integer(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCellStyle::builtinId(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCellStyle_customBuiltin(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLCellStyle *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLCellStyle");

        // bool customBuiltin()
        bool ret = self->customBuiltin();
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCellStyle::customBuiltin(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCellStyle_empty(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLCellStyle *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLCellStyle");

        // bool empty()
        bool ret = self->empty();
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCellStyle::empty(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCellStyle_extLst(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLCellStyle *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLCellStyle");

        // OpenXLSX::XLUnsupportedElement extLst()
        OpenXLSX::XLUnsupportedElement ret = self->extLst();
        int num_ret = olua_copy_object(L, ret, "openxlsx.XLUnsupportedElement");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCellStyle::extLst(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCellStyle_hidden(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLCellStyle *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLCellStyle");

        // bool hidden()
        bool ret = self->hidden();
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCellStyle::hidden(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCellStyle_name(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLCellStyle *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLCellStyle");

        // std::string name()
        std::string ret = self->name();
        int num_ret = olua_push_string(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCellStyle::name(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCellStyle_new(lua_State *L)
{
    try {
        olua_startinvoke(L);

        // OpenXLSX::XLCellStyle()
        OpenXLSX::XLCellStyle *ret = new OpenXLSX::XLCellStyle();
        int num_ret = olua_push_object(L, ret, "openxlsx.XLCellStyle");
        olua_postnew(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCellStyle::new(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCellStyle_outlineStyle(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLCellStyle *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLCellStyle");

        // uint32_t outlineStyle()
        uint32_t ret = self->outlineStyle();
        int num_ret = olua_push_integer(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCellStyle::outlineStyle(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCellStyle_setBuiltinId(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLCellStyle *self = nullptr;
        uint32_t arg1 = 0;       /** newBuiltinId */

        olua_to_object(L, 1, &self, "openxlsx.XLCellStyle");
        olua_check_integer(L, 2, &arg1);

        // bool setBuiltinId(uint32_t newBuiltinId)
        bool ret = self->setBuiltinId(arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCellStyle::setBuiltinId(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCellStyle_setCustomBuiltin$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLCellStyle *self = nullptr;
        bool arg1 = false;       /** set */

        olua_to_object(L, 1, &self, "openxlsx.XLCellStyle");
        olua_check_bool(L, 2, &arg1);

        // bool setCustomBuiltin(@optional bool set)
        bool ret = self->setCustomBuiltin(arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCellStyle::setCustomBuiltin(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCellStyle_setCustomBuiltin$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLCellStyle *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLCellStyle");

        // bool setCustomBuiltin()
        bool ret = self->setCustomBuiltin();
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCellStyle::setCustomBuiltin(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCellStyle_setCustomBuiltin(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 1) {
        // bool setCustomBuiltin()
        return _olua_fun_OpenXLSX_XLCellStyle_setCustomBuiltin$2(L);
    }

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "openxlsx.XLCellStyle")) && (olua_is_bool(L, 2))) {
            // bool setCustomBuiltin(@optional bool set)
            return _olua_fun_OpenXLSX_XLCellStyle_setCustomBuiltin$1(L);
        // }
    }

    luaL_error(L, "method 'OpenXLSX::XLCellStyle::setCustomBuiltin' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_OpenXLSX_XLCellStyle_setExtLst(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLCellStyle *self = nullptr;
        OpenXLSX::XLUnsupportedElement *arg1;       /** newExtLst */

        olua_to_object(L, 1, &self, "openxlsx.XLCellStyle");
        olua_check_object(L, 2, &arg1, "openxlsx.XLUnsupportedElement");

        // bool setExtLst(const OpenXLSX::XLUnsupportedElement &newExtLst)
        bool ret = self->setExtLst(*arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCellStyle::setExtLst(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCellStyle_setHidden$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLCellStyle *self = nullptr;
        bool arg1 = false;       /** set */

        olua_to_object(L, 1, &self, "openxlsx.XLCellStyle");
        olua_check_bool(L, 2, &arg1);

        // bool setHidden(@optional bool set)
        bool ret = self->setHidden(arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCellStyle::setHidden(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCellStyle_setHidden$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLCellStyle *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLCellStyle");

        // bool setHidden()
        bool ret = self->setHidden();
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCellStyle::setHidden(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCellStyle_setHidden(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 1) {
        // bool setHidden()
        return _olua_fun_OpenXLSX_XLCellStyle_setHidden$2(L);
    }

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "openxlsx.XLCellStyle")) && (olua_is_bool(L, 2))) {
            // bool setHidden(@optional bool set)
            return _olua_fun_OpenXLSX_XLCellStyle_setHidden$1(L);
        // }
    }

    luaL_error(L, "method 'OpenXLSX::XLCellStyle::setHidden' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_OpenXLSX_XLCellStyle_setName(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLCellStyle *self = nullptr;
        std::string arg1;       /** newName */

        olua_to_object(L, 1, &self, "openxlsx.XLCellStyle");
        olua_check_string(L, 2, &arg1);

        // bool setName(std::string newName)
        bool ret = self->setName(arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCellStyle::setName(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCellStyle_setOutlineStyle(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLCellStyle *self = nullptr;
        uint32_t arg1 = 0;       /** newOutlineStyle */

        olua_to_object(L, 1, &self, "openxlsx.XLCellStyle");
        olua_check_integer(L, 2, &arg1);

        // bool setOutlineStyle(uint32_t newOutlineStyle)
        bool ret = self->setOutlineStyle(arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCellStyle::setOutlineStyle(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCellStyle_setXfId(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLCellStyle *self = nullptr;
        OpenXLSX::XLStyleIndex arg1 = 0;       /** newXfId */

        olua_to_object(L, 1, &self, "openxlsx.XLCellStyle");
        olua_check_integer(L, 2, &arg1);

        // bool setXfId(OpenXLSX::XLStyleIndex newXfId)
        bool ret = self->setXfId(arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCellStyle::setXfId(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCellStyle_summary(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLCellStyle *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLCellStyle");

        // std::string summary()
        std::string ret = self->summary();
        int num_ret = olua_push_string(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCellStyle::summary(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLCellStyle_xfId(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLCellStyle *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLCellStyle");

        // OpenXLSX::XLStyleIndex xfId()
        OpenXLSX::XLStyleIndex ret = self->xfId();
        int num_ret = olua_push_integer(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLCellStyle::xfId(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_cls_openxlsx_XLCellStyle(lua_State *L)
{
    oluacls_class<OpenXLSX::XLCellStyle>(L, "openxlsx.XLCellStyle");
    oluacls_func(L, "__gc", _olua_fun_OpenXLSX_XLCellStyle___gc);
    oluacls_func(L, "builtinId", _olua_fun_OpenXLSX_XLCellStyle_builtinId);
    oluacls_func(L, "customBuiltin", _olua_fun_OpenXLSX_XLCellStyle_customBuiltin);
    oluacls_func(L, "empty", _olua_fun_OpenXLSX_XLCellStyle_empty);
    oluacls_func(L, "extLst", _olua_fun_OpenXLSX_XLCellStyle_extLst);
    oluacls_func(L, "hidden", _olua_fun_OpenXLSX_XLCellStyle_hidden);
    oluacls_func(L, "name", _olua_fun_OpenXLSX_XLCellStyle_name);
    oluacls_func(L, "new", _olua_fun_OpenXLSX_XLCellStyle_new);
    oluacls_func(L, "outlineStyle", _olua_fun_OpenXLSX_XLCellStyle_outlineStyle);
    oluacls_func(L, "setBuiltinId", _olua_fun_OpenXLSX_XLCellStyle_setBuiltinId);
    oluacls_func(L, "setCustomBuiltin", _olua_fun_OpenXLSX_XLCellStyle_setCustomBuiltin);
    oluacls_func(L, "setExtLst", _olua_fun_OpenXLSX_XLCellStyle_setExtLst);
    oluacls_func(L, "setHidden", _olua_fun_OpenXLSX_XLCellStyle_setHidden);
    oluacls_func(L, "setName", _olua_fun_OpenXLSX_XLCellStyle_setName);
    oluacls_func(L, "setOutlineStyle", _olua_fun_OpenXLSX_XLCellStyle_setOutlineStyle);
    oluacls_func(L, "setXfId", _olua_fun_OpenXLSX_XLCellStyle_setXfId);
    oluacls_func(L, "summary", _olua_fun_OpenXLSX_XLCellStyle_summary);
    oluacls_func(L, "xfId", _olua_fun_OpenXLSX_XLCellStyle_xfId);

    return 1;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_openxlsx_XLCellStyle(lua_State *L)
{
    olua_require(L, ".olua.module.openxlsx",  _olua_module_openxlsx);
    if (!olua_getclass(L, "openxlsx.XLCellStyle")) {
        luaL_error(L, "class not found: OpenXLSX::XLCellStyle");
    }
    return 1;
}
OLUA_END_DECLS

static int _olua_fun_OpenXLSX_XLFills___gc(lua_State *L)
{
    try {
        olua_startinvoke(L);
        auto self = (OpenXLSX::XLFills *)olua_toobj(L, 1, "openxlsx.XLFills");
        olua_postgc(L, self);
        olua_endinvoke(L);
        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLFills::__gc(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLFills_count(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLFills *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLFills");

        // size_t count()
        size_t ret = self->count();
        int num_ret = olua_push_integer(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLFills::count(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLFills_create$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLFills *self = nullptr;
        OpenXLSX::XLFill *arg1;       /** copyFrom */
        std::string arg2;       /** styleEntriesPrefix */

        olua_to_object(L, 1, &self, "openxlsx.XLFills");
        olua_check_object(L, 2, &arg1, "openxlsx.XLFill");
        olua_check_string(L, 3, &arg2);

        // OpenXLSX::XLStyleIndex create(@optional OpenXLSX::XLFill copyFrom, @optional std::string styleEntriesPrefix)
        OpenXLSX::XLStyleIndex ret = self->create(*arg1, arg2);
        int num_ret = olua_push_integer(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLFills::create(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLFills_create$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLFills *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLFills");

        // OpenXLSX::XLStyleIndex create()
        OpenXLSX::XLStyleIndex ret = self->create();
        int num_ret = olua_push_integer(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLFills::create(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLFills_create$3(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLFills *self = nullptr;
        OpenXLSX::XLFill *arg1;       /** copyFrom */

        olua_to_object(L, 1, &self, "openxlsx.XLFills");
        olua_check_object(L, 2, &arg1, "openxlsx.XLFill");

        // OpenXLSX::XLStyleIndex create(@optional OpenXLSX::XLFill copyFrom)
        OpenXLSX::XLStyleIndex ret = self->create(*arg1);
        int num_ret = olua_push_integer(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLFills::create(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLFills_create(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 1) {
        // OpenXLSX::XLStyleIndex create()
        return _olua_fun_OpenXLSX_XLFills_create$2(L);
    }

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "openxlsx.XLFills")) && (olua_is_object(L, 2, "openxlsx.XLFill"))) {
            // OpenXLSX::XLStyleIndex create(@optional OpenXLSX::XLFill copyFrom)
            return _olua_fun_OpenXLSX_XLFills_create$3(L);
        // }
    }

    if (num_args == 3) {
        // if ((olua_is_object(L, 1, "openxlsx.XLFills")) && (olua_is_object(L, 2, "openxlsx.XLFill")) && (olua_is_string(L, 3))) {
            // OpenXLSX::XLStyleIndex create(@optional OpenXLSX::XLFill copyFrom, @optional std::string styleEntriesPrefix)
            return _olua_fun_OpenXLSX_XLFills_create$1(L);
        // }
    }

    luaL_error(L, "method 'OpenXLSX::XLFills::create' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_OpenXLSX_XLFills_fillByIndex(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLFills *self = nullptr;
        OpenXLSX::XLStyleIndex arg1 = 0;       /** index */

        olua_to_object(L, 1, &self, "openxlsx.XLFills");
        olua_check_integer(L, 2, &arg1);

        // OpenXLSX::XLFill fillByIndex(OpenXLSX::XLStyleIndex index)
        OpenXLSX::XLFill ret = self->fillByIndex(arg1);
        int num_ret = olua_copy_object(L, ret, "openxlsx.XLFill");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLFills::fillByIndex(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLFills_new(lua_State *L)
{
    try {
        olua_startinvoke(L);

        // OpenXLSX::XLFills()
        OpenXLSX::XLFills *ret = new OpenXLSX::XLFills();
        int num_ret = olua_push_object(L, ret, "openxlsx.XLFills");
        olua_postnew(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLFills::new(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_cls_openxlsx_XLFills(lua_State *L)
{
    oluacls_class<OpenXLSX::XLFills>(L, "openxlsx.XLFills");
    oluacls_func(L, "__gc", _olua_fun_OpenXLSX_XLFills___gc);
    oluacls_func(L, "count", _olua_fun_OpenXLSX_XLFills_count);
    oluacls_func(L, "create", _olua_fun_OpenXLSX_XLFills_create);
    oluacls_func(L, "fillByIndex", _olua_fun_OpenXLSX_XLFills_fillByIndex);
    oluacls_func(L, "new", _olua_fun_OpenXLSX_XLFills_new);

    return 1;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_openxlsx_XLFills(lua_State *L)
{
    olua_require(L, ".olua.module.openxlsx",  _olua_module_openxlsx);
    if (!olua_getclass(L, "openxlsx.XLFills")) {
        luaL_error(L, "class not found: OpenXLSX::XLFills");
    }
    return 1;
}
OLUA_END_DECLS

static int _olua_fun_OpenXLSX_XLFill___gc(lua_State *L)
{
    try {
        olua_startinvoke(L);
        auto self = (OpenXLSX::XLFill *)olua_toobj(L, 1, "openxlsx.XLFill");
        olua_postgc(L, self);
        olua_endinvoke(L);
        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLFill::__gc(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLFill_backgroundColor(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLFill *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLFill");

        // OpenXLSX::XLColor backgroundColor()
        OpenXLSX::XLColor ret = self->backgroundColor();
        int num_ret = olua_copy_object(L, ret, "openxlsx.XLColor");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLFill::backgroundColor(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLFill_bottom(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLFill *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLFill");

        // double bottom()
        double ret = self->bottom();
        int num_ret = olua_push_number(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLFill::bottom(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLFill_color(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLFill *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLFill");

        // OpenXLSX::XLColor color()
        OpenXLSX::XLColor ret = self->color();
        int num_ret = olua_copy_object(L, ret, "openxlsx.XLColor");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLFill::color(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLFill_degree(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLFill *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLFill");

        // double degree()
        double ret = self->degree();
        int num_ret = olua_push_number(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLFill::degree(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLFill_fillType(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLFill *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLFill");

        // OpenXLSX::XLFillType fillType()
        OpenXLSX::XLFillType ret = self->fillType();
        int num_ret = olua_push_enum(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLFill::fillType(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLFill_gradientType(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLFill *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLFill");

        // OpenXLSX::XLGradientType gradientType()
        OpenXLSX::XLGradientType ret = self->gradientType();
        int num_ret = olua_push_enum(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLFill::gradientType(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLFill_left(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLFill *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLFill");

        // double left()
        double ret = self->left();
        int num_ret = olua_push_number(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLFill::left(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLFill_new(lua_State *L)
{
    try {
        olua_startinvoke(L);

        // OpenXLSX::XLFill()
        OpenXLSX::XLFill *ret = new OpenXLSX::XLFill();
        int num_ret = olua_push_object(L, ret, "openxlsx.XLFill");
        olua_postnew(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLFill::new(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLFill_patternType(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLFill *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLFill");

        // OpenXLSX::XLPatternType patternType()
        OpenXLSX::XLPatternType ret = self->patternType();
        int num_ret = olua_push_enum(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLFill::patternType(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLFill_right(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLFill *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLFill");

        // double right()
        double ret = self->right();
        int num_ret = olua_push_number(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLFill::right(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLFill_setBackgroundColor(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLFill *self = nullptr;
        OpenXLSX::XLColor *arg1;       /** newBgColor */

        olua_to_object(L, 1, &self, "openxlsx.XLFill");
        olua_check_object(L, 2, &arg1, "openxlsx.XLColor");

        // bool setBackgroundColor(OpenXLSX::XLColor newBgColor)
        bool ret = self->setBackgroundColor(*arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLFill::setBackgroundColor(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLFill_setBottom(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLFill *self = nullptr;
        double arg1 = 0;       /** newBottom */

        olua_to_object(L, 1, &self, "openxlsx.XLFill");
        olua_check_number(L, 2, &arg1);

        // bool setBottom(double newBottom)
        bool ret = self->setBottom(arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLFill::setBottom(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLFill_setColor(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLFill *self = nullptr;
        OpenXLSX::XLColor *arg1;       /** newColor */

        olua_to_object(L, 1, &self, "openxlsx.XLFill");
        olua_check_object(L, 2, &arg1, "openxlsx.XLColor");

        // bool setColor(OpenXLSX::XLColor newColor)
        bool ret = self->setColor(*arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLFill::setColor(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLFill_setDegree(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLFill *self = nullptr;
        double arg1 = 0;       /** newDegree */

        olua_to_object(L, 1, &self, "openxlsx.XLFill");
        olua_check_number(L, 2, &arg1);

        // bool setDegree(double newDegree)
        bool ret = self->setDegree(arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLFill::setDegree(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLFill_setFillType$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLFill *self = nullptr;
        OpenXLSX::XLFillType arg1 = (OpenXLSX::XLFillType)0;       /** newFillType */
        bool arg2 = false;       /** force */

        olua_to_object(L, 1, &self, "openxlsx.XLFill");
        olua_check_enum(L, 2, &arg1);
        olua_check_bool(L, 3, &arg2);

        // bool setFillType(OpenXLSX::XLFillType newFillType, @optional bool force)
        bool ret = self->setFillType(arg1, arg2);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLFill::setFillType(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLFill_setFillType$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLFill *self = nullptr;
        OpenXLSX::XLFillType arg1 = (OpenXLSX::XLFillType)0;       /** newFillType */

        olua_to_object(L, 1, &self, "openxlsx.XLFill");
        olua_check_enum(L, 2, &arg1);

        // bool setFillType(OpenXLSX::XLFillType newFillType)
        bool ret = self->setFillType(arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLFill::setFillType(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLFill_setFillType(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "openxlsx.XLFill")) && (olua_is_enum(L, 2))) {
            // bool setFillType(OpenXLSX::XLFillType newFillType)
            return _olua_fun_OpenXLSX_XLFill_setFillType$2(L);
        // }
    }

    if (num_args == 3) {
        // if ((olua_is_object(L, 1, "openxlsx.XLFill")) && (olua_is_enum(L, 2)) && (olua_is_bool(L, 3))) {
            // bool setFillType(OpenXLSX::XLFillType newFillType, @optional bool force)
            return _olua_fun_OpenXLSX_XLFill_setFillType$1(L);
        // }
    }

    luaL_error(L, "method 'OpenXLSX::XLFill::setFillType' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_OpenXLSX_XLFill_setGradientType(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLFill *self = nullptr;
        OpenXLSX::XLGradientType arg1 = (OpenXLSX::XLGradientType)0;       /** newType */

        olua_to_object(L, 1, &self, "openxlsx.XLFill");
        olua_check_enum(L, 2, &arg1);

        // bool setGradientType(OpenXLSX::XLGradientType newType)
        bool ret = self->setGradientType(arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLFill::setGradientType(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLFill_setLeft(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLFill *self = nullptr;
        double arg1 = 0;       /** newLeft */

        olua_to_object(L, 1, &self, "openxlsx.XLFill");
        olua_check_number(L, 2, &arg1);

        // bool setLeft(double newLeft)
        bool ret = self->setLeft(arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLFill::setLeft(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLFill_setPatternType(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLFill *self = nullptr;
        OpenXLSX::XLPatternType arg1 = (OpenXLSX::XLPatternType)0;       /** newPatternType */

        olua_to_object(L, 1, &self, "openxlsx.XLFill");
        olua_check_enum(L, 2, &arg1);

        // bool setPatternType(OpenXLSX::XLPatternType newPatternType)
        bool ret = self->setPatternType(arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLFill::setPatternType(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLFill_setRight(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLFill *self = nullptr;
        double arg1 = 0;       /** newRight */

        olua_to_object(L, 1, &self, "openxlsx.XLFill");
        olua_check_number(L, 2, &arg1);

        // bool setRight(double newRight)
        bool ret = self->setRight(arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLFill::setRight(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLFill_setTop(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLFill *self = nullptr;
        double arg1 = 0;       /** newTop */

        olua_to_object(L, 1, &self, "openxlsx.XLFill");
        olua_check_number(L, 2, &arg1);

        // bool setTop(double newTop)
        bool ret = self->setTop(arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLFill::setTop(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLFill_stops(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLFill *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLFill");

        // OpenXLSX::XLGradientStops stops()
        OpenXLSX::XLGradientStops ret = self->stops();
        int num_ret = olua_copy_object(L, ret, "openxlsx.XLGradientStops");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLFill::stops(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLFill_summary(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLFill *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLFill");

        // std::string summary()
        std::string ret = self->summary();
        int num_ret = olua_push_string(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLFill::summary(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLFill_top(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLFill *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLFill");

        // double top()
        double ret = self->top();
        int num_ret = olua_push_number(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLFill::top(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_cls_openxlsx_XLFill(lua_State *L)
{
    oluacls_class<OpenXLSX::XLFill>(L, "openxlsx.XLFill");
    oluacls_func(L, "__gc", _olua_fun_OpenXLSX_XLFill___gc);
    oluacls_func(L, "backgroundColor", _olua_fun_OpenXLSX_XLFill_backgroundColor);
    oluacls_func(L, "bottom", _olua_fun_OpenXLSX_XLFill_bottom);
    oluacls_func(L, "color", _olua_fun_OpenXLSX_XLFill_color);
    oluacls_func(L, "degree", _olua_fun_OpenXLSX_XLFill_degree);
    oluacls_func(L, "fillType", _olua_fun_OpenXLSX_XLFill_fillType);
    oluacls_func(L, "gradientType", _olua_fun_OpenXLSX_XLFill_gradientType);
    oluacls_func(L, "left", _olua_fun_OpenXLSX_XLFill_left);
    oluacls_func(L, "new", _olua_fun_OpenXLSX_XLFill_new);
    oluacls_func(L, "patternType", _olua_fun_OpenXLSX_XLFill_patternType);
    oluacls_func(L, "right", _olua_fun_OpenXLSX_XLFill_right);
    oluacls_func(L, "setBackgroundColor", _olua_fun_OpenXLSX_XLFill_setBackgroundColor);
    oluacls_func(L, "setBottom", _olua_fun_OpenXLSX_XLFill_setBottom);
    oluacls_func(L, "setColor", _olua_fun_OpenXLSX_XLFill_setColor);
    oluacls_func(L, "setDegree", _olua_fun_OpenXLSX_XLFill_setDegree);
    oluacls_func(L, "setFillType", _olua_fun_OpenXLSX_XLFill_setFillType);
    oluacls_func(L, "setGradientType", _olua_fun_OpenXLSX_XLFill_setGradientType);
    oluacls_func(L, "setLeft", _olua_fun_OpenXLSX_XLFill_setLeft);
    oluacls_func(L, "setPatternType", _olua_fun_OpenXLSX_XLFill_setPatternType);
    oluacls_func(L, "setRight", _olua_fun_OpenXLSX_XLFill_setRight);
    oluacls_func(L, "setTop", _olua_fun_OpenXLSX_XLFill_setTop);
    oluacls_func(L, "stops", _olua_fun_OpenXLSX_XLFill_stops);
    oluacls_func(L, "summary", _olua_fun_OpenXLSX_XLFill_summary);
    oluacls_func(L, "top", _olua_fun_OpenXLSX_XLFill_top);

    return 1;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_openxlsx_XLFill(lua_State *L)
{
    olua_require(L, ".olua.module.openxlsx",  _olua_module_openxlsx);
    if (!olua_getclass(L, "openxlsx.XLFill")) {
        luaL_error(L, "class not found: OpenXLSX::XLFill");
    }
    return 1;
}
OLUA_END_DECLS

static int _olua_cls_openxlsx_XLFillType(lua_State *L)
{
    oluacls_class<OpenXLSX::XLFillType>(L, "openxlsx.XLFillType");
    oluacls_func(L, "__index", olua_indexerror);
    oluacls_func(L, "__newindex", olua_newindexerror);
    oluacls_enum(L, "XLFillTypeInvalid", (lua_Integer)OpenXLSX::XLFillType::XLFillTypeInvalid);
    oluacls_enum(L, "XLGradientFill", (lua_Integer)OpenXLSX::XLFillType::XLGradientFill);
    oluacls_enum(L, "XLPatternFill", (lua_Integer)OpenXLSX::XLFillType::XLPatternFill);

    return 1;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_openxlsx_XLFillType(lua_State *L)
{
    olua_require(L, ".olua.module.openxlsx",  _olua_module_openxlsx);
    if (!olua_getclass(L, "openxlsx.XLFillType")) {
        luaL_error(L, "class not found: OpenXLSX::XLFillType");
    }
    return 1;
}
OLUA_END_DECLS

static int _olua_fun_OpenXLSX_XLFonts___gc(lua_State *L)
{
    try {
        olua_startinvoke(L);
        auto self = (OpenXLSX::XLFonts *)olua_toobj(L, 1, "openxlsx.XLFonts");
        olua_postgc(L, self);
        olua_endinvoke(L);
        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLFonts::__gc(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLFonts_count(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLFonts *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLFonts");

        // size_t count()
        size_t ret = self->count();
        int num_ret = olua_push_integer(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLFonts::count(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLFonts_create$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLFonts *self = nullptr;
        OpenXLSX::XLFont *arg1;       /** copyFrom */
        std::string arg2;       /** styleEntriesPrefix */

        olua_to_object(L, 1, &self, "openxlsx.XLFonts");
        olua_check_object(L, 2, &arg1, "openxlsx.XLFont");
        olua_check_string(L, 3, &arg2);

        // OpenXLSX::XLStyleIndex create(@optional OpenXLSX::XLFont copyFrom, @optional std::string styleEntriesPrefix)
        OpenXLSX::XLStyleIndex ret = self->create(*arg1, arg2);
        int num_ret = olua_push_integer(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLFonts::create(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLFonts_create$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLFonts *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLFonts");

        // OpenXLSX::XLStyleIndex create()
        OpenXLSX::XLStyleIndex ret = self->create();
        int num_ret = olua_push_integer(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLFonts::create(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLFonts_create$3(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLFonts *self = nullptr;
        OpenXLSX::XLFont *arg1;       /** copyFrom */

        olua_to_object(L, 1, &self, "openxlsx.XLFonts");
        olua_check_object(L, 2, &arg1, "openxlsx.XLFont");

        // OpenXLSX::XLStyleIndex create(@optional OpenXLSX::XLFont copyFrom)
        OpenXLSX::XLStyleIndex ret = self->create(*arg1);
        int num_ret = olua_push_integer(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLFonts::create(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLFonts_create(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 1) {
        // OpenXLSX::XLStyleIndex create()
        return _olua_fun_OpenXLSX_XLFonts_create$2(L);
    }

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "openxlsx.XLFonts")) && (olua_is_object(L, 2, "openxlsx.XLFont"))) {
            // OpenXLSX::XLStyleIndex create(@optional OpenXLSX::XLFont copyFrom)
            return _olua_fun_OpenXLSX_XLFonts_create$3(L);
        // }
    }

    if (num_args == 3) {
        // if ((olua_is_object(L, 1, "openxlsx.XLFonts")) && (olua_is_object(L, 2, "openxlsx.XLFont")) && (olua_is_string(L, 3))) {
            // OpenXLSX::XLStyleIndex create(@optional OpenXLSX::XLFont copyFrom, @optional std::string styleEntriesPrefix)
            return _olua_fun_OpenXLSX_XLFonts_create$1(L);
        // }
    }

    luaL_error(L, "method 'OpenXLSX::XLFonts::create' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_OpenXLSX_XLFonts_fontByIndex(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLFonts *self = nullptr;
        OpenXLSX::XLStyleIndex arg1 = 0;       /** index */

        olua_to_object(L, 1, &self, "openxlsx.XLFonts");
        olua_check_integer(L, 2, &arg1);

        // OpenXLSX::XLFont fontByIndex(OpenXLSX::XLStyleIndex index)
        OpenXLSX::XLFont ret = self->fontByIndex(arg1);
        int num_ret = olua_copy_object(L, ret, "openxlsx.XLFont");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLFonts::fontByIndex(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLFonts_new(lua_State *L)
{
    try {
        olua_startinvoke(L);

        // OpenXLSX::XLFonts()
        OpenXLSX::XLFonts *ret = new OpenXLSX::XLFonts();
        int num_ret = olua_push_object(L, ret, "openxlsx.XLFonts");
        olua_postnew(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLFonts::new(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_cls_openxlsx_XLFonts(lua_State *L)
{
    oluacls_class<OpenXLSX::XLFonts>(L, "openxlsx.XLFonts");
    oluacls_func(L, "__gc", _olua_fun_OpenXLSX_XLFonts___gc);
    oluacls_func(L, "count", _olua_fun_OpenXLSX_XLFonts_count);
    oluacls_func(L, "create", _olua_fun_OpenXLSX_XLFonts_create);
    oluacls_func(L, "fontByIndex", _olua_fun_OpenXLSX_XLFonts_fontByIndex);
    oluacls_func(L, "new", _olua_fun_OpenXLSX_XLFonts_new);

    return 1;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_openxlsx_XLFonts(lua_State *L)
{
    olua_require(L, ".olua.module.openxlsx",  _olua_module_openxlsx);
    if (!olua_getclass(L, "openxlsx.XLFonts")) {
        luaL_error(L, "class not found: OpenXLSX::XLFonts");
    }
    return 1;
}
OLUA_END_DECLS

static int _olua_fun_OpenXLSX_XLFont___gc(lua_State *L)
{
    try {
        olua_startinvoke(L);
        auto self = (OpenXLSX::XLFont *)olua_toobj(L, 1, "openxlsx.XLFont");
        olua_postgc(L, self);
        olua_endinvoke(L);
        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLFont::__gc(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLFont_bold(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLFont *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLFont");

        // bool bold()
        bool ret = self->bold();
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLFont::bold(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLFont_condense(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLFont *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLFont");

        // bool condense()
        bool ret = self->condense();
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLFont::condense(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLFont_extend(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLFont *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLFont");

        // bool extend()
        bool ret = self->extend();
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLFont::extend(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLFont_fontCharset(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLFont *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLFont");

        // size_t fontCharset()
        size_t ret = self->fontCharset();
        int num_ret = olua_push_integer(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLFont::fontCharset(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLFont_fontColor(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLFont *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLFont");

        // OpenXLSX::XLColor fontColor()
        OpenXLSX::XLColor ret = self->fontColor();
        int num_ret = olua_copy_object(L, ret, "openxlsx.XLColor");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLFont::fontColor(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLFont_fontFamily(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLFont *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLFont");

        // size_t fontFamily()
        size_t ret = self->fontFamily();
        int num_ret = olua_push_integer(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLFont::fontFamily(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLFont_fontName(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLFont *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLFont");

        // std::string fontName()
        std::string ret = self->fontName();
        int num_ret = olua_push_string(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLFont::fontName(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLFont_fontSize(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLFont *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLFont");

        // size_t fontSize()
        size_t ret = self->fontSize();
        int num_ret = olua_push_integer(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLFont::fontSize(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLFont_italic(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLFont *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLFont");

        // bool italic()
        bool ret = self->italic();
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLFont::italic(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLFont_new(lua_State *L)
{
    try {
        olua_startinvoke(L);

        // OpenXLSX::XLFont()
        OpenXLSX::XLFont *ret = new OpenXLSX::XLFont();
        int num_ret = olua_push_object(L, ret, "openxlsx.XLFont");
        olua_postnew(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLFont::new(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLFont_outline(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLFont *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLFont");

        // bool outline()
        bool ret = self->outline();
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLFont::outline(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLFont_scheme(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLFont *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLFont");

        // OpenXLSX::XLFontSchemeStyle scheme()
        OpenXLSX::XLFontSchemeStyle ret = self->scheme();
        int num_ret = olua_push_enum(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLFont::scheme(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLFont_setBold$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLFont *self = nullptr;
        bool arg1 = false;       /** set */

        olua_to_object(L, 1, &self, "openxlsx.XLFont");
        olua_check_bool(L, 2, &arg1);

        // bool setBold(@optional bool set)
        bool ret = self->setBold(arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLFont::setBold(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLFont_setBold$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLFont *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLFont");

        // bool setBold()
        bool ret = self->setBold();
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLFont::setBold(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLFont_setBold(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 1) {
        // bool setBold()
        return _olua_fun_OpenXLSX_XLFont_setBold$2(L);
    }

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "openxlsx.XLFont")) && (olua_is_bool(L, 2))) {
            // bool setBold(@optional bool set)
            return _olua_fun_OpenXLSX_XLFont_setBold$1(L);
        // }
    }

    luaL_error(L, "method 'OpenXLSX::XLFont::setBold' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_OpenXLSX_XLFont_setCondense$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLFont *self = nullptr;
        bool arg1 = false;       /** set */

        olua_to_object(L, 1, &self, "openxlsx.XLFont");
        olua_check_bool(L, 2, &arg1);

        // bool setCondense(@optional bool set)
        bool ret = self->setCondense(arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLFont::setCondense(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLFont_setCondense$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLFont *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLFont");

        // bool setCondense()
        bool ret = self->setCondense();
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLFont::setCondense(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLFont_setCondense(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 1) {
        // bool setCondense()
        return _olua_fun_OpenXLSX_XLFont_setCondense$2(L);
    }

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "openxlsx.XLFont")) && (olua_is_bool(L, 2))) {
            // bool setCondense(@optional bool set)
            return _olua_fun_OpenXLSX_XLFont_setCondense$1(L);
        // }
    }

    luaL_error(L, "method 'OpenXLSX::XLFont::setCondense' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_OpenXLSX_XLFont_setExtend$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLFont *self = nullptr;
        bool arg1 = false;       /** set */

        olua_to_object(L, 1, &self, "openxlsx.XLFont");
        olua_check_bool(L, 2, &arg1);

        // bool setExtend(@optional bool set)
        bool ret = self->setExtend(arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLFont::setExtend(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLFont_setExtend$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLFont *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLFont");

        // bool setExtend()
        bool ret = self->setExtend();
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLFont::setExtend(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLFont_setExtend(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 1) {
        // bool setExtend()
        return _olua_fun_OpenXLSX_XLFont_setExtend$2(L);
    }

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "openxlsx.XLFont")) && (olua_is_bool(L, 2))) {
            // bool setExtend(@optional bool set)
            return _olua_fun_OpenXLSX_XLFont_setExtend$1(L);
        // }
    }

    luaL_error(L, "method 'OpenXLSX::XLFont::setExtend' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_OpenXLSX_XLFont_setFontCharset(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLFont *self = nullptr;
        size_t arg1 = 0;       /** newCharset */

        olua_to_object(L, 1, &self, "openxlsx.XLFont");
        olua_check_integer(L, 2, &arg1);

        // bool setFontCharset(size_t newCharset)
        bool ret = self->setFontCharset(arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLFont::setFontCharset(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLFont_setFontColor(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLFont *self = nullptr;
        OpenXLSX::XLColor *arg1;       /** newColor */

        olua_to_object(L, 1, &self, "openxlsx.XLFont");
        olua_check_object(L, 2, &arg1, "openxlsx.XLColor");

        // bool setFontColor(OpenXLSX::XLColor newColor)
        bool ret = self->setFontColor(*arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLFont::setFontColor(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLFont_setFontFamily(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLFont *self = nullptr;
        size_t arg1 = 0;       /** newFamily */

        olua_to_object(L, 1, &self, "openxlsx.XLFont");
        olua_check_integer(L, 2, &arg1);

        // bool setFontFamily(size_t newFamily)
        bool ret = self->setFontFamily(arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLFont::setFontFamily(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLFont_setFontName(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLFont *self = nullptr;
        std::string arg1;       /** newName */

        olua_to_object(L, 1, &self, "openxlsx.XLFont");
        olua_check_string(L, 2, &arg1);

        // bool setFontName(std::string newName)
        bool ret = self->setFontName(arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLFont::setFontName(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLFont_setFontSize(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLFont *self = nullptr;
        size_t arg1 = 0;       /** newSize */

        olua_to_object(L, 1, &self, "openxlsx.XLFont");
        olua_check_integer(L, 2, &arg1);

        // bool setFontSize(size_t newSize)
        bool ret = self->setFontSize(arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLFont::setFontSize(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLFont_setItalic$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLFont *self = nullptr;
        bool arg1 = false;       /** set */

        olua_to_object(L, 1, &self, "openxlsx.XLFont");
        olua_check_bool(L, 2, &arg1);

        // bool setItalic(@optional bool set)
        bool ret = self->setItalic(arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLFont::setItalic(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLFont_setItalic$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLFont *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLFont");

        // bool setItalic()
        bool ret = self->setItalic();
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLFont::setItalic(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLFont_setItalic(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 1) {
        // bool setItalic()
        return _olua_fun_OpenXLSX_XLFont_setItalic$2(L);
    }

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "openxlsx.XLFont")) && (olua_is_bool(L, 2))) {
            // bool setItalic(@optional bool set)
            return _olua_fun_OpenXLSX_XLFont_setItalic$1(L);
        // }
    }

    luaL_error(L, "method 'OpenXLSX::XLFont::setItalic' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_OpenXLSX_XLFont_setOutline$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLFont *self = nullptr;
        bool arg1 = false;       /** set */

        olua_to_object(L, 1, &self, "openxlsx.XLFont");
        olua_check_bool(L, 2, &arg1);

        // bool setOutline(@optional bool set)
        bool ret = self->setOutline(arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLFont::setOutline(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLFont_setOutline$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLFont *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLFont");

        // bool setOutline()
        bool ret = self->setOutline();
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLFont::setOutline(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLFont_setOutline(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 1) {
        // bool setOutline()
        return _olua_fun_OpenXLSX_XLFont_setOutline$2(L);
    }

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "openxlsx.XLFont")) && (olua_is_bool(L, 2))) {
            // bool setOutline(@optional bool set)
            return _olua_fun_OpenXLSX_XLFont_setOutline$1(L);
        // }
    }

    luaL_error(L, "method 'OpenXLSX::XLFont::setOutline' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_OpenXLSX_XLFont_setScheme(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLFont *self = nullptr;
        OpenXLSX::XLFontSchemeStyle arg1 = (OpenXLSX::XLFontSchemeStyle)0;       /** newScheme */

        olua_to_object(L, 1, &self, "openxlsx.XLFont");
        olua_check_enum(L, 2, &arg1);

        // bool setScheme(OpenXLSX::XLFontSchemeStyle newScheme)
        bool ret = self->setScheme(arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLFont::setScheme(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLFont_setShadow$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLFont *self = nullptr;
        bool arg1 = false;       /** set */

        olua_to_object(L, 1, &self, "openxlsx.XLFont");
        olua_check_bool(L, 2, &arg1);

        // bool setShadow(@optional bool set)
        bool ret = self->setShadow(arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLFont::setShadow(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLFont_setShadow$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLFont *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLFont");

        // bool setShadow()
        bool ret = self->setShadow();
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLFont::setShadow(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLFont_setShadow(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 1) {
        // bool setShadow()
        return _olua_fun_OpenXLSX_XLFont_setShadow$2(L);
    }

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "openxlsx.XLFont")) && (olua_is_bool(L, 2))) {
            // bool setShadow(@optional bool set)
            return _olua_fun_OpenXLSX_XLFont_setShadow$1(L);
        // }
    }

    luaL_error(L, "method 'OpenXLSX::XLFont::setShadow' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_OpenXLSX_XLFont_setStrikethrough$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLFont *self = nullptr;
        bool arg1 = false;       /** set */

        olua_to_object(L, 1, &self, "openxlsx.XLFont");
        olua_check_bool(L, 2, &arg1);

        // bool setStrikethrough(@optional bool set)
        bool ret = self->setStrikethrough(arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLFont::setStrikethrough(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLFont_setStrikethrough$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLFont *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLFont");

        // bool setStrikethrough()
        bool ret = self->setStrikethrough();
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLFont::setStrikethrough(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLFont_setStrikethrough(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 1) {
        // bool setStrikethrough()
        return _olua_fun_OpenXLSX_XLFont_setStrikethrough$2(L);
    }

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "openxlsx.XLFont")) && (olua_is_bool(L, 2))) {
            // bool setStrikethrough(@optional bool set)
            return _olua_fun_OpenXLSX_XLFont_setStrikethrough$1(L);
        // }
    }

    luaL_error(L, "method 'OpenXLSX::XLFont::setStrikethrough' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_OpenXLSX_XLFont_setUnderline$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLFont *self = nullptr;
        OpenXLSX::XLUnderlineStyle arg1 = (OpenXLSX::XLUnderlineStyle)0;       /** style */

        olua_to_object(L, 1, &self, "openxlsx.XLFont");
        olua_check_enum(L, 2, &arg1);

        // bool setUnderline(@optional OpenXLSX::XLUnderlineStyle style)
        bool ret = self->setUnderline(arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLFont::setUnderline(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLFont_setUnderline$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLFont *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLFont");

        // bool setUnderline()
        bool ret = self->setUnderline();
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLFont::setUnderline(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLFont_setUnderline(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 1) {
        // bool setUnderline()
        return _olua_fun_OpenXLSX_XLFont_setUnderline$2(L);
    }

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "openxlsx.XLFont")) && (olua_is_enum(L, 2))) {
            // bool setUnderline(@optional OpenXLSX::XLUnderlineStyle style)
            return _olua_fun_OpenXLSX_XLFont_setUnderline$1(L);
        // }
    }

    luaL_error(L, "method 'OpenXLSX::XLFont::setUnderline' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_OpenXLSX_XLFont_setVertAlign(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLFont *self = nullptr;
        OpenXLSX::XLVerticalAlignRunStyle arg1 = (OpenXLSX::XLVerticalAlignRunStyle)0;       /** newVertAlign */

        olua_to_object(L, 1, &self, "openxlsx.XLFont");
        olua_check_enum(L, 2, &arg1);

        // bool setVertAlign(OpenXLSX::XLVerticalAlignRunStyle newVertAlign)
        bool ret = self->setVertAlign(arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLFont::setVertAlign(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLFont_shadow(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLFont *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLFont");

        // bool shadow()
        bool ret = self->shadow();
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLFont::shadow(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLFont_strikethrough(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLFont *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLFont");

        // bool strikethrough()
        bool ret = self->strikethrough();
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLFont::strikethrough(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLFont_summary(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLFont *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLFont");

        // std::string summary()
        std::string ret = self->summary();
        int num_ret = olua_push_string(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLFont::summary(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLFont_underline(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLFont *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLFont");

        // OpenXLSX::XLUnderlineStyle underline()
        OpenXLSX::XLUnderlineStyle ret = self->underline();
        int num_ret = olua_push_enum(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLFont::underline(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLFont_vertAlign(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLFont *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLFont");

        // OpenXLSX::XLVerticalAlignRunStyle vertAlign()
        OpenXLSX::XLVerticalAlignRunStyle ret = self->vertAlign();
        int num_ret = olua_push_enum(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLFont::vertAlign(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_cls_openxlsx_XLFont(lua_State *L)
{
    oluacls_class<OpenXLSX::XLFont>(L, "openxlsx.XLFont");
    oluacls_func(L, "__gc", _olua_fun_OpenXLSX_XLFont___gc);
    oluacls_func(L, "bold", _olua_fun_OpenXLSX_XLFont_bold);
    oluacls_func(L, "condense", _olua_fun_OpenXLSX_XLFont_condense);
    oluacls_func(L, "extend", _olua_fun_OpenXLSX_XLFont_extend);
    oluacls_func(L, "fontCharset", _olua_fun_OpenXLSX_XLFont_fontCharset);
    oluacls_func(L, "fontColor", _olua_fun_OpenXLSX_XLFont_fontColor);
    oluacls_func(L, "fontFamily", _olua_fun_OpenXLSX_XLFont_fontFamily);
    oluacls_func(L, "fontName", _olua_fun_OpenXLSX_XLFont_fontName);
    oluacls_func(L, "fontSize", _olua_fun_OpenXLSX_XLFont_fontSize);
    oluacls_func(L, "italic", _olua_fun_OpenXLSX_XLFont_italic);
    oluacls_func(L, "new", _olua_fun_OpenXLSX_XLFont_new);
    oluacls_func(L, "outline", _olua_fun_OpenXLSX_XLFont_outline);
    oluacls_func(L, "scheme", _olua_fun_OpenXLSX_XLFont_scheme);
    oluacls_func(L, "setBold", _olua_fun_OpenXLSX_XLFont_setBold);
    oluacls_func(L, "setCondense", _olua_fun_OpenXLSX_XLFont_setCondense);
    oluacls_func(L, "setExtend", _olua_fun_OpenXLSX_XLFont_setExtend);
    oluacls_func(L, "setFontCharset", _olua_fun_OpenXLSX_XLFont_setFontCharset);
    oluacls_func(L, "setFontColor", _olua_fun_OpenXLSX_XLFont_setFontColor);
    oluacls_func(L, "setFontFamily", _olua_fun_OpenXLSX_XLFont_setFontFamily);
    oluacls_func(L, "setFontName", _olua_fun_OpenXLSX_XLFont_setFontName);
    oluacls_func(L, "setFontSize", _olua_fun_OpenXLSX_XLFont_setFontSize);
    oluacls_func(L, "setItalic", _olua_fun_OpenXLSX_XLFont_setItalic);
    oluacls_func(L, "setOutline", _olua_fun_OpenXLSX_XLFont_setOutline);
    oluacls_func(L, "setScheme", _olua_fun_OpenXLSX_XLFont_setScheme);
    oluacls_func(L, "setShadow", _olua_fun_OpenXLSX_XLFont_setShadow);
    oluacls_func(L, "setStrikethrough", _olua_fun_OpenXLSX_XLFont_setStrikethrough);
    oluacls_func(L, "setUnderline", _olua_fun_OpenXLSX_XLFont_setUnderline);
    oluacls_func(L, "setVertAlign", _olua_fun_OpenXLSX_XLFont_setVertAlign);
    oluacls_func(L, "shadow", _olua_fun_OpenXLSX_XLFont_shadow);
    oluacls_func(L, "strikethrough", _olua_fun_OpenXLSX_XLFont_strikethrough);
    oluacls_func(L, "summary", _olua_fun_OpenXLSX_XLFont_summary);
    oluacls_func(L, "underline", _olua_fun_OpenXLSX_XLFont_underline);
    oluacls_func(L, "vertAlign", _olua_fun_OpenXLSX_XLFont_vertAlign);

    return 1;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_openxlsx_XLFont(lua_State *L)
{
    olua_require(L, ".olua.module.openxlsx",  _olua_module_openxlsx);
    if (!olua_getclass(L, "openxlsx.XLFont")) {
        luaL_error(L, "class not found: OpenXLSX::XLFont");
    }
    return 1;
}
OLUA_END_DECLS

static int _olua_cls_openxlsx_XLFontSchemeStyle(lua_State *L)
{
    oluacls_class<OpenXLSX::XLFontSchemeStyle>(L, "openxlsx.XLFontSchemeStyle");
    oluacls_func(L, "__index", olua_indexerror);
    oluacls_func(L, "__newindex", olua_newindexerror);
    oluacls_enum(L, "XLFontSchemeInvalid", (lua_Integer)OpenXLSX::XLFontSchemeStyle::XLFontSchemeInvalid);
    oluacls_enum(L, "XLFontSchemeMajor", (lua_Integer)OpenXLSX::XLFontSchemeStyle::XLFontSchemeMajor);
    oluacls_enum(L, "XLFontSchemeMinor", (lua_Integer)OpenXLSX::XLFontSchemeStyle::XLFontSchemeMinor);
    oluacls_enum(L, "XLFontSchemeNone", (lua_Integer)OpenXLSX::XLFontSchemeStyle::XLFontSchemeNone);

    return 1;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_openxlsx_XLFontSchemeStyle(lua_State *L)
{
    olua_require(L, ".olua.module.openxlsx",  _olua_module_openxlsx);
    if (!olua_getclass(L, "openxlsx.XLFontSchemeStyle")) {
        luaL_error(L, "class not found: OpenXLSX::XLFontSchemeStyle");
    }
    return 1;
}
OLUA_END_DECLS

static int _olua_fun_OpenXLSX_XLGradientStops___gc(lua_State *L)
{
    try {
        olua_startinvoke(L);
        auto self = (OpenXLSX::XLGradientStops *)olua_toobj(L, 1, "openxlsx.XLGradientStops");
        olua_postgc(L, self);
        olua_endinvoke(L);
        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLGradientStops::__gc(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLGradientStops_count(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLGradientStops *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLGradientStops");

        // size_t count()
        size_t ret = self->count();
        int num_ret = olua_push_integer(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLGradientStops::count(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLGradientStops_create$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLGradientStops *self = nullptr;
        OpenXLSX::XLGradientStop *arg1;       /** copyFrom */
        std::string arg2;       /** styleEntriesPrefix */

        olua_to_object(L, 1, &self, "openxlsx.XLGradientStops");
        olua_check_object(L, 2, &arg1, "openxlsx.XLGradientStop");
        olua_check_string(L, 3, &arg2);

        // OpenXLSX::XLStyleIndex create(@optional OpenXLSX::XLGradientStop copyFrom, @optional std::string styleEntriesPrefix)
        OpenXLSX::XLStyleIndex ret = self->create(*arg1, arg2);
        int num_ret = olua_push_integer(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLGradientStops::create(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLGradientStops_create$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLGradientStops *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLGradientStops");

        // OpenXLSX::XLStyleIndex create()
        OpenXLSX::XLStyleIndex ret = self->create();
        int num_ret = olua_push_integer(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLGradientStops::create(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLGradientStops_create$3(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLGradientStops *self = nullptr;
        OpenXLSX::XLGradientStop *arg1;       /** copyFrom */

        olua_to_object(L, 1, &self, "openxlsx.XLGradientStops");
        olua_check_object(L, 2, &arg1, "openxlsx.XLGradientStop");

        // OpenXLSX::XLStyleIndex create(@optional OpenXLSX::XLGradientStop copyFrom)
        OpenXLSX::XLStyleIndex ret = self->create(*arg1);
        int num_ret = olua_push_integer(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLGradientStops::create(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLGradientStops_create(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 1) {
        // OpenXLSX::XLStyleIndex create()
        return _olua_fun_OpenXLSX_XLGradientStops_create$2(L);
    }

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "openxlsx.XLGradientStops")) && (olua_is_object(L, 2, "openxlsx.XLGradientStop"))) {
            // OpenXLSX::XLStyleIndex create(@optional OpenXLSX::XLGradientStop copyFrom)
            return _olua_fun_OpenXLSX_XLGradientStops_create$3(L);
        // }
    }

    if (num_args == 3) {
        // if ((olua_is_object(L, 1, "openxlsx.XLGradientStops")) && (olua_is_object(L, 2, "openxlsx.XLGradientStop")) && (olua_is_string(L, 3))) {
            // OpenXLSX::XLStyleIndex create(@optional OpenXLSX::XLGradientStop copyFrom, @optional std::string styleEntriesPrefix)
            return _olua_fun_OpenXLSX_XLGradientStops_create$1(L);
        // }
    }

    luaL_error(L, "method 'OpenXLSX::XLGradientStops::create' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_OpenXLSX_XLGradientStops_new(lua_State *L)
{
    try {
        olua_startinvoke(L);

        // OpenXLSX::XLGradientStops()
        OpenXLSX::XLGradientStops *ret = new OpenXLSX::XLGradientStops();
        int num_ret = olua_push_object(L, ret, "openxlsx.XLGradientStops");
        olua_postnew(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLGradientStops::new(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLGradientStops_stopByIndex(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLGradientStops *self = nullptr;
        OpenXLSX::XLStyleIndex arg1 = 0;       /** index */

        olua_to_object(L, 1, &self, "openxlsx.XLGradientStops");
        olua_check_integer(L, 2, &arg1);

        // OpenXLSX::XLGradientStop stopByIndex(OpenXLSX::XLStyleIndex index)
        OpenXLSX::XLGradientStop ret = self->stopByIndex(arg1);
        int num_ret = olua_copy_object(L, ret, "openxlsx.XLGradientStop");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLGradientStops::stopByIndex(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLGradientStops_summary(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLGradientStops *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLGradientStops");

        // std::string summary()
        std::string ret = self->summary();
        int num_ret = olua_push_string(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLGradientStops::summary(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_cls_openxlsx_XLGradientStops(lua_State *L)
{
    oluacls_class<OpenXLSX::XLGradientStops>(L, "openxlsx.XLGradientStops");
    oluacls_func(L, "__gc", _olua_fun_OpenXLSX_XLGradientStops___gc);
    oluacls_func(L, "count", _olua_fun_OpenXLSX_XLGradientStops_count);
    oluacls_func(L, "create", _olua_fun_OpenXLSX_XLGradientStops_create);
    oluacls_func(L, "new", _olua_fun_OpenXLSX_XLGradientStops_new);
    oluacls_func(L, "stopByIndex", _olua_fun_OpenXLSX_XLGradientStops_stopByIndex);
    oluacls_func(L, "summary", _olua_fun_OpenXLSX_XLGradientStops_summary);

    return 1;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_openxlsx_XLGradientStops(lua_State *L)
{
    olua_require(L, ".olua.module.openxlsx",  _olua_module_openxlsx);
    if (!olua_getclass(L, "openxlsx.XLGradientStops")) {
        luaL_error(L, "class not found: OpenXLSX::XLGradientStops");
    }
    return 1;
}
OLUA_END_DECLS

static int _olua_fun_OpenXLSX_XLGradientStop___gc(lua_State *L)
{
    try {
        olua_startinvoke(L);
        auto self = (OpenXLSX::XLGradientStop *)olua_toobj(L, 1, "openxlsx.XLGradientStop");
        olua_postgc(L, self);
        olua_endinvoke(L);
        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLGradientStop::__gc(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLGradientStop_color(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLGradientStop *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLGradientStop");

        // OpenXLSX::XLDataBarColor color()
        OpenXLSX::XLDataBarColor ret = self->color();
        int num_ret = olua_copy_object(L, ret, "openxlsx.XLDataBarColor");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLGradientStop::color(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLGradientStop_new(lua_State *L)
{
    try {
        olua_startinvoke(L);

        // OpenXLSX::XLGradientStop()
        OpenXLSX::XLGradientStop *ret = new OpenXLSX::XLGradientStop();
        int num_ret = olua_push_object(L, ret, "openxlsx.XLGradientStop");
        olua_postnew(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLGradientStop::new(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLGradientStop_position(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLGradientStop *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLGradientStop");

        // double position()
        double ret = self->position();
        int num_ret = olua_push_number(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLGradientStop::position(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLGradientStop_setPosition(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLGradientStop *self = nullptr;
        double arg1 = 0;       /** newPosition */

        olua_to_object(L, 1, &self, "openxlsx.XLGradientStop");
        olua_check_number(L, 2, &arg1);

        // bool setPosition(double newPosition)
        bool ret = self->setPosition(arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLGradientStop::setPosition(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLGradientStop_summary(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLGradientStop *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLGradientStop");

        // std::string summary()
        std::string ret = self->summary();
        int num_ret = olua_push_string(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLGradientStop::summary(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_cls_openxlsx_XLGradientStop(lua_State *L)
{
    oluacls_class<OpenXLSX::XLGradientStop>(L, "openxlsx.XLGradientStop");
    oluacls_func(L, "__gc", _olua_fun_OpenXLSX_XLGradientStop___gc);
    oluacls_func(L, "color", _olua_fun_OpenXLSX_XLGradientStop_color);
    oluacls_func(L, "new", _olua_fun_OpenXLSX_XLGradientStop_new);
    oluacls_func(L, "position", _olua_fun_OpenXLSX_XLGradientStop_position);
    oluacls_func(L, "setPosition", _olua_fun_OpenXLSX_XLGradientStop_setPosition);
    oluacls_func(L, "summary", _olua_fun_OpenXLSX_XLGradientStop_summary);

    return 1;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_openxlsx_XLGradientStop(lua_State *L)
{
    olua_require(L, ".olua.module.openxlsx",  _olua_module_openxlsx);
    if (!olua_getclass(L, "openxlsx.XLGradientStop")) {
        luaL_error(L, "class not found: OpenXLSX::XLGradientStop");
    }
    return 1;
}
OLUA_END_DECLS

static int _olua_fun_OpenXLSX_XLDataBarColor___gc(lua_State *L)
{
    try {
        olua_startinvoke(L);
        auto self = (OpenXLSX::XLDataBarColor *)olua_toobj(L, 1, "openxlsx.XLDataBarColor");
        olua_postgc(L, self);
        olua_endinvoke(L);
        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLDataBarColor::__gc(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLDataBarColor_automatic(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLDataBarColor *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLDataBarColor");

        // bool automatic()
        bool ret = self->automatic();
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLDataBarColor::automatic(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLDataBarColor_indexed(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLDataBarColor *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLDataBarColor");

        // uint32_t indexed()
        uint32_t ret = self->indexed();
        int num_ret = olua_push_integer(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLDataBarColor::indexed(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLDataBarColor_new(lua_State *L)
{
    try {
        olua_startinvoke(L);

        // OpenXLSX::XLDataBarColor()
        OpenXLSX::XLDataBarColor *ret = new OpenXLSX::XLDataBarColor();
        int num_ret = olua_push_object(L, ret, "openxlsx.XLDataBarColor");
        olua_postnew(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLDataBarColor::new(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLDataBarColor_rgb(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLDataBarColor *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLDataBarColor");

        // OpenXLSX::XLColor rgb()
        OpenXLSX::XLColor ret = self->rgb();
        int num_ret = olua_copy_object(L, ret, "openxlsx.XLColor");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLDataBarColor::rgb(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLDataBarColor_set(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLDataBarColor *self = nullptr;
        OpenXLSX::XLColor *arg1;       /** newColor */

        olua_to_object(L, 1, &self, "openxlsx.XLDataBarColor");
        olua_check_object(L, 2, &arg1, "openxlsx.XLColor");

        // bool set(OpenXLSX::XLColor newColor)
        bool ret = self->set(*arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLDataBarColor::set(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLDataBarColor_setAutomatic$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLDataBarColor *self = nullptr;
        bool arg1 = false;       /** set */

        olua_to_object(L, 1, &self, "openxlsx.XLDataBarColor");
        olua_check_bool(L, 2, &arg1);

        // bool setAutomatic(@optional bool set)
        bool ret = self->setAutomatic(arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLDataBarColor::setAutomatic(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLDataBarColor_setAutomatic$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLDataBarColor *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLDataBarColor");

        // bool setAutomatic()
        bool ret = self->setAutomatic();
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLDataBarColor::setAutomatic(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLDataBarColor_setAutomatic(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 1) {
        // bool setAutomatic()
        return _olua_fun_OpenXLSX_XLDataBarColor_setAutomatic$2(L);
    }

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "openxlsx.XLDataBarColor")) && (olua_is_bool(L, 2))) {
            // bool setAutomatic(@optional bool set)
            return _olua_fun_OpenXLSX_XLDataBarColor_setAutomatic$1(L);
        // }
    }

    luaL_error(L, "method 'OpenXLSX::XLDataBarColor::setAutomatic' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_OpenXLSX_XLDataBarColor_setIndexed(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLDataBarColor *self = nullptr;
        uint32_t arg1 = 0;       /** newIndex */

        olua_to_object(L, 1, &self, "openxlsx.XLDataBarColor");
        olua_check_integer(L, 2, &arg1);

        // bool setIndexed(uint32_t newIndex)
        bool ret = self->setIndexed(arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLDataBarColor::setIndexed(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLDataBarColor_setRgb(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLDataBarColor *self = nullptr;
        OpenXLSX::XLColor *arg1;       /** newColor */

        olua_to_object(L, 1, &self, "openxlsx.XLDataBarColor");
        olua_check_object(L, 2, &arg1, "openxlsx.XLColor");

        // bool setRgb(OpenXLSX::XLColor newColor)
        bool ret = self->setRgb(*arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLDataBarColor::setRgb(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLDataBarColor_setTheme(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLDataBarColor *self = nullptr;
        uint32_t arg1 = 0;       /** newTheme */

        olua_to_object(L, 1, &self, "openxlsx.XLDataBarColor");
        olua_check_integer(L, 2, &arg1);

        // bool setTheme(uint32_t newTheme)
        bool ret = self->setTheme(arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLDataBarColor::setTheme(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLDataBarColor_setTint(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLDataBarColor *self = nullptr;
        double arg1 = 0;       /** newTint */

        olua_to_object(L, 1, &self, "openxlsx.XLDataBarColor");
        olua_check_number(L, 2, &arg1);

        // bool setTint(double newTint)
        bool ret = self->setTint(arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLDataBarColor::setTint(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLDataBarColor_summary(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLDataBarColor *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLDataBarColor");

        // std::string summary()
        std::string ret = self->summary();
        int num_ret = olua_push_string(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLDataBarColor::summary(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLDataBarColor_theme(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLDataBarColor *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLDataBarColor");

        // uint32_t theme()
        uint32_t ret = self->theme();
        int num_ret = olua_push_integer(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLDataBarColor::theme(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLDataBarColor_tint(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLDataBarColor *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLDataBarColor");

        // double tint()
        double ret = self->tint();
        int num_ret = olua_push_number(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLDataBarColor::tint(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_cls_openxlsx_XLDataBarColor(lua_State *L)
{
    oluacls_class<OpenXLSX::XLDataBarColor>(L, "openxlsx.XLDataBarColor");
    oluacls_func(L, "__gc", _olua_fun_OpenXLSX_XLDataBarColor___gc);
    oluacls_func(L, "automatic", _olua_fun_OpenXLSX_XLDataBarColor_automatic);
    oluacls_func(L, "indexed", _olua_fun_OpenXLSX_XLDataBarColor_indexed);
    oluacls_func(L, "new", _olua_fun_OpenXLSX_XLDataBarColor_new);
    oluacls_func(L, "rgb", _olua_fun_OpenXLSX_XLDataBarColor_rgb);
    oluacls_func(L, "set", _olua_fun_OpenXLSX_XLDataBarColor_set);
    oluacls_func(L, "setAutomatic", _olua_fun_OpenXLSX_XLDataBarColor_setAutomatic);
    oluacls_func(L, "setIndexed", _olua_fun_OpenXLSX_XLDataBarColor_setIndexed);
    oluacls_func(L, "setRgb", _olua_fun_OpenXLSX_XLDataBarColor_setRgb);
    oluacls_func(L, "setTheme", _olua_fun_OpenXLSX_XLDataBarColor_setTheme);
    oluacls_func(L, "setTint", _olua_fun_OpenXLSX_XLDataBarColor_setTint);
    oluacls_func(L, "summary", _olua_fun_OpenXLSX_XLDataBarColor_summary);
    oluacls_func(L, "theme", _olua_fun_OpenXLSX_XLDataBarColor_theme);
    oluacls_func(L, "tint", _olua_fun_OpenXLSX_XLDataBarColor_tint);

    return 1;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_openxlsx_XLDataBarColor(lua_State *L)
{
    olua_require(L, ".olua.module.openxlsx",  _olua_module_openxlsx);
    if (!olua_getclass(L, "openxlsx.XLDataBarColor")) {
        luaL_error(L, "class not found: OpenXLSX::XLDataBarColor");
    }
    return 1;
}
OLUA_END_DECLS

static int _olua_cls_openxlsx_XLGradientType(lua_State *L)
{
    oluacls_class<OpenXLSX::XLGradientType>(L, "openxlsx.XLGradientType");
    oluacls_func(L, "__index", olua_indexerror);
    oluacls_func(L, "__newindex", olua_newindexerror);
    oluacls_enum(L, "XLGradientLinear", (lua_Integer)OpenXLSX::XLGradientType::XLGradientLinear);
    oluacls_enum(L, "XLGradientPath", (lua_Integer)OpenXLSX::XLGradientType::XLGradientPath);
    oluacls_enum(L, "XLGradientTypeInvalid", (lua_Integer)OpenXLSX::XLGradientType::XLGradientTypeInvalid);

    return 1;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_openxlsx_XLGradientType(lua_State *L)
{
    olua_require(L, ".olua.module.openxlsx",  _olua_module_openxlsx);
    if (!olua_getclass(L, "openxlsx.XLGradientType")) {
        luaL_error(L, "class not found: OpenXLSX::XLGradientType");
    }
    return 1;
}
OLUA_END_DECLS

static int _olua_fun_OpenXLSX_XLLine___gc(lua_State *L)
{
    try {
        olua_startinvoke(L);
        auto self = (OpenXLSX::XLLine *)olua_toobj(L, 1, "openxlsx.XLLine");
        olua_postgc(L, self);
        olua_endinvoke(L);
        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLLine::__gc(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLLine_color(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLLine *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLLine");

        // OpenXLSX::XLDataBarColor color()
        OpenXLSX::XLDataBarColor ret = self->color();
        int num_ret = olua_copy_object(L, ret, "openxlsx.XLDataBarColor");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLLine::color(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLLine_new(lua_State *L)
{
    try {
        olua_startinvoke(L);

        // OpenXLSX::XLLine()
        OpenXLSX::XLLine *ret = new OpenXLSX::XLLine();
        int num_ret = olua_push_object(L, ret, "openxlsx.XLLine");
        olua_postnew(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLLine::new(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLLine_style(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLLine *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLLine");

        // OpenXLSX::XLLineStyle style()
        OpenXLSX::XLLineStyle ret = self->style();
        int num_ret = olua_push_enum(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLLine::style(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLLine_summary(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLLine *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLLine");

        // std::string summary()
        std::string ret = self->summary();
        int num_ret = olua_push_string(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLLine::summary(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_cls_openxlsx_XLLine(lua_State *L)
{
    oluacls_class<OpenXLSX::XLLine>(L, "openxlsx.XLLine");
    oluacls_func(L, "__gc", _olua_fun_OpenXLSX_XLLine___gc);
    oluacls_func(L, "color", _olua_fun_OpenXLSX_XLLine_color);
    oluacls_func(L, "new", _olua_fun_OpenXLSX_XLLine_new);
    oluacls_func(L, "style", _olua_fun_OpenXLSX_XLLine_style);
    oluacls_func(L, "summary", _olua_fun_OpenXLSX_XLLine_summary);

    return 1;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_openxlsx_XLLine(lua_State *L)
{
    olua_require(L, ".olua.module.openxlsx",  _olua_module_openxlsx);
    if (!olua_getclass(L, "openxlsx.XLLine")) {
        luaL_error(L, "class not found: OpenXLSX::XLLine");
    }
    return 1;
}
OLUA_END_DECLS

static int _olua_cls_openxlsx_XLLineStyle(lua_State *L)
{
    oluacls_class<OpenXLSX::XLLineStyle>(L, "openxlsx.XLLineStyle");
    oluacls_func(L, "__index", olua_indexerror);
    oluacls_func(L, "__newindex", olua_newindexerror);
    oluacls_enum(L, "XLLineStyleDashDot", (lua_Integer)OpenXLSX::XLLineStyle::XLLineStyleDashDot);
    oluacls_enum(L, "XLLineStyleDashDotDot", (lua_Integer)OpenXLSX::XLLineStyle::XLLineStyleDashDotDot);
    oluacls_enum(L, "XLLineStyleDashed", (lua_Integer)OpenXLSX::XLLineStyle::XLLineStyleDashed);
    oluacls_enum(L, "XLLineStyleDotted", (lua_Integer)OpenXLSX::XLLineStyle::XLLineStyleDotted);
    oluacls_enum(L, "XLLineStyleDouble", (lua_Integer)OpenXLSX::XLLineStyle::XLLineStyleDouble);
    oluacls_enum(L, "XLLineStyleHair", (lua_Integer)OpenXLSX::XLLineStyle::XLLineStyleHair);
    oluacls_enum(L, "XLLineStyleInvalid", (lua_Integer)OpenXLSX::XLLineStyle::XLLineStyleInvalid);
    oluacls_enum(L, "XLLineStyleMedium", (lua_Integer)OpenXLSX::XLLineStyle::XLLineStyleMedium);
    oluacls_enum(L, "XLLineStyleMediumDashDot", (lua_Integer)OpenXLSX::XLLineStyle::XLLineStyleMediumDashDot);
    oluacls_enum(L, "XLLineStyleMediumDashDotDot", (lua_Integer)OpenXLSX::XLLineStyle::XLLineStyleMediumDashDotDot);
    oluacls_enum(L, "XLLineStyleMediumDashed", (lua_Integer)OpenXLSX::XLLineStyle::XLLineStyleMediumDashed);
    oluacls_enum(L, "XLLineStyleNone", (lua_Integer)OpenXLSX::XLLineStyle::XLLineStyleNone);
    oluacls_enum(L, "XLLineStyleSlantDashDot", (lua_Integer)OpenXLSX::XLLineStyle::XLLineStyleSlantDashDot);
    oluacls_enum(L, "XLLineStyleThick", (lua_Integer)OpenXLSX::XLLineStyle::XLLineStyleThick);
    oluacls_enum(L, "XLLineStyleThin", (lua_Integer)OpenXLSX::XLLineStyle::XLLineStyleThin);

    return 1;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_openxlsx_XLLineStyle(lua_State *L)
{
    olua_require(L, ".olua.module.openxlsx",  _olua_module_openxlsx);
    if (!olua_getclass(L, "openxlsx.XLLineStyle")) {
        luaL_error(L, "class not found: OpenXLSX::XLLineStyle");
    }
    return 1;
}
OLUA_END_DECLS

static int _olua_cls_openxlsx_XLLineType(lua_State *L)
{
    oluacls_class<OpenXLSX::XLLineType>(L, "openxlsx.XLLineType");
    oluacls_func(L, "__index", olua_indexerror);
    oluacls_func(L, "__newindex", olua_newindexerror);
    oluacls_enum(L, "XLLineBottom", (lua_Integer)OpenXLSX::XLLineType::XLLineBottom);
    oluacls_enum(L, "XLLineDiagonal", (lua_Integer)OpenXLSX::XLLineType::XLLineDiagonal);
    oluacls_enum(L, "XLLineHorizontal", (lua_Integer)OpenXLSX::XLLineType::XLLineHorizontal);
    oluacls_enum(L, "XLLineInvalid", (lua_Integer)OpenXLSX::XLLineType::XLLineInvalid);
    oluacls_enum(L, "XLLineLeft", (lua_Integer)OpenXLSX::XLLineType::XLLineLeft);
    oluacls_enum(L, "XLLineRight", (lua_Integer)OpenXLSX::XLLineType::XLLineRight);
    oluacls_enum(L, "XLLineTop", (lua_Integer)OpenXLSX::XLLineType::XLLineTop);
    oluacls_enum(L, "XLLineVertical", (lua_Integer)OpenXLSX::XLLineType::XLLineVertical);

    return 1;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_openxlsx_XLLineType(lua_State *L)
{
    olua_require(L, ".olua.module.openxlsx",  _olua_module_openxlsx);
    if (!olua_getclass(L, "openxlsx.XLLineType")) {
        luaL_error(L, "class not found: OpenXLSX::XLLineType");
    }
    return 1;
}
OLUA_END_DECLS

static int _olua_fun_OpenXLSX_XLNumberFormats___gc(lua_State *L)
{
    try {
        olua_startinvoke(L);
        auto self = (OpenXLSX::XLNumberFormats *)olua_toobj(L, 1, "openxlsx.XLNumberFormats");
        olua_postgc(L, self);
        olua_endinvoke(L);
        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLNumberFormats::__gc(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLNumberFormats_count(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLNumberFormats *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLNumberFormats");

        // size_t count()
        size_t ret = self->count();
        int num_ret = olua_push_integer(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLNumberFormats::count(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLNumberFormats_create$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLNumberFormats *self = nullptr;
        OpenXLSX::XLNumberFormat *arg1;       /** copyFrom */
        std::string arg2;       /** styleEntriesPrefix */

        olua_to_object(L, 1, &self, "openxlsx.XLNumberFormats");
        olua_check_object(L, 2, &arg1, "openxlsx.XLNumberFormat");
        olua_check_string(L, 3, &arg2);

        // OpenXLSX::XLStyleIndex create(@optional OpenXLSX::XLNumberFormat copyFrom, @optional std::string styleEntriesPrefix)
        OpenXLSX::XLStyleIndex ret = self->create(*arg1, arg2);
        int num_ret = olua_push_integer(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLNumberFormats::create(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLNumberFormats_create$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLNumberFormats *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLNumberFormats");

        // OpenXLSX::XLStyleIndex create()
        OpenXLSX::XLStyleIndex ret = self->create();
        int num_ret = olua_push_integer(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLNumberFormats::create(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLNumberFormats_create$3(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLNumberFormats *self = nullptr;
        OpenXLSX::XLNumberFormat *arg1;       /** copyFrom */

        olua_to_object(L, 1, &self, "openxlsx.XLNumberFormats");
        olua_check_object(L, 2, &arg1, "openxlsx.XLNumberFormat");

        // OpenXLSX::XLStyleIndex create(@optional OpenXLSX::XLNumberFormat copyFrom)
        OpenXLSX::XLStyleIndex ret = self->create(*arg1);
        int num_ret = olua_push_integer(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLNumberFormats::create(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLNumberFormats_create(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 1) {
        // OpenXLSX::XLStyleIndex create()
        return _olua_fun_OpenXLSX_XLNumberFormats_create$2(L);
    }

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "openxlsx.XLNumberFormats")) && (olua_is_object(L, 2, "openxlsx.XLNumberFormat"))) {
            // OpenXLSX::XLStyleIndex create(@optional OpenXLSX::XLNumberFormat copyFrom)
            return _olua_fun_OpenXLSX_XLNumberFormats_create$3(L);
        // }
    }

    if (num_args == 3) {
        // if ((olua_is_object(L, 1, "openxlsx.XLNumberFormats")) && (olua_is_object(L, 2, "openxlsx.XLNumberFormat")) && (olua_is_string(L, 3))) {
            // OpenXLSX::XLStyleIndex create(@optional OpenXLSX::XLNumberFormat copyFrom, @optional std::string styleEntriesPrefix)
            return _olua_fun_OpenXLSX_XLNumberFormats_create$1(L);
        // }
    }

    luaL_error(L, "method 'OpenXLSX::XLNumberFormats::create' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_OpenXLSX_XLNumberFormats_new(lua_State *L)
{
    try {
        olua_startinvoke(L);

        // OpenXLSX::XLNumberFormats()
        OpenXLSX::XLNumberFormats *ret = new OpenXLSX::XLNumberFormats();
        int num_ret = olua_push_object(L, ret, "openxlsx.XLNumberFormats");
        olua_postnew(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLNumberFormats::new(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLNumberFormats_numberFormatById(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLNumberFormats *self = nullptr;
        uint32_t arg1 = 0;       /** numberFormatId */

        olua_to_object(L, 1, &self, "openxlsx.XLNumberFormats");
        olua_check_integer(L, 2, &arg1);

        // OpenXLSX::XLNumberFormat numberFormatById(uint32_t numberFormatId)
        OpenXLSX::XLNumberFormat ret = self->numberFormatById(arg1);
        int num_ret = olua_copy_object(L, ret, "openxlsx.XLNumberFormat");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLNumberFormats::numberFormatById(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLNumberFormats_numberFormatByIndex(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLNumberFormats *self = nullptr;
        OpenXLSX::XLStyleIndex arg1 = 0;       /** index */

        olua_to_object(L, 1, &self, "openxlsx.XLNumberFormats");
        olua_check_integer(L, 2, &arg1);

        // OpenXLSX::XLNumberFormat numberFormatByIndex(OpenXLSX::XLStyleIndex index)
        OpenXLSX::XLNumberFormat ret = self->numberFormatByIndex(arg1);
        int num_ret = olua_copy_object(L, ret, "openxlsx.XLNumberFormat");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLNumberFormats::numberFormatByIndex(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLNumberFormats_numberFormatIdFromIndex(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLNumberFormats *self = nullptr;
        OpenXLSX::XLStyleIndex arg1 = 0;       /** index */

        olua_to_object(L, 1, &self, "openxlsx.XLNumberFormats");
        olua_check_integer(L, 2, &arg1);

        // uint32_t numberFormatIdFromIndex(OpenXLSX::XLStyleIndex index)
        uint32_t ret = self->numberFormatIdFromIndex(arg1);
        int num_ret = olua_push_integer(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLNumberFormats::numberFormatIdFromIndex(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_cls_openxlsx_XLNumberFormats(lua_State *L)
{
    oluacls_class<OpenXLSX::XLNumberFormats>(L, "openxlsx.XLNumberFormats");
    oluacls_func(L, "__gc", _olua_fun_OpenXLSX_XLNumberFormats___gc);
    oluacls_func(L, "count", _olua_fun_OpenXLSX_XLNumberFormats_count);
    oluacls_func(L, "create", _olua_fun_OpenXLSX_XLNumberFormats_create);
    oluacls_func(L, "new", _olua_fun_OpenXLSX_XLNumberFormats_new);
    oluacls_func(L, "numberFormatById", _olua_fun_OpenXLSX_XLNumberFormats_numberFormatById);
    oluacls_func(L, "numberFormatByIndex", _olua_fun_OpenXLSX_XLNumberFormats_numberFormatByIndex);
    oluacls_func(L, "numberFormatIdFromIndex", _olua_fun_OpenXLSX_XLNumberFormats_numberFormatIdFromIndex);

    return 1;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_openxlsx_XLNumberFormats(lua_State *L)
{
    olua_require(L, ".olua.module.openxlsx",  _olua_module_openxlsx);
    if (!olua_getclass(L, "openxlsx.XLNumberFormats")) {
        luaL_error(L, "class not found: OpenXLSX::XLNumberFormats");
    }
    return 1;
}
OLUA_END_DECLS

static int _olua_fun_OpenXLSX_XLNumberFormat___gc(lua_State *L)
{
    try {
        olua_startinvoke(L);
        auto self = (OpenXLSX::XLNumberFormat *)olua_toobj(L, 1, "openxlsx.XLNumberFormat");
        olua_postgc(L, self);
        olua_endinvoke(L);
        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLNumberFormat::__gc(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLNumberFormat_formatCode(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLNumberFormat *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLNumberFormat");

        // std::string formatCode()
        std::string ret = self->formatCode();
        int num_ret = olua_push_string(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLNumberFormat::formatCode(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLNumberFormat_new(lua_State *L)
{
    try {
        olua_startinvoke(L);

        // OpenXLSX::XLNumberFormat()
        OpenXLSX::XLNumberFormat *ret = new OpenXLSX::XLNumberFormat();
        int num_ret = olua_push_object(L, ret, "openxlsx.XLNumberFormat");
        olua_postnew(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLNumberFormat::new(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLNumberFormat_numberFormatId(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLNumberFormat *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLNumberFormat");

        // uint32_t numberFormatId()
        uint32_t ret = self->numberFormatId();
        int num_ret = olua_push_integer(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLNumberFormat::numberFormatId(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLNumberFormat_setFormatCode(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLNumberFormat *self = nullptr;
        std::string arg1;       /** newFormatCode */

        olua_to_object(L, 1, &self, "openxlsx.XLNumberFormat");
        olua_check_string(L, 2, &arg1);

        // bool setFormatCode(std::string newFormatCode)
        bool ret = self->setFormatCode(arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLNumberFormat::setFormatCode(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLNumberFormat_setNumberFormatId(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLNumberFormat *self = nullptr;
        uint32_t arg1 = 0;       /** newNumberFormatId */

        olua_to_object(L, 1, &self, "openxlsx.XLNumberFormat");
        olua_check_integer(L, 2, &arg1);

        // bool setNumberFormatId(uint32_t newNumberFormatId)
        bool ret = self->setNumberFormatId(arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLNumberFormat::setNumberFormatId(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLNumberFormat_summary(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLNumberFormat *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLNumberFormat");

        // std::string summary()
        std::string ret = self->summary();
        int num_ret = olua_push_string(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLNumberFormat::summary(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_cls_openxlsx_XLNumberFormat(lua_State *L)
{
    oluacls_class<OpenXLSX::XLNumberFormat>(L, "openxlsx.XLNumberFormat");
    oluacls_func(L, "__gc", _olua_fun_OpenXLSX_XLNumberFormat___gc);
    oluacls_func(L, "formatCode", _olua_fun_OpenXLSX_XLNumberFormat_formatCode);
    oluacls_func(L, "new", _olua_fun_OpenXLSX_XLNumberFormat_new);
    oluacls_func(L, "numberFormatId", _olua_fun_OpenXLSX_XLNumberFormat_numberFormatId);
    oluacls_func(L, "setFormatCode", _olua_fun_OpenXLSX_XLNumberFormat_setFormatCode);
    oluacls_func(L, "setNumberFormatId", _olua_fun_OpenXLSX_XLNumberFormat_setNumberFormatId);
    oluacls_func(L, "summary", _olua_fun_OpenXLSX_XLNumberFormat_summary);

    return 1;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_openxlsx_XLNumberFormat(lua_State *L)
{
    olua_require(L, ".olua.module.openxlsx",  _olua_module_openxlsx);
    if (!olua_getclass(L, "openxlsx.XLNumberFormat")) {
        luaL_error(L, "class not found: OpenXLSX::XLNumberFormat");
    }
    return 1;
}
OLUA_END_DECLS

static int _olua_cls_openxlsx_XLPatternType(lua_State *L)
{
    oluacls_class<OpenXLSX::XLPatternType>(L, "openxlsx.XLPatternType");
    oluacls_func(L, "__index", olua_indexerror);
    oluacls_func(L, "__newindex", olua_newindexerror);
    oluacls_enum(L, "XLPatternDarkDown", (lua_Integer)OpenXLSX::XLPatternType::XLPatternDarkDown);
    oluacls_enum(L, "XLPatternDarkGray", (lua_Integer)OpenXLSX::XLPatternType::XLPatternDarkGray);
    oluacls_enum(L, "XLPatternDarkGrid", (lua_Integer)OpenXLSX::XLPatternType::XLPatternDarkGrid);
    oluacls_enum(L, "XLPatternDarkHorizontal", (lua_Integer)OpenXLSX::XLPatternType::XLPatternDarkHorizontal);
    oluacls_enum(L, "XLPatternDarkTrellis", (lua_Integer)OpenXLSX::XLPatternType::XLPatternDarkTrellis);
    oluacls_enum(L, "XLPatternDarkUp", (lua_Integer)OpenXLSX::XLPatternType::XLPatternDarkUp);
    oluacls_enum(L, "XLPatternDarkVertical", (lua_Integer)OpenXLSX::XLPatternType::XLPatternDarkVertical);
    oluacls_enum(L, "XLPatternGray0625", (lua_Integer)OpenXLSX::XLPatternType::XLPatternGray0625);
    oluacls_enum(L, "XLPatternGray125", (lua_Integer)OpenXLSX::XLPatternType::XLPatternGray125);
    oluacls_enum(L, "XLPatternLightDown", (lua_Integer)OpenXLSX::XLPatternType::XLPatternLightDown);
    oluacls_enum(L, "XLPatternLightGray", (lua_Integer)OpenXLSX::XLPatternType::XLPatternLightGray);
    oluacls_enum(L, "XLPatternLightGrid", (lua_Integer)OpenXLSX::XLPatternType::XLPatternLightGrid);
    oluacls_enum(L, "XLPatternLightHorizontal", (lua_Integer)OpenXLSX::XLPatternType::XLPatternLightHorizontal);
    oluacls_enum(L, "XLPatternLightTrellis", (lua_Integer)OpenXLSX::XLPatternType::XLPatternLightTrellis);
    oluacls_enum(L, "XLPatternLightUp", (lua_Integer)OpenXLSX::XLPatternType::XLPatternLightUp);
    oluacls_enum(L, "XLPatternLightVertical", (lua_Integer)OpenXLSX::XLPatternType::XLPatternLightVertical);
    oluacls_enum(L, "XLPatternMediumGray", (lua_Integer)OpenXLSX::XLPatternType::XLPatternMediumGray);
    oluacls_enum(L, "XLPatternNone", (lua_Integer)OpenXLSX::XLPatternType::XLPatternNone);
    oluacls_enum(L, "XLPatternSolid", (lua_Integer)OpenXLSX::XLPatternType::XLPatternSolid);
    oluacls_enum(L, "XLPatternTypeInvalid", (lua_Integer)OpenXLSX::XLPatternType::XLPatternTypeInvalid);

    return 1;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_openxlsx_XLPatternType(lua_State *L)
{
    olua_require(L, ".olua.module.openxlsx",  _olua_module_openxlsx);
    if (!olua_getclass(L, "openxlsx.XLPatternType")) {
        luaL_error(L, "class not found: OpenXLSX::XLPatternType");
    }
    return 1;
}
OLUA_END_DECLS

static int _olua_cls_openxlsx_XLUnderlineStyle(lua_State *L)
{
    oluacls_class<OpenXLSX::XLUnderlineStyle>(L, "openxlsx.XLUnderlineStyle");
    oluacls_func(L, "__index", olua_indexerror);
    oluacls_func(L, "__newindex", olua_newindexerror);
    oluacls_enum(L, "XLUnderlineDouble", (lua_Integer)OpenXLSX::XLUnderlineStyle::XLUnderlineDouble);
    oluacls_enum(L, "XLUnderlineInvalid", (lua_Integer)OpenXLSX::XLUnderlineStyle::XLUnderlineInvalid);
    oluacls_enum(L, "XLUnderlineNone", (lua_Integer)OpenXLSX::XLUnderlineStyle::XLUnderlineNone);
    oluacls_enum(L, "XLUnderlineSingle", (lua_Integer)OpenXLSX::XLUnderlineStyle::XLUnderlineSingle);

    return 1;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_openxlsx_XLUnderlineStyle(lua_State *L)
{
    olua_require(L, ".olua.module.openxlsx",  _olua_module_openxlsx);
    if (!olua_getclass(L, "openxlsx.XLUnderlineStyle")) {
        luaL_error(L, "class not found: OpenXLSX::XLUnderlineStyle");
    }
    return 1;
}
OLUA_END_DECLS

static int _olua_fun_OpenXLSX_XLUnsupportedElement___gc(lua_State *L)
{
    try {
        olua_startinvoke(L);
        auto self = (OpenXLSX::XLUnsupportedElement *)olua_toobj(L, 1, "openxlsx.XLUnsupportedElement");
        olua_postgc(L, self);
        olua_endinvoke(L);
        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLUnsupportedElement::__gc(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLUnsupportedElement_empty(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLUnsupportedElement *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLUnsupportedElement");

        // bool empty()
        bool ret = self->empty();
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLUnsupportedElement::empty(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLUnsupportedElement_new(lua_State *L)
{
    try {
        olua_startinvoke(L);

        // OpenXLSX::XLUnsupportedElement()
        OpenXLSX::XLUnsupportedElement *ret = new OpenXLSX::XLUnsupportedElement();
        int num_ret = olua_push_object(L, ret, "openxlsx.XLUnsupportedElement");
        olua_postnew(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLUnsupportedElement::new(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_cls_openxlsx_XLUnsupportedElement(lua_State *L)
{
    oluacls_class<OpenXLSX::XLUnsupportedElement>(L, "openxlsx.XLUnsupportedElement");
    oluacls_func(L, "__gc", _olua_fun_OpenXLSX_XLUnsupportedElement___gc);
    oluacls_func(L, "empty", _olua_fun_OpenXLSX_XLUnsupportedElement_empty);
    oluacls_func(L, "new", _olua_fun_OpenXLSX_XLUnsupportedElement_new);

    return 1;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_openxlsx_XLUnsupportedElement(lua_State *L)
{
    olua_require(L, ".olua.module.openxlsx",  _olua_module_openxlsx);
    if (!olua_getclass(L, "openxlsx.XLUnsupportedElement")) {
        luaL_error(L, "class not found: OpenXLSX::XLUnsupportedElement");
    }
    return 1;
}
OLUA_END_DECLS

static int _olua_cls_openxlsx_XLVerticalAlignRunStyle(lua_State *L)
{
    oluacls_class<OpenXLSX::XLVerticalAlignRunStyle>(L, "openxlsx.XLVerticalAlignRunStyle");
    oluacls_func(L, "__index", olua_indexerror);
    oluacls_func(L, "__newindex", olua_newindexerror);
    oluacls_enum(L, "XLBaseline", (lua_Integer)OpenXLSX::XLVerticalAlignRunStyle::XLBaseline);
    oluacls_enum(L, "XLSubscript", (lua_Integer)OpenXLSX::XLVerticalAlignRunStyle::XLSubscript);
    oluacls_enum(L, "XLSuperscript", (lua_Integer)OpenXLSX::XLVerticalAlignRunStyle::XLSuperscript);
    oluacls_enum(L, "XLVerticalAlignRunInvalid", (lua_Integer)OpenXLSX::XLVerticalAlignRunStyle::XLVerticalAlignRunInvalid);

    return 1;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_openxlsx_XLVerticalAlignRunStyle(lua_State *L)
{
    olua_require(L, ".olua.module.openxlsx",  _olua_module_openxlsx);
    if (!olua_getclass(L, "openxlsx.XLVerticalAlignRunStyle")) {
        luaL_error(L, "class not found: OpenXLSX::XLVerticalAlignRunStyle");
    }
    return 1;
}
OLUA_END_DECLS

static int _olua_fun_OpenXLSX_XLXmlSavingDeclaration___gc(lua_State *L)
{
    try {
        olua_startinvoke(L);
        auto self = (OpenXLSX::XLXmlSavingDeclaration *)olua_toobj(L, 1, "openxlsx.XLXmlSavingDeclaration");
        olua_postgc(L, self);
        olua_endinvoke(L);
        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLXmlSavingDeclaration::__gc(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLXmlSavingDeclaration_encoding(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLXmlSavingDeclaration *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLXmlSavingDeclaration");

        // const std::string &encoding()
        const std::string &ret = self->encoding();
        int num_ret = olua_push_string(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLXmlSavingDeclaration::encoding(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLXmlSavingDeclaration_new$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        // OpenXLSX::XLXmlSavingDeclaration()
        OpenXLSX::XLXmlSavingDeclaration *ret = new OpenXLSX::XLXmlSavingDeclaration();
        int num_ret = olua_push_object(L, ret, "openxlsx.XLXmlSavingDeclaration");
        olua_postnew(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLXmlSavingDeclaration::new(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLXmlSavingDeclaration_new$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::string arg1;       /** version */
        std::string arg2;       /** encoding */
        bool arg3 = false;       /** standalone */

        olua_check_string(L, 1, &arg1);
        olua_check_string(L, 2, &arg2);
        olua_check_bool(L, 3, &arg3);

        // OpenXLSX::XLXmlSavingDeclaration(std::string version, std::string encoding, @optional bool standalone)
        OpenXLSX::XLXmlSavingDeclaration *ret = new OpenXLSX::XLXmlSavingDeclaration(arg1, arg2, arg3);
        int num_ret = olua_push_object(L, ret, "openxlsx.XLXmlSavingDeclaration");
        olua_postnew(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLXmlSavingDeclaration::new(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLXmlSavingDeclaration_new$3(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::string arg1;       /** version */
        std::string arg2;       /** encoding */

        olua_check_string(L, 1, &arg1);
        olua_check_string(L, 2, &arg2);

        // OpenXLSX::XLXmlSavingDeclaration(std::string version, std::string encoding)
        OpenXLSX::XLXmlSavingDeclaration *ret = new OpenXLSX::XLXmlSavingDeclaration(arg1, arg2);
        int num_ret = olua_push_object(L, ret, "openxlsx.XLXmlSavingDeclaration");
        olua_postnew(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLXmlSavingDeclaration::new(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLXmlSavingDeclaration_new(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 0) {
        // OpenXLSX::XLXmlSavingDeclaration()
        return _olua_fun_OpenXLSX_XLXmlSavingDeclaration_new$1(L);
    }

    if (num_args == 2) {
        // if ((olua_is_string(L, 1)) && (olua_is_string(L, 2))) {
            // OpenXLSX::XLXmlSavingDeclaration(std::string version, std::string encoding)
            return _olua_fun_OpenXLSX_XLXmlSavingDeclaration_new$3(L);
        // }
    }

    if (num_args == 3) {
        // if ((olua_is_string(L, 1)) && (olua_is_string(L, 2)) && (olua_is_bool(L, 3))) {
            // OpenXLSX::XLXmlSavingDeclaration(std::string version, std::string encoding, @optional bool standalone)
            return _olua_fun_OpenXLSX_XLXmlSavingDeclaration_new$2(L);
        // }
    }

    luaL_error(L, "method 'OpenXLSX::XLXmlSavingDeclaration::new' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_OpenXLSX_XLXmlSavingDeclaration_standalone(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLXmlSavingDeclaration *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLXmlSavingDeclaration");

        // const std::string standalone()
        const std::string ret = self->standalone();
        int num_ret = olua_push_string(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLXmlSavingDeclaration::standalone(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLXmlSavingDeclaration_standalone_as_bool(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLXmlSavingDeclaration *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLXmlSavingDeclaration");

        // bool standalone_as_bool()
        bool ret = self->standalone_as_bool();
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLXmlSavingDeclaration::standalone_as_bool(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLXmlSavingDeclaration_version(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLXmlSavingDeclaration *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLXmlSavingDeclaration");

        // const std::string &version()
        const std::string &ret = self->version();
        int num_ret = olua_push_string(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLXmlSavingDeclaration::version(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_cls_openxlsx_XLXmlSavingDeclaration(lua_State *L)
{
    oluacls_class<OpenXLSX::XLXmlSavingDeclaration>(L, "openxlsx.XLXmlSavingDeclaration");
    oluacls_func(L, "__gc", _olua_fun_OpenXLSX_XLXmlSavingDeclaration___gc);
    oluacls_func(L, "encoding", _olua_fun_OpenXLSX_XLXmlSavingDeclaration_encoding);
    oluacls_func(L, "new", _olua_fun_OpenXLSX_XLXmlSavingDeclaration_new);
    oluacls_func(L, "standalone", _olua_fun_OpenXLSX_XLXmlSavingDeclaration_standalone);
    oluacls_func(L, "standalone_as_bool", _olua_fun_OpenXLSX_XLXmlSavingDeclaration_standalone_as_bool);
    oluacls_func(L, "version", _olua_fun_OpenXLSX_XLXmlSavingDeclaration_version);

    return 1;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_openxlsx_XLXmlSavingDeclaration(lua_State *L)
{
    olua_require(L, ".olua.module.openxlsx",  _olua_module_openxlsx);
    if (!olua_getclass(L, "openxlsx.XLXmlSavingDeclaration")) {
        luaL_error(L, "class not found: OpenXLSX::XLXmlSavingDeclaration");
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

static int _olua_fun_OpenXLSX_XLColumn_format(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLColumn *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLColumn");

        // OpenXLSX::XLStyleIndex format()
        OpenXLSX::XLStyleIndex ret = self->format();
        int num_ret = olua_push_integer(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLColumn::format(): %s", e.what());
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

static int _olua_fun_OpenXLSX_XLColumn_setFormat(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLColumn *self = nullptr;
        OpenXLSX::XLStyleIndex arg1 = 0;       /** cellFormatIndex */

        olua_to_object(L, 1, &self, "openxlsx.XLColumn");
        olua_check_integer(L, 2, &arg1);

        // bool setFormat(OpenXLSX::XLStyleIndex cellFormatIndex)
        bool ret = self->setFormat(arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLColumn::setFormat(): %s", e.what());
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
    oluacls_func(L, "format", _olua_fun_OpenXLSX_XLColumn_format);
    oluacls_func(L, "isHidden", _olua_fun_OpenXLSX_XLColumn_isHidden);
    oluacls_func(L, "setFormat", _olua_fun_OpenXLSX_XLColumn_setFormat);
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

static int _olua_fun_OpenXLSX_XLRow_findCell(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLRow *self = nullptr;
        uint16_t arg1 = 0;       /** columNumber */

        olua_to_object(L, 1, &self, "openxlsx.XLRow");
        olua_check_integer(L, 2, &arg1);

        // OpenXLSX::XLCell findCell(uint16_t columNumber)
        OpenXLSX::XLCell ret = self->findCell(arg1);
        int num_ret = olua_copy_object(L, ret, "openxlsx.XLCell");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLRow::findCell(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLRow_format(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLRow *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLRow");

        // OpenXLSX::XLStyleIndex format()
        OpenXLSX::XLStyleIndex ret = self->format();
        int num_ret = olua_push_integer(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLRow::format(): %s", e.what());
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

        // uint32_t rowNumber()
        uint32_t ret = self->rowNumber();
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

static int _olua_fun_OpenXLSX_XLRow_setFormat(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLRow *self = nullptr;
        OpenXLSX::XLStyleIndex arg1 = 0;       /** cellFormatIndex */

        olua_to_object(L, 1, &self, "openxlsx.XLRow");
        olua_check_integer(L, 2, &arg1);

        // bool setFormat(OpenXLSX::XLStyleIndex cellFormatIndex)
        bool ret = self->setFormat(arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLRow::setFormat(): %s", e.what());
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
    oluacls_func(L, "findCell", _olua_fun_OpenXLSX_XLRow_findCell);
    oluacls_func(L, "format", _olua_fun_OpenXLSX_XLRow_format);
    oluacls_func(L, "height", _olua_fun_OpenXLSX_XLRow_height);
    oluacls_func(L, "isHidden", _olua_fun_OpenXLSX_XLRow_isHidden);
    oluacls_func(L, "new", _olua_fun_OpenXLSX_XLRow_new);
    oluacls_func(L, "rowNumber", _olua_fun_OpenXLSX_XLRow_rowNumber);
    oluacls_func(L, "setDescent", _olua_fun_OpenXLSX_XLRow_setDescent);
    oluacls_func(L, "setFormat", _olua_fun_OpenXLSX_XLRow_setFormat);
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
        OpenXLSX::XLCellReference arg1_from_string = OpenXLSX::XLCellReference("A1");       /** ref */

        olua_to_object(L, 1, &self, "openxlsx.XLWorksheet");
        if (olua_isstring(L, 2)) {
            olua_check_string(L, 2, &arg1_from_string);
            arg1 = &arg1_from_string;
        } else {
            olua_check_object(L, 2, &arg1, "openxlsx.XLCellReference");
        }

        // OpenXLSX::XLCellAssignable cell(const OpenXLSX::XLCellReference &ref)
        OpenXLSX::XLCellAssignable ret = self->cell(*arg1);
        int num_ret = olua_copy_object(L, ret, "openxlsx.XLCellAssignable");

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

        // OpenXLSX::XLCellAssignable cell(uint32_t rowNumber, uint16_t columnNumber)
        OpenXLSX::XLCellAssignable ret = self->cell(arg1, arg2);
        int num_ret = olua_copy_object(L, ret, "openxlsx.XLCellAssignable");

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
            // OpenXLSX::XLCellAssignable cell(const OpenXLSX::XLCellReference &ref)
            return _olua_fun_OpenXLSX_XLWorksheet_cell$2(L);
        // }
    }

    if (num_args == 3) {
        // if ((olua_is_object(L, 1, "openxlsx.XLWorksheet")) && (olua_is_integer(L, 2)) && (olua_is_integer(L, 3))) {
            // OpenXLSX::XLCellAssignable cell(uint32_t rowNumber, uint16_t columnNumber)
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

static int _olua_fun_OpenXLSX_XLWorksheet_column$1(lua_State *L)
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

static int _olua_fun_OpenXLSX_XLWorksheet_column$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLWorksheet *self = nullptr;
        std::string arg1;       /** columnRef */

        olua_to_object(L, 1, &self, "openxlsx.XLWorksheet");
        olua_check_string(L, 2, &arg1);

        // OpenXLSX::XLColumn column(const std::string &columnRef)
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

static int _olua_fun_OpenXLSX_XLWorksheet_column(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 2) {
        if ((olua_is_object(L, 1, "openxlsx.XLWorksheet")) && (olua_is_integer(L, 2))) {
            // OpenXLSX::XLColumn column(uint16_t columnNumber)
            return _olua_fun_OpenXLSX_XLWorksheet_column$1(L);
        }

        // if ((olua_is_object(L, 1, "openxlsx.XLWorksheet")) && (olua_is_string(L, 2))) {
            // OpenXLSX::XLColumn column(const std::string &columnRef)
            return _olua_fun_OpenXLSX_XLWorksheet_column$2(L);
        // }
    }

    luaL_error(L, "method 'OpenXLSX::XLWorksheet::column' not support '%d' arguments", num_args);

    return 0;
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

static int _olua_fun_OpenXLSX_XLWorksheet_getColumnFormat$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLWorksheet *self = nullptr;
        uint16_t arg1 = 0;       /** column */

        olua_to_object(L, 1, &self, "openxlsx.XLWorksheet");
        olua_check_integer(L, 2, &arg1);

        // OpenXLSX::XLStyleIndex getColumnFormat(uint16_t column)
        OpenXLSX::XLStyleIndex ret = self->getColumnFormat(arg1);
        int num_ret = olua_push_integer(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLWorksheet::getColumnFormat(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLWorksheet_getColumnFormat$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLWorksheet *self = nullptr;
        std::string arg1;       /** column */

        olua_to_object(L, 1, &self, "openxlsx.XLWorksheet");
        olua_check_string(L, 2, &arg1);

        // OpenXLSX::XLStyleIndex getColumnFormat(const std::string &column)
        OpenXLSX::XLStyleIndex ret = self->getColumnFormat(arg1);
        int num_ret = olua_push_integer(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLWorksheet::getColumnFormat(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLWorksheet_getColumnFormat(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 2) {
        if ((olua_is_object(L, 1, "openxlsx.XLWorksheet")) && (olua_is_integer(L, 2))) {
            // OpenXLSX::XLStyleIndex getColumnFormat(uint16_t column)
            return _olua_fun_OpenXLSX_XLWorksheet_getColumnFormat$1(L);
        }

        // if ((olua_is_object(L, 1, "openxlsx.XLWorksheet")) && (olua_is_string(L, 2))) {
            // OpenXLSX::XLStyleIndex getColumnFormat(const std::string &column)
            return _olua_fun_OpenXLSX_XLWorksheet_getColumnFormat$2(L);
        // }
    }

    luaL_error(L, "method 'OpenXLSX::XLWorksheet::getColumnFormat' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_OpenXLSX_XLWorksheet_getRowFormat(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLWorksheet *self = nullptr;
        uint16_t arg1 = 0;       /** row */

        olua_to_object(L, 1, &self, "openxlsx.XLWorksheet");
        olua_check_integer(L, 2, &arg1);

        // OpenXLSX::XLStyleIndex getRowFormat(uint16_t row)
        OpenXLSX::XLStyleIndex ret = self->getRowFormat(arg1);
        int num_ret = olua_push_integer(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLWorksheet::getRowFormat(): %s", e.what());
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

static int _olua_fun_OpenXLSX_XLWorksheet_mergeCells$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLWorksheet *self = nullptr;
        OpenXLSX::XLCellRange *arg1;       /** rangeToMerge */
        bool arg2 = false;       /** emptyHiddenCells */

        olua_to_object(L, 1, &self, "openxlsx.XLWorksheet");
        olua_check_object(L, 2, &arg1, "openxlsx.XLCellRange");
        olua_check_bool(L, 3, &arg2);

        // void mergeCells(const OpenXLSX::XLCellRange &rangeToMerge, @optional bool emptyHiddenCells)
        self->mergeCells(*arg1, arg2);

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLWorksheet::mergeCells(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLWorksheet_mergeCells$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLWorksheet *self = nullptr;
        OpenXLSX::XLCellRange *arg1;       /** rangeToMerge */

        olua_to_object(L, 1, &self, "openxlsx.XLWorksheet");
        olua_check_object(L, 2, &arg1, "openxlsx.XLCellRange");

        // void mergeCells(const OpenXLSX::XLCellRange &rangeToMerge)
        self->mergeCells(*arg1);

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLWorksheet::mergeCells(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLWorksheet_mergeCells$3(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLWorksheet *self = nullptr;
        std::string arg1;       /** rangeReference */
        bool arg2 = false;       /** emptyHiddenCells */

        olua_to_object(L, 1, &self, "openxlsx.XLWorksheet");
        olua_check_string(L, 2, &arg1);
        olua_check_bool(L, 3, &arg2);

        // void mergeCells(const std::string &rangeReference, @optional bool emptyHiddenCells)
        self->mergeCells(arg1, arg2);

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLWorksheet::mergeCells(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLWorksheet_mergeCells$4(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLWorksheet *self = nullptr;
        std::string arg1;       /** rangeReference */

        olua_to_object(L, 1, &self, "openxlsx.XLWorksheet");
        olua_check_string(L, 2, &arg1);

        // void mergeCells(const std::string &rangeReference)
        self->mergeCells(arg1);

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLWorksheet::mergeCells(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLWorksheet_mergeCells(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 2) {
        if ((olua_is_object(L, 1, "openxlsx.XLWorksheet")) && (olua_is_object(L, 2, "openxlsx.XLCellRange"))) {
            // void mergeCells(const OpenXLSX::XLCellRange &rangeToMerge)
            return _olua_fun_OpenXLSX_XLWorksheet_mergeCells$2(L);
        }

        // if ((olua_is_object(L, 1, "openxlsx.XLWorksheet")) && (olua_is_string(L, 2))) {
            // void mergeCells(const std::string &rangeReference)
            return _olua_fun_OpenXLSX_XLWorksheet_mergeCells$4(L);
        // }
    }

    if (num_args == 3) {
        if ((olua_is_object(L, 1, "openxlsx.XLWorksheet")) && (olua_is_object(L, 2, "openxlsx.XLCellRange")) && (olua_is_bool(L, 3))) {
            // void mergeCells(const OpenXLSX::XLCellRange &rangeToMerge, @optional bool emptyHiddenCells)
            return _olua_fun_OpenXLSX_XLWorksheet_mergeCells$1(L);
        }

        // if ((olua_is_object(L, 1, "openxlsx.XLWorksheet")) && (olua_is_string(L, 2)) && (olua_is_bool(L, 3))) {
            // void mergeCells(const std::string &rangeReference, @optional bool emptyHiddenCells)
            return _olua_fun_OpenXLSX_XLWorksheet_mergeCells$3(L);
        // }
    }

    luaL_error(L, "method 'OpenXLSX::XLWorksheet::mergeCells' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_OpenXLSX_XLWorksheet_merges(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLWorksheet *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLWorksheet");

        // OpenXLSX::XLMergeCells &merges()
        OpenXLSX::XLMergeCells &ret = self->merges();
        int num_ret = olua_push_object(L, &ret, "openxlsx.XLMergeCells");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLWorksheet::merges(): %s", e.what());
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
        OpenXLSX::XLCellReference arg1_from_string = OpenXLSX::XLCellReference("A1");       /** topLeft */
        OpenXLSX::XLCellReference *arg2;       /** bottomRight */
        OpenXLSX::XLCellReference arg2_from_string = OpenXLSX::XLCellReference("A1");       /** bottomRight */

        olua_to_object(L, 1, &self, "openxlsx.XLWorksheet");
        if (olua_isstring(L, 2)) {
            olua_check_string(L, 2, &arg1_from_string);
            arg1 = &arg1_from_string;
        } else {
            olua_check_object(L, 2, &arg1, "openxlsx.XLCellReference");
        }
        if (olua_isstring(L, 3)) {
            olua_check_string(L, 3, &arg2_from_string);
            arg2 = &arg2_from_string;
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

static int _olua_fun_OpenXLSX_XLWorksheet_range$3(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLWorksheet *self = nullptr;
        std::string arg1;       /** topLeft */
        std::string arg2;       /** bottomRight */

        olua_to_object(L, 1, &self, "openxlsx.XLWorksheet");
        olua_check_string(L, 2, &arg1);
        olua_check_string(L, 3, &arg2);

        // OpenXLSX::XLCellRange range(const std::string &topLeft, const std::string &bottomRight)
        OpenXLSX::XLCellRange ret = self->range(arg1, arg2);
        int num_ret = olua_copy_object(L, ret, "openxlsx.XLCellRange");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLWorksheet::range(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLWorksheet_range$4(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLWorksheet *self = nullptr;
        std::string arg1;       /** rangeReference */

        olua_to_object(L, 1, &self, "openxlsx.XLWorksheet");
        olua_check_string(L, 2, &arg1);

        // OpenXLSX::XLCellRange range(const std::string &rangeReference)
        OpenXLSX::XLCellRange ret = self->range(arg1);
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

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "openxlsx.XLWorksheet")) && (olua_is_string(L, 2))) {
            // OpenXLSX::XLCellRange range(const std::string &rangeReference)
            return _olua_fun_OpenXLSX_XLWorksheet_range$4(L);
        // }
    }

    if (num_args == 3) {
        if ((olua_is_object(L, 1, "openxlsx.XLWorksheet")) && (olua_is_object(L, 2, "openxlsx.XLCellReference") || olua_is_string(L, 2)) && (olua_is_object(L, 3, "openxlsx.XLCellReference") || olua_is_string(L, 3))) {
            // OpenXLSX::XLCellRange range(const OpenXLSX::XLCellReference &topLeft, const OpenXLSX::XLCellReference &bottomRight)
            return _olua_fun_OpenXLSX_XLWorksheet_range$2(L);
        }

        // if ((olua_is_object(L, 1, "openxlsx.XLWorksheet")) && (olua_is_string(L, 2)) && (olua_is_string(L, 3))) {
            // OpenXLSX::XLCellRange range(const std::string &topLeft, const std::string &bottomRight)
            return _olua_fun_OpenXLSX_XLWorksheet_range$3(L);
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

static int _olua_fun_OpenXLSX_XLWorksheet_setColumnFormat$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLWorksheet *self = nullptr;
        uint16_t arg1 = 0;       /** column */
        OpenXLSX::XLStyleIndex arg2 = 0;       /** cellFormatIndex */

        olua_to_object(L, 1, &self, "openxlsx.XLWorksheet");
        olua_check_integer(L, 2, &arg1);
        olua_check_integer(L, 3, &arg2);

        // bool setColumnFormat(uint16_t column, OpenXLSX::XLStyleIndex cellFormatIndex)
        bool ret = self->setColumnFormat(arg1, arg2);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLWorksheet::setColumnFormat(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLWorksheet_setColumnFormat$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLWorksheet *self = nullptr;
        std::string arg1;       /** column */
        OpenXLSX::XLStyleIndex arg2 = 0;       /** cellFormatIndex */

        olua_to_object(L, 1, &self, "openxlsx.XLWorksheet");
        olua_check_string(L, 2, &arg1);
        olua_check_integer(L, 3, &arg2);

        // bool setColumnFormat(const std::string &column, OpenXLSX::XLStyleIndex cellFormatIndex)
        bool ret = self->setColumnFormat(arg1, arg2);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLWorksheet::setColumnFormat(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLWorksheet_setColumnFormat(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 3) {
        if ((olua_is_object(L, 1, "openxlsx.XLWorksheet")) && (olua_is_integer(L, 2)) && (olua_is_integer(L, 3))) {
            // bool setColumnFormat(uint16_t column, OpenXLSX::XLStyleIndex cellFormatIndex)
            return _olua_fun_OpenXLSX_XLWorksheet_setColumnFormat$1(L);
        }

        // if ((olua_is_object(L, 1, "openxlsx.XLWorksheet")) && (olua_is_string(L, 2)) && (olua_is_integer(L, 3))) {
            // bool setColumnFormat(const std::string &column, OpenXLSX::XLStyleIndex cellFormatIndex)
            return _olua_fun_OpenXLSX_XLWorksheet_setColumnFormat$2(L);
        // }
    }

    luaL_error(L, "method 'OpenXLSX::XLWorksheet::setColumnFormat' not support '%d' arguments", num_args);

    return 0;
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

static int _olua_fun_OpenXLSX_XLWorksheet_setRowFormat(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLWorksheet *self = nullptr;
        uint32_t arg1 = 0;       /** row */
        OpenXLSX::XLStyleIndex arg2 = 0;       /** cellFormatIndex */

        olua_to_object(L, 1, &self, "openxlsx.XLWorksheet");
        olua_check_integer(L, 2, &arg1);
        olua_check_integer(L, 3, &arg2);

        // bool setRowFormat(uint32_t row, OpenXLSX::XLStyleIndex cellFormatIndex)
        bool ret = self->setRowFormat(arg1, arg2);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLWorksheet::setRowFormat(): %s", e.what());
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

static int _olua_fun_OpenXLSX_XLWorksheet_unmergeCells$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLWorksheet *self = nullptr;
        OpenXLSX::XLCellRange *arg1;       /** rangeToUnmerge */

        olua_to_object(L, 1, &self, "openxlsx.XLWorksheet");
        olua_check_object(L, 2, &arg1, "openxlsx.XLCellRange");

        // void unmergeCells(const OpenXLSX::XLCellRange &rangeToUnmerge)
        self->unmergeCells(*arg1);

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLWorksheet::unmergeCells(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLWorksheet_unmergeCells$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLWorksheet *self = nullptr;
        std::string arg1;       /** rangeReference */

        olua_to_object(L, 1, &self, "openxlsx.XLWorksheet");
        olua_check_string(L, 2, &arg1);

        // void unmergeCells(const std::string &rangeReference)
        self->unmergeCells(arg1);

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLWorksheet::unmergeCells(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLWorksheet_unmergeCells(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 2) {
        if ((olua_is_object(L, 1, "openxlsx.XLWorksheet")) && (olua_is_object(L, 2, "openxlsx.XLCellRange"))) {
            // void unmergeCells(const OpenXLSX::XLCellRange &rangeToUnmerge)
            return _olua_fun_OpenXLSX_XLWorksheet_unmergeCells$1(L);
        }

        // if ((olua_is_object(L, 1, "openxlsx.XLWorksheet")) && (olua_is_string(L, 2))) {
            // void unmergeCells(const std::string &rangeReference)
            return _olua_fun_OpenXLSX_XLWorksheet_unmergeCells$2(L);
        // }
    }

    luaL_error(L, "method 'OpenXLSX::XLWorksheet::unmergeCells' not support '%d' arguments", num_args);

    return 0;
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
    oluacls_func(L, "getColumnFormat", _olua_fun_OpenXLSX_XLWorksheet_getColumnFormat);
    oluacls_func(L, "getRowFormat", _olua_fun_OpenXLSX_XLWorksheet_getRowFormat);
    oluacls_func(L, "index", _olua_fun_OpenXLSX_XLWorksheet_index);
    oluacls_func(L, "isActive", _olua_fun_OpenXLSX_XLWorksheet_isActive);
    oluacls_func(L, "isSelected", _olua_fun_OpenXLSX_XLWorksheet_isSelected);
    oluacls_func(L, "lastCell", _olua_fun_OpenXLSX_XLWorksheet_lastCell);
    oluacls_func(L, "mergeCells", _olua_fun_OpenXLSX_XLWorksheet_mergeCells);
    oluacls_func(L, "merges", _olua_fun_OpenXLSX_XLWorksheet_merges);
    oluacls_func(L, "name", _olua_fun_OpenXLSX_XLWorksheet_name);
    oluacls_func(L, "new", _olua_fun_OpenXLSX_XLWorksheet_new);
    oluacls_func(L, "range", _olua_fun_OpenXLSX_XLWorksheet_range);
    oluacls_func(L, "row", _olua_fun_OpenXLSX_XLWorksheet_row);
    oluacls_func(L, "rowCount", _olua_fun_OpenXLSX_XLWorksheet_rowCount);
    oluacls_func(L, "rows", _olua_fun_OpenXLSX_XLWorksheet_rows);
    oluacls_func(L, "setActive", _olua_fun_OpenXLSX_XLWorksheet_setActive);
    oluacls_func(L, "setColor", _olua_fun_OpenXLSX_XLWorksheet_setColor);
    oluacls_func(L, "setColumnFormat", _olua_fun_OpenXLSX_XLWorksheet_setColumnFormat);
    oluacls_func(L, "setIndex", _olua_fun_OpenXLSX_XLWorksheet_setIndex);
    oluacls_func(L, "setName", _olua_fun_OpenXLSX_XLWorksheet_setName);
    oluacls_func(L, "setRowFormat", _olua_fun_OpenXLSX_XLWorksheet_setRowFormat);
    oluacls_func(L, "setSelected", _olua_fun_OpenXLSX_XLWorksheet_setSelected);
    oluacls_func(L, "setVisibility", _olua_fun_OpenXLSX_XLWorksheet_setVisibility);
    oluacls_func(L, "unmergeCells", _olua_fun_OpenXLSX_XLWorksheet_unmergeCells);
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

static int _olua_fun_OpenXLSX_XLDocument_create$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLDocument *self = nullptr;
        std::string arg1;       /** fileName */
        bool arg2 = false;       /** forceOverwrite */

        olua_to_object(L, 1, &self, "openxlsx.XLDocument");
        olua_check_string(L, 2, &arg1);
        olua_check_bool(L, 3, &arg2);

        // void create(const std::string &fileName, bool forceOverwrite)
        self->create(arg1, arg2);

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLDocument::create(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLDocument_create$2(lua_State *L)
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

static int _olua_fun_OpenXLSX_XLDocument_create(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "openxlsx.XLDocument")) && (olua_is_string(L, 2))) {
            // void create(const std::string &fileName)
            return _olua_fun_OpenXLSX_XLDocument_create$2(L);
        // }
    }

    if (num_args == 3) {
        // if ((olua_is_object(L, 1, "openxlsx.XLDocument")) && (olua_is_string(L, 2)) && (olua_is_bool(L, 3))) {
            // void create(const std::string &fileName, bool forceOverwrite)
            return _olua_fun_OpenXLSX_XLDocument_create$1(L);
        // }
    }

    luaL_error(L, "method 'OpenXLSX::XLDocument::create' not support '%d' arguments", num_args);

    return 0;
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

static int _olua_fun_OpenXLSX_XLDocument_saveAs$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLDocument *self = nullptr;
        std::string arg1;       /** fileName */
        bool arg2 = false;       /** forceOverwrite */

        olua_to_object(L, 1, &self, "openxlsx.XLDocument");
        olua_check_string(L, 2, &arg1);
        olua_check_bool(L, 3, &arg2);

        // void saveAs(const std::string &fileName, bool forceOverwrite)
        self->saveAs(arg1, arg2);

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLDocument::saveAs(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLDocument_saveAs$2(lua_State *L)
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

static int _olua_fun_OpenXLSX_XLDocument_saveAs(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "openxlsx.XLDocument")) && (olua_is_string(L, 2))) {
            // void saveAs(const std::string &fileName)
            return _olua_fun_OpenXLSX_XLDocument_saveAs$2(L);
        // }
    }

    if (num_args == 3) {
        // if ((olua_is_object(L, 1, "openxlsx.XLDocument")) && (olua_is_string(L, 2)) && (olua_is_bool(L, 3))) {
            // void saveAs(const std::string &fileName, bool forceOverwrite)
            return _olua_fun_OpenXLSX_XLDocument_saveAs$1(L);
        // }
    }

    luaL_error(L, "method 'OpenXLSX::XLDocument::saveAs' not support '%d' arguments", num_args);

    return 0;
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

static int _olua_fun_OpenXLSX_XLDocument_setSavingDeclaration(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLDocument *self = nullptr;
        OpenXLSX::XLXmlSavingDeclaration *arg1;       /** savingDeclaration */

        olua_to_object(L, 1, &self, "openxlsx.XLDocument");
        olua_check_object(L, 2, &arg1, "openxlsx.XLXmlSavingDeclaration");

        // void setSavingDeclaration(const OpenXLSX::XLXmlSavingDeclaration &savingDeclaration)
        self->setSavingDeclaration(*arg1);

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLDocument::setSavingDeclaration(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLDocument_showWarnings(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLDocument *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLDocument");

        // void showWarnings()
        self->showWarnings();

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLDocument::showWarnings(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLDocument_styles(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLDocument *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLDocument");

        // OpenXLSX::XLStyles &styles()
        OpenXLSX::XLStyles &ret = self->styles();
        int num_ret = olua_push_object(L, &ret, "openxlsx.XLStyles");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLDocument::styles(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_OpenXLSX_XLDocument_suppressWarnings(lua_State *L)
{
    try {
        olua_startinvoke(L);

        OpenXLSX::XLDocument *self = nullptr;

        olua_to_object(L, 1, &self, "openxlsx.XLDocument");

        // void suppressWarnings()
        self->suppressWarnings();

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "OpenXLSX::XLDocument::suppressWarnings(): %s", e.what());
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
    oluacls_func(L, "setSavingDeclaration", _olua_fun_OpenXLSX_XLDocument_setSavingDeclaration);
    oluacls_func(L, "showWarnings", _olua_fun_OpenXLSX_XLDocument_showWarnings);
    oluacls_func(L, "styles", _olua_fun_OpenXLSX_XLDocument_styles);
    oluacls_func(L, "suppressWarnings", _olua_fun_OpenXLSX_XLDocument_suppressWarnings);
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
    olua_require(L, "openxlsx.XLStyles", _olua_cls_openxlsx_XLStyles);
    olua_require(L, "openxlsx.XLBorders", _olua_cls_openxlsx_XLBorders);
    olua_require(L, "openxlsx.XLBorder", _olua_cls_openxlsx_XLBorder);
    olua_require(L, "openxlsx.XLFormulaProxy", _olua_cls_openxlsx_XLFormulaProxy);
    olua_require(L, "openxlsx.XLCellValueProxy", _olua_cls_openxlsx_XLCellValueProxy);
    olua_require(L, "openxlsx.XLCell", _olua_cls_openxlsx_XLCell);
    olua_require(L, "openxlsx.XLCellReference", _olua_cls_openxlsx_XLCellReference);
    olua_require(L, "openxlsx.XLCellAssignable", _olua_cls_openxlsx_XLCellAssignable);
    olua_require(L, "openxlsx.XLMergeCells", _olua_cls_openxlsx_XLMergeCells);
    olua_require(L, "openxlsx.XLCellFormats", _olua_cls_openxlsx_XLCellFormats);
    olua_require(L, "openxlsx.XLCellFormat", _olua_cls_openxlsx_XLCellFormat);
    olua_require(L, "openxlsx.XLAlignment", _olua_cls_openxlsx_XLAlignment);
    olua_require(L, "openxlsx.XLAlignmentStyle", _olua_cls_openxlsx_XLAlignmentStyle);
    olua_require(L, "openxlsx.XLCellStyles", _olua_cls_openxlsx_XLCellStyles);
    olua_require(L, "openxlsx.XLCellStyle", _olua_cls_openxlsx_XLCellStyle);
    olua_require(L, "openxlsx.XLFills", _olua_cls_openxlsx_XLFills);
    olua_require(L, "openxlsx.XLFill", _olua_cls_openxlsx_XLFill);
    olua_require(L, "openxlsx.XLFillType", _olua_cls_openxlsx_XLFillType);
    olua_require(L, "openxlsx.XLFonts", _olua_cls_openxlsx_XLFonts);
    olua_require(L, "openxlsx.XLFont", _olua_cls_openxlsx_XLFont);
    olua_require(L, "openxlsx.XLFontSchemeStyle", _olua_cls_openxlsx_XLFontSchemeStyle);
    olua_require(L, "openxlsx.XLGradientStops", _olua_cls_openxlsx_XLGradientStops);
    olua_require(L, "openxlsx.XLGradientStop", _olua_cls_openxlsx_XLGradientStop);
    olua_require(L, "openxlsx.XLDataBarColor", _olua_cls_openxlsx_XLDataBarColor);
    olua_require(L, "openxlsx.XLGradientType", _olua_cls_openxlsx_XLGradientType);
    olua_require(L, "openxlsx.XLLine", _olua_cls_openxlsx_XLLine);
    olua_require(L, "openxlsx.XLLineStyle", _olua_cls_openxlsx_XLLineStyle);
    olua_require(L, "openxlsx.XLLineType", _olua_cls_openxlsx_XLLineType);
    olua_require(L, "openxlsx.XLNumberFormats", _olua_cls_openxlsx_XLNumberFormats);
    olua_require(L, "openxlsx.XLNumberFormat", _olua_cls_openxlsx_XLNumberFormat);
    olua_require(L, "openxlsx.XLPatternType", _olua_cls_openxlsx_XLPatternType);
    olua_require(L, "openxlsx.XLUnderlineStyle", _olua_cls_openxlsx_XLUnderlineStyle);
    olua_require(L, "openxlsx.XLUnsupportedElement", _olua_cls_openxlsx_XLUnsupportedElement);
    olua_require(L, "openxlsx.XLVerticalAlignRunStyle", _olua_cls_openxlsx_XLVerticalAlignRunStyle);
    olua_require(L, "openxlsx.XLXmlSavingDeclaration", _olua_cls_openxlsx_XLXmlSavingDeclaration);
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
