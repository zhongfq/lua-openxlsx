---AUTO GENERATED, DO NOT MODIFY!
---@meta openxlsx.XLSharedStrings

---This class encapsulate the Excel concept of Shared Strings. In Excel, instead of havig individual strings
---in each cell, cells have a reference to an entry in the SharedStrings register. This results in smalle file
---sizes, as repeated strings are referenced easily.
---@class openxlsx.XLSharedStrings : openxlsx.XLXmlFile
local XLSharedStrings = {}

---Append a new string to the list of shared strings.
---@param str string # The string to append.
---@return integer # An int32_t with the index of the appended string
function XLSharedStrings:appendString(str) end

---Clear the string at the given index.
---@param index integer # The index to clear.
---\note There is no 'deleteString' member function, as deleting a shared string node will invalidate the
---shared string indices for the cells in the spreadsheet. Instead use this member functions, which clears
---the contents of the string, but keeps the XMLNode holding the string.
function XLSharedStrings:clearString(index) end

---
---@param index integer # 
---@return string # 
function XLSharedStrings:getString(index) end

---
---@param str string # 
---@return integer # 
function XLSharedStrings:getStringIndex(str) end

---@return openxlsx.XLSharedStrings
function XLSharedStrings.new() end

---
---@param str string # 
---@return boolean # 
function XLSharedStrings:stringExists(str) end

return XLSharedStrings