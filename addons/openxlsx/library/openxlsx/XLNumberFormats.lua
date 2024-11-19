---AUTO GENERATED, DO NOT MODIFY!
---@meta openxlsx.XLNumberFormats

---An encapsulation of the XLSX number formats (numFmts)
---@class openxlsx.XLNumberFormats 
local XLNumberFormats = {}

---@return any
function XLNumberFormats:__gc() end

---Get the count of number formats
---@return integer # The amount of entries in the number formats
function XLNumberFormats:count() end

---Append a new XLNumberFormat, based on copyFrom, and return its index in numFmts node
---@param copyFrom openxlsx.XLNumberFormat # Can provide an XLNumberFormat to use as template for the new style
---@param styleEntriesPrefix string # Prefix the newly created cell style XMLNode with this pugi::node_pcdata text
---@return integer # s The index of the new style as used by operator[]
---\todo: TBD assign a unique, non-reserved uint32_t numFmtId. Alternatively, the user should configure it manually via setNumberFormatId
---\todo: TBD implement a "getFreeNumberFormatId()" method that skips reserved identifiers and iterates over m_numberFormats to avoid
---all existing number format Ids.
---@overload fun(self: openxlsx.XLNumberFormats): integer
---@overload fun(self: openxlsx.XLNumberFormats, copyFrom: openxlsx.XLNumberFormat): integer
function XLNumberFormats:create(copyFrom, styleEntriesPrefix) end

---@return openxlsx.XLNumberFormats
function XLNumberFormats.new() end

---Get the number format identified by numberFormatId
---@param numberFormatId integer # a numFmtId reference to a number format
---@return openxlsx.XLNumberFormat # An XLNumberFormat object
---\throw XLException if no match for numberFormatId is found within m_numberFormats
function XLNumberFormats:numberFormatById(numberFormatId) end

---Get the number format identified by index
---@param index integer # an array index within XLStyles::numberFormats()
---@return openxlsx.XLNumberFormat # An XLNumberFormat object
---\throw XLException when index is out of m_numberFormats range
function XLNumberFormats:numberFormatByIndex(index) end

---Get the numFmtId from the number format identified by index
---@param index integer # an array index within XLStyles::numberFormats()
---@return integer # the uint32_t numFmtId corresponding to index
---\throw XLException when index is out of m_numberFormats range
function XLNumberFormats:numberFormatIdFromIndex(index) end

return XLNumberFormats