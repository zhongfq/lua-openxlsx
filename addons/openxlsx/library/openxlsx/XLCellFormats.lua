---AUTO GENERATED, DO NOT MODIFY!
---@meta openxlsx.XLCellFormats

---An encapsulation of the XLSX cell style formats
---@class openxlsx.XLCellFormats 
local XLCellFormats = {}

---@return any
function XLCellFormats:__gc() end

---Get the cell style format description identified by index
---@param index integer # The index within the XML sequence
---@return openxlsx.XLCellFormat # An XLCellFormat object
function XLCellFormats:cellFormatByIndex(index) end

---Get the count of cell style format descriptions
---@return integer # The amount of cell style format description entries
function XLCellFormats:count() end

---Append a new XLCellFormat, based on copyFrom, and return its index
---in cellXfs (for XLStyles::cellFormats) or cellStyleXfs (for XLStyles::cellStyleFormats)
---@param copyFrom openxlsx.XLCellFormat # Can provide an XLCellFormat to use as template for the new style
---@param styleEntriesPrefix string # Prefix the newly created cell style XMLNode with this pugi::node_pcdata text
---@return integer # s The index of the new style as used by operator[]
---@overload fun(self: openxlsx.XLCellFormats): integer
---@overload fun(self: openxlsx.XLCellFormats, copyFrom: openxlsx.XLCellFormat): integer
function XLCellFormats:create(copyFrom, styleEntriesPrefix) end

---@return openxlsx.XLCellFormats
function XLCellFormats.new() end

return XLCellFormats