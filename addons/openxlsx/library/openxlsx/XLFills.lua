---AUTO GENERATED, DO NOT MODIFY!
---@meta openxlsx.XLFills

---An encapsulation of the XLSX fills
---@class openxlsx.XLFills 
local XLFills = {}

---@return any
function XLFills:__gc() end

---Get the count of fills
---@return integer # The amount of fill entries
function XLFills:count() end

---Append a new XLFill, based on copyFrom, and return its index in fills node
---@param copyFrom openxlsx.XLFill # Can provide an XLFill to use as template for the new style
---@param styleEntriesPrefix string # Prefix the newly created cell style XMLNode with this pugi::node_pcdata text
---@return integer # s The index of the new style as used by operator[]
---@overload fun(self: openxlsx.XLFills): integer
---@overload fun(self: openxlsx.XLFills, copyFrom: openxlsx.XLFill): integer
function XLFills:create(copyFrom, styleEntriesPrefix) end

---Get the fill entry identified by index
---@param index integer # The index within the XML sequence
---@return openxlsx.XLFill # An XLFill object
function XLFills:fillByIndex(index) end

---@return openxlsx.XLFills
function XLFills.new() end

return XLFills