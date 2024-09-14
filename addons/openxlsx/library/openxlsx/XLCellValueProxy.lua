---AUTO GENERATED, DO NOT MODIFY!
---@meta openxlsx.XLCellValueProxy

---The XLCellValueProxy class is used for proxy (or placeholder) objects for XLCellValue objects.
---\details The XLCellValueProxy class is used for proxy (or placeholder) objects for XLCellValue objects.
---The purpose is to enable implicit conversion during assignment operations. XLCellValueProxy objects
---can not be constructed manually by the user, only through XLCell objects.
---@class openxlsx.XLCellValueProxy 
---@field bool boolean  \tparam T \return \todo Is an explicit conversion operator needed as well?
---@field int integer  \tparam T \return \todo Is an explicit conversion operator needed as well?
---@field number number  \tparam T \return \todo Is an explicit conversion operator needed as well?
---@field string string  \tparam T \return \todo Is an explicit conversion operator needed as well?
local XLCellValueProxy = {}

---@return any
function XLCellValueProxy:__gc() end

---Clear the contents of the cell.
---@return openxlsx.XLCellValueProxy # A reference to the current object.
function XLCellValueProxy:clear() end

---
---\tparam T
---@return boolean # 
---\todo Is an explicit conversion operator needed as well?
function XLCellValueProxy:getBool() end

---
---\tparam T
---@return integer # 
---\todo Is an explicit conversion operator needed as well?
function XLCellValueProxy:getInt() end

---
---\tparam T
---@return number # 
---\todo Is an explicit conversion operator needed as well?
function XLCellValueProxy:getNumber() end

---
---\tparam T
---@return string # 
---\todo Is an explicit conversion operator needed as well?
function XLCellValueProxy:getString() end

---
---\tparam T
---@param value boolean # 
function XLCellValueProxy:setBool(value) end

---Set the cell value to a error state.
---@return openxlsx.XLCellValueProxy # A reference to the current object.
---@param error string
function XLCellValueProxy:setError(error) end

---
---\tparam T
---@param value integer # 
function XLCellValueProxy:setInt(value) end

---
---\tparam T
---@param value number # 
function XLCellValueProxy:setNumber(value) end

---
---\tparam T
---@param value string # 
function XLCellValueProxy:setString(value) end

---Get the value type for the cell.
---@return openxlsx.XLValueType # An XLCellValue corresponding to the cell value.
function XLCellValueProxy:type() end

---Get the value type of the current object, as a string representation
---@return string # A std::string representation of the value type.
function XLCellValueProxy:typeAsString() end

return XLCellValueProxy