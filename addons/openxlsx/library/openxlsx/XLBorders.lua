---AUTO GENERATED, DO NOT MODIFY!
---@meta openxlsx.XLBorders

---An encapsulation of the XLSX borders
---@class openxlsx.XLBorders 
local XLBorders = {}

---@return any
function XLBorders:__gc() end

---Get the border description identified by index
---@param index integer # The index within the XML sequence
---@return openxlsx.XLBorder # An XLBorder object
function XLBorders:borderByIndex(index) end

---Get the count of border descriptions
---@return integer # The amount of border description entries
function XLBorders:count() end

---Append a new XLBorder, based on copyFrom, and return its index in borders node
---@param copyFrom openxlsx.XLBorder # Can provide an XLBorder to use as template for the new style
---@param styleEntriesPrefix string # Prefix the newly created cell style XMLNode with this pugi::node_pcdata text
---@return integer # s The index of the new style as used by operator[]
---@overload fun(self: openxlsx.XLBorders): integer
---@overload fun(self: openxlsx.XLBorders, copyFrom: openxlsx.XLBorder): integer
function XLBorders:create(copyFrom, styleEntriesPrefix) end

---@return openxlsx.XLBorders
function XLBorders.new() end

return XLBorders