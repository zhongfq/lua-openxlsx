---AUTO GENERATED, DO NOT MODIFY!
---@meta openxlsx.XLCellRange

---This class encapsulates the concept of a cell range, i.e. a square area
---(or subset) of cells in a spreadsheet.
---@class openxlsx.XLCellRange 
local XLCellRange = {}

---@return any
function XLCellRange:__gc() end

---@return any
function XLCellRange:__pairs() end

---get the string reference that corresponds to the represented cell range
---@return string # a std::string range reference, e.g. "A2:Z5"
function XLCellRange:address() end

---get the bottom right cell
---@return openxlsx.XLCellReference # a const XLCellReference
function XLCellRange:bottomRight() end

function XLCellRange:clear() end

---populate the m_columnStyles
---\return a const XLCellReference
function XLCellRange:fetchColumnStyles() end

---Default constructor for variable declaration
---@return openxlsx.XLCellRange
function XLCellRange.new() end

---Get the number of columns in the range.
---@return integer # The number of columns.
function XLCellRange:numColumns() end

---Get the number of rows in the range.
---@return integer # The number of rows.
function XLCellRange:numRows() end

---Set cell format for a range of cells
---@param cellFormatIndex integer # The style to set, corresponding to the nidex of XLStyles::cellStyles()
---@return boolean # s true on success, false on failure
function XLCellRange:setFormat(cellFormatIndex) end

---get the top left cell
---@return openxlsx.XLCellReference # a const XLCellReference
function XLCellRange:topLeft() end

return XLCellRange