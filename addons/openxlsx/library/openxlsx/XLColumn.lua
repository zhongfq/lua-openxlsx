---AUTO GENERATED, DO NOT MODIFY!
---@meta openxlsx.XLColumn

---
---@class openxlsx.XLColumn 
---@field hidden boolean Is the column hidden? \return The state of the column.
local XLColumn = {}

---@return any
function XLColumn:__gc() end

---Is the column hidden?
---@return boolean # The state of the column.
function XLColumn:isHidden() end

---Set the column to be shown or hidden.
---@param state boolean # The state of the column.
function XLColumn:setHidden(state) end

---Set the width of the column
---@param width number # The width of the column
function XLColumn:setWidth(width) end

---Get the width of the column.
---@return number # The width of the column.
function XLColumn:width() end

return XLColumn