---AUTO GENERATED, DO NOT MODIFY!
---@meta openxlsx.XLNumberFormat

---An encapsulation of a number format (numFmt) item
---@class openxlsx.XLNumberFormat 
local XLNumberFormat = {}

---@return any
function XLNumberFormat:__gc() end

---Get the code of the number format
---@return string # The format code for this number format
function XLNumberFormat:formatCode() end

---@return openxlsx.XLNumberFormat
function XLNumberFormat.new() end

---Get the id of the number format
---@return integer # The id for this number format
function XLNumberFormat:numberFormatId() end

---@param newFormatCode string
---@return boolean
function XLNumberFormat:setFormatCode(newFormatCode) end

---Setter functions for style parameters
---\param value that shall be set
---@return boolean # true for success, false for failure
---@param newNumberFormatId integer
function XLNumberFormat:setNumberFormatId(newNumberFormatId) end

---Return a string summary of the number format
---@return string # string with info about the number format object
function XLNumberFormat:summary() end

return XLNumberFormat