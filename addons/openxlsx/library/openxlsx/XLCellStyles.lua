---AUTO GENERATED, DO NOT MODIFY!
---@meta openxlsx.XLCellStyles

---An encapsulation of the XLSX cell styles
---@class openxlsx.XLCellStyles 
local XLCellStyles = {}

---@return any
function XLCellStyles:__gc() end

---Get the cell style identified by index
---@return openxlsx.XLCellStyle # An XLCellStyle object
---@param index integer
function XLCellStyles:cellStyleByIndex(index) end

---Get the count of cell styles
---@return integer # The amount of entries in the cell styles
function XLCellStyles:count() end

---Append a new XLCellStyle, based on copyFrom, and return its index in cellStyles node
---@param copyFrom openxlsx.XLCellStyle # Can provide an XLCellStyle to use as template for the new style
---@param styleEntriesPrefix string # Prefix the newly created cell style XMLNode with this pugi::node_pcdata text
---@return integer # s The index of the new style as used by operator[]
---@overload fun(self: openxlsx.XLCellStyles): integer
---@overload fun(self: openxlsx.XLCellStyles, copyFrom: openxlsx.XLCellStyle): integer
function XLCellStyles:create(copyFrom, styleEntriesPrefix) end

---@return openxlsx.XLCellStyles
function XLCellStyles.new() end

return XLCellStyles