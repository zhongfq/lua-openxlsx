---AUTO GENERATED, DO NOT MODIFY!
---@meta openxlsx.XLDataBarColor

---An encapsulation of an XLSX Data Bar Color (CT_Color) item
---@class openxlsx.XLDataBarColor 
local XLDataBarColor = {}

---@return any
function XLDataBarColor:__gc() end

---currently unsupported getter stubs
---@return boolean
function XLDataBarColor:automatic() end

---@return integer
function XLDataBarColor:indexed() end

---@return openxlsx.XLDataBarColor
function XLDataBarColor.new() end

---Get the line color from the rgb attribute
---@return openxlsx.XLColor # An XLColor object
function XLDataBarColor:rgb() end

---@param newColor openxlsx.XLColor
---@return boolean
function XLDataBarColor:set(newColor) end

---@param set boolean
---@return boolean
---@overload fun(self: openxlsx.XLDataBarColor): boolean
function XLDataBarColor:setAutomatic(set) end

---@param newIndex integer
---@return boolean
function XLDataBarColor:setIndexed(newIndex) end

---Setter functions for data bar color parameters
---\param value that shall be set
---@return boolean # true for success, false for failure
---@param newColor openxlsx.XLColor
function XLDataBarColor:setRgb(newColor) end

---@param newTheme integer
---@return boolean
function XLDataBarColor:setTheme(newTheme) end

---@param newTint number
---@return boolean
function XLDataBarColor:setTint(newTint) end

---Return a string summary of the color properties
---@return string # string with info about the color object
function XLDataBarColor:summary() end

---@return integer
function XLDataBarColor:theme() end

---Get the line color tint
---@return number # A double value as stored in the "tint" attribute (should be between [-1.0;+1.0]), 0.0 if attribute does not exist
function XLDataBarColor:tint() end

return XLDataBarColor