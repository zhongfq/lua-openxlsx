---AUTO GENERATED, DO NOT MODIFY!
---@meta openxlsx.XLColumn

---
---@class openxlsx.XLColumn 
---@field hidden boolean Is the column hidden? \return The state of the column.
local XLColumn = {}

---@return any
function XLColumn:__gc() end

---Get the array index of xl/styles.xml:<styleSheet>:<cellXfs> for the style assigned to the column.
---This value is stored in the col attributes like so: style="2"
---@return integer # s The index of the applicable format style
function XLColumn:format() end

---Is the column hidden?
---@return boolean # The state of the column.
function XLColumn:isHidden() end

---Set the column style as a reference to the array index of xl/styles.xml:<styleSheet>:<cellXfs>
---@param cellFormatIndex integer # The style to set, corresponding to the index of XLStyles::cellStyles()
---@return boolean # s true on success, false on failure
function XLColumn:setFormat(cellFormatIndex) end

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