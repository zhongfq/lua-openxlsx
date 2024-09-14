---AUTO GENERATED, DO NOT MODIFY!
---@meta openxlsx.XLCell

---An implementation class encapsulating the properties and behaviours of a spreadsheet cell.
---@class openxlsx.XLCell 
---@field string string 
local XLCell = {}

---@return any
function XLCell:__gc() end

---get the XLCellReference object for the cell.
---@return openxlsx.XLCellReference # A reference to the cells' XLCellReference object.
function XLCell:cellReference() end

---Copy contents of a cell, value & formula
---@param other openxlsx.XLCell # The XLCell object from which to copy
function XLCell:copyFrom(other) end

---
---@return openxlsx.XLFormulaProxy # 
function XLCell:formula() end

---@return string
function XLCell:getString() end

---
---@return boolean # 
function XLCell:hasFormula() end

---Default constructor. Constructs a null object.
---@return openxlsx.XLCell
function XLCell.new() end

---get the XLCell object from the current cell offset
---@return openxlsx.XLCell # A reference to the XLCell object.
---@param rowOffset integer
---@param colOffset integer
function XLCell:offset(rowOffset, colOffset) end

---
---@return openxlsx.XLCellValueProxy # 
function XLCell:value() end

return XLCell