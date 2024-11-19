---AUTO GENERATED, DO NOT MODIFY!
---@meta openxlsx.XLRow

---The XLRow class represent a row in an Excel spreadsheet. Using XLRow objects, various row formatting
---options can be set and modified.
---@class openxlsx.XLRow 
---@field hidden boolean Is the row hidden? \return The state of the row.
local XLRow = {}

---
---@param lhs openxlsx.XLRow # 
---@param rhs openxlsx.XLRow # 
---@return boolean # 
function XLRow.__eq(lhs, rhs) end

---@return any
function XLRow:__gc() end

---
---@param lhs openxlsx.XLRow # 
---@param rhs openxlsx.XLRow # 
---@return boolean # 
function XLRow.__le(lhs, rhs) end

---
---@param lhs openxlsx.XLRow # 
---@param rhs openxlsx.XLRow # 
---@return boolean # 
function XLRow.__lt(lhs, rhs) end

---Get the number of cells in the row.
---@return integer # The number of cells in the row.
function XLRow:cellCount() end

---
---@return openxlsx.XLRowDataRange # 
---
---
---\param cellCount
---\return
---@overload fun(self: openxlsx.XLRow, cellCount: integer): openxlsx.XLRowDataRange
---
---
---\param firstCell
---\param lastCell
---\return
---@overload fun(self: openxlsx.XLRow, firstCell: integer, lastCell: integer): openxlsx.XLRowDataRange
function XLRow:cells() end

---Get the descent of the row, which is the vertical distance in pixels from the bottom of the cells
---in the current row to the typographical baseline of the cell content.
---@return number # The row descent.
function XLRow:descent() end

---Find a cell at columNumber, or return an empty cell
---@param columNumber integer # The column at which to check for an existing cell
---@return openxlsx.XLCell # An XLCell object (that bool-evaluates to false if cell was not found)
function XLRow:findCell(columNumber) end

---Get the array index of xl/styles.xml:<styleSheet>:<cellXfs> for the style assigned to the row.
---This value is stored in the row attributes like so: s="2"
---@return integer # s The index of the applicable format style
function XLRow:format() end

---Get the height of the row.
---@return number # the row height.
function XLRow:height() end

---Is the row hidden?
---@return boolean # The state of the row.
function XLRow:isHidden() end

---Default constructor
---@return openxlsx.XLRow
function XLRow.new() end

---
---@return integer # 
function XLRow:rowNumber() end

---Set the descent of the row, which is he vertical distance in pixels from the bottom of the cells
---in the current row to the typographical baseline of the cell content.
---@param descent number # The row descent.
function XLRow:setDescent(descent) end

---Set the row style as a reference to the array index of xl/styles.xml:<styleSheet>:<cellXfs>
---@param cellFormatIndex integer # The style to set, corresponding to the index of XLStyles::cellStyles()
---@return boolean # s true on success, false on failure
function XLRow:setFormat(cellFormatIndex) end

---Set the height of the row.
---@param height number # The height of the row.
function XLRow:setHeight(height) end

---Set the row to be hidden or visible.
---@param state boolean # The state of the row.
function XLRow:setHidden(state) end

---
---@return openxlsx.XLRowDataProxy # 
function XLRow:values() end

return XLRow