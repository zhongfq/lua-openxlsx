---AUTO GENERATED, DO NOT MODIFY!
---@meta openxlsx.XLStyles

---An encapsulation of the styles file (xl/styles.xml) in an Excel document package.
---@class openxlsx.XLStyles : openxlsx.XLXmlFile
local XLStyles = {}

---Get the borders object
---@return openxlsx.XLBorders # An XLBorders object
function XLStyles:borders() end

---Get the cell formats object
---@return openxlsx.XLCellFormats # An XLCellFormats object
function XLStyles:cellFormats() end

---Get the cell style formats object
---@return openxlsx.XLCellFormats # An XLCellFormats object
function XLStyles:cellStyleFormats() end

---Get the cell styles object
---@return openxlsx.XLCellStyles # An XLCellStyles object
function XLStyles:cellStyles() end

---Get the fills object
---@return openxlsx.XLFills # An XLFills object
function XLStyles:fills() end

---Get the fonts object
---@return openxlsx.XLFonts # An XLFonts object
function XLStyles:fonts() end

---@return openxlsx.XLStyles
---
---
---\param xmlData
---\param suppressWarnings if true (SUPRESS_WARNINGS), messages such as "XLStyles: Ignoring currently unsupported <dxfs> node" will be silenced
---\param stylesPrefix Prefix any newly created root style nodes with this text as pugi::node_pcdata
---@overload fun(xmlData: openxlsx.XLXmlData, suppressWarnings: boolean, stylesPrefix: string): openxlsx.XLStyles
---
---
---\param xmlData
---\param suppressWarnings if true (SUPRESS_WARNINGS), messages such as "XLStyles: Ignoring currently unsupported <dxfs> node" will be silenced
---\param stylesPrefix Prefix any newly created root style nodes with this text as pugi::node_pcdata
---@overload fun(xmlData: openxlsx.XLXmlData): openxlsx.XLStyles
---
---
---\param xmlData
---\param suppressWarnings if true (SUPRESS_WARNINGS), messages such as "XLStyles: Ignoring currently unsupported <dxfs> node" will be silenced
---\param stylesPrefix Prefix any newly created root style nodes with this text as pugi::node_pcdata
---@overload fun(xmlData: openxlsx.XLXmlData, suppressWarnings: boolean): openxlsx.XLStyles
function XLStyles.new() end

---Get the number formats object
---@return openxlsx.XLNumberFormats # An XLNumberFormats object
function XLStyles:numberFormats() end

return XLStyles