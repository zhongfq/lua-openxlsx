---AUTO GENERATED, DO NOT MODIFY!
---@meta openxlsx.XLGradientStops

---An encapsulation of an array of fill::gradientFill::stop items
---@class openxlsx.XLGradientStops 
local XLGradientStops = {}

---@return any
function XLGradientStops:__gc() end

---Get the count of gradient stops
---@return integer # The amount of stop entries
function XLGradientStops:count() end

---Append a new XLGradientStop, based on copyFrom, and return its index in fills node
---@param copyFrom openxlsx.XLGradientStop # Can provide an XLGradientStop to use as template for the new style
---\param stopEntriesPrefix Prefix the newly created stop XMLNode with this pugi::node_pcdata text
---@return integer # s The index of the new style as used by operator[]
---@param styleEntriesPrefix string
---@overload fun(self: openxlsx.XLGradientStops): integer
---@overload fun(self: openxlsx.XLGradientStops, copyFrom: openxlsx.XLGradientStop): integer
function XLGradientStops:create(copyFrom, styleEntriesPrefix) end

---@return openxlsx.XLGradientStops
function XLGradientStops.new() end

---Get the gradient stop entry identified by index
---@param index integer # The index within the XML sequence
---@return openxlsx.XLGradientStop # An XLGradientStop object
function XLGradientStops:stopByIndex(index) end

---@return string
function XLGradientStops:summary() end

return XLGradientStops