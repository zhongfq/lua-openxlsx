---AUTO GENERATED, DO NOT MODIFY!
---@meta openxlsx.XLCellStyle

---An encapsulation of a cell style item
---@class openxlsx.XLCellStyle 
local XLCellStyle = {}

---@return any
function XLCellStyle:__gc() end

---Get the built-in id of the cell style
---@return integer # The built-in id of the cell style
---\todo need to find a use case for this
function XLCellStyle:builtinId() end

---Get the custom buildin flag
---@return boolean # true if this cell style shall customize a built-in style
function XLCellStyle:customBuiltin() end

---Test if this is an empty node
---@return boolean # true if underlying XMLNode is empty
function XLCellStyle:empty() end

---Unsupported getter
---@return openxlsx.XLUnsupportedElement
function XLCellStyle:extLst() end

---Get the hidden flag of the cell style
---@return boolean # The hidden flag status (true: applications should not show this style)
function XLCellStyle:hidden() end

---Get the name of the cell style
---@return string # The name for this cell style entry
function XLCellStyle:name() end

---@return openxlsx.XLCellStyle
function XLCellStyle.new() end

---Get the outline style id (attribute iLevel) of the cell style
---@return integer # The outline style id of the cell style
---\todo need to find a use case for this
function XLCellStyle:outlineStyle() end

---@param newBuiltinId integer
---@return boolean
function XLCellStyle:setBuiltinId(newBuiltinId) end

---@param set boolean
---@return boolean
---@overload fun(self: openxlsx.XLCellStyle): boolean
function XLCellStyle:setCustomBuiltin(set) end

---Unsupported setter
---@param newExtLst openxlsx.XLUnsupportedElement
---@return boolean
function XLCellStyle:setExtLst(newExtLst) end

---@param set boolean
---@return boolean
---@overload fun(self: openxlsx.XLCellStyle): boolean
function XLCellStyle:setHidden(set) end

---Setter functions for style parameters
---\param value that shall be set
---@return boolean # true for success, false for failure
---@param newName string
function XLCellStyle:setName(newName) end

---@param newOutlineStyle integer
---@return boolean
function XLCellStyle:setOutlineStyle(newOutlineStyle) end

---@param newXfId integer
---@return boolean
function XLCellStyle:setXfId(newXfId) end

---Return a string summary of the cell style properties
---@return string # string with info about the cell style object
function XLCellStyle:summary() end

---Get the id of the cell style format
---@return integer # The id referring to an index in cell style formats (cellStyleXfs) - TBD to be confirmed
function XLCellStyle:xfId() end

return XLCellStyle