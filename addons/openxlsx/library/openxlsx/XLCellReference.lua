---AUTO GENERATED, DO NOT MODIFY!
---@meta openxlsx.XLCellReference

---
---@class openxlsx.XLCellReference 
local XLCellReference = {}

---@return any
function XLCellReference:__gc() end

---Get the address of the XLCellReference
---@return string # The address, e.g. 'A1'
function XLCellReference:address() end

---Get the column number of the XLCellReference.
---@return integer # The column number.
function XLCellReference:column() end

---Static helper function to convert column letter to column number (e.g. column 'A' becomes 1)
---@param column string # The column letter, e.g. 'A'
---@return integer # The column number.
function XLCellReference.columnAsNumber(column) end

---Static helper function to convert column number to column letter (e.g. column 1 becomes 'A')
---@param column integer # The column number.
---@return string # The column letter
function XLCellReference.columnAsString(column) end

---Static helper function to convert cell address to coordinates.
---@param address string # The address to be converted, e.g. 'A1'
---@return openxlsx.XLCoordinates # A std::pair<row, column>
function XLCellReference.coordinatesFromAddress(address) end

---Constructor taking a cell address as argument.
---@param cellAddress string # The address of the cell, e.g. 'A1'.
---\details The constructor creates a new XLCellReference from a string, e.g. 'A1'. If there's no input,
---the default reference will be cell A1.
---@return openxlsx.XLCellReference
---@overload fun(): openxlsx.XLCellReference
---
---Constructor taking the cell coordinates as arguments.
---\param row The row number of the cell.
---\param column The column number of the cell.
---@overload fun(row: integer, column: integer): openxlsx.XLCellReference
---
---Constructor taking the row number and the column letter as arguments.
---\param row The row number of the cell.
---\param column The column letter of the cell.
---@overload fun(row: integer, column: string): openxlsx.XLCellReference
function XLCellReference.new(cellAddress) end

---Get the row number of the XLCellReference.
---@return integer # The row.
function XLCellReference:row() end

---
---@param row string # 
---@return integer # 
function XLCellReference.rowAsNumber(row) end

---
---@param row integer # 
---@return string # 
function XLCellReference.rowAsString(row) end

---Set the address of the XLCellReference
---@param address string # The address, e.g. 'A1'
---\pre The address input string must be a valid Excel cell reference. Otherwise the behaviour is undefined.
function XLCellReference:setAddress(address) end

---Set the column number of the XLCellReference.
---@param column integer # The column number.
function XLCellReference:setColumn(column) end

---Set the row number for the XLCellReference.
---@param row integer # The row number.
function XLCellReference:setRow(row) end

---Set both row and column number of the XLCellReference.
---@param row integer # The row number.
---@param column integer # The column number.
function XLCellReference:setRowAndColumn(row, column) end

return XLCellReference