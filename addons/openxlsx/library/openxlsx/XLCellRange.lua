---AUTO GENERATED, DO NOT MODIFY!
---@meta openxlsx.XLCellRange

---This class encapsulates the concept of a cell range, i.e. a square area
---(or subset) of cells in a spreadsheet.
---@class openxlsx.XLCellRange 
local XLCellRange = {}

---@return any
function XLCellRange:__gc() end

function XLCellRange:clear() end

---Get the number of columns in the range.
---@return integer # The number of columns.
function XLCellRange:numColumns() end

---Get the number of rows in the range.
---@return integer # The number of rows.
function XLCellRange:numRows() end

return XLCellRange