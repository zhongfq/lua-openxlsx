---AUTO GENERATED, DO NOT MODIFY!
---@meta openxlsx.XLCell

---An implementation class encapsulating the properties and behaviours of a spreadsheet cell.
---@class openxlsx.XLCell 
---@field string string 
local XLCell = {}

---
---@param lhs openxlsx.XLCell # 
---@param rhs openxlsx.XLCell # 
---@return boolean # 
function XLCell.__eq(lhs, rhs) end

---@return any
function XLCell:__gc() end

---Get the array index of xl/styles.xml:<styleSheet>:<cellXfs> for the style used in this cell.
---This value is stored in the s attribute of a cell like so: s="2"
---@return integer # s The index of the applicable format style
function XLCell:cellFormat() end

---get the XLCellReference object for the cell.
---@return openxlsx.XLCellReference # A reference to the cells' XLCellReference object.
function XLCell:cellReference() end

---clear all cell content and attributes except for the cell reference (attribute r)
---@param keep integer # do not clear cell properties whose flags are set in keep (XLKeepCellStyle, XLKeepCellType,
---XLKeepCellValue, XLKeepCellFormula), flags can be combined with bitwise OR
function XLCell:clear(keep) end

---Copy contents of a cell, value & formula
---@param other openxlsx.XLCell # The XLCell object from which to copy
function XLCell:copyFrom(other) end

---test if cell object has no (valid) content
---@return boolean # 
function XLCell:empty() end

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

---Set the cell style (attribute s) with a reference to the array index of xl/styles.xml:<styleSheet>:<cellXfs>
---@param cellFormatIndex integer # The style to set, corresponding to the nidex of XLStyles::cellStyles()
---@return boolean # s True on success, false on failure
function XLCell:setCellFormat(cellFormatIndex) end

---
---@return openxlsx.XLCellValueProxy # 
function XLCell:value() end

return XLCell