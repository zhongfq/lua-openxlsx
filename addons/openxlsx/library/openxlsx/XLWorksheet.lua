---AUTO GENERATED, DO NOT MODIFY!
---@meta openxlsx.XLWorksheet

---A class encapsulating an Excel worksheet. Access to XLWorksheet objects should be via the workbook object.
---@class openxlsx.XLWorksheet 
---@field active boolean  \return
---@field selected boolean  \return
local XLWorksheet = {}

---@return any
function XLWorksheet:__gc() end

---
---@param ref string # 
---@return openxlsx.XLCellAssignable # 
---
---Get a pointer to the XLCell object for the given cell reference.
---\param ref An XLCellReference object with the address of the cell to get.
---\return A const reference to the requested XLCell object.
---@overload fun(self: openxlsx.XLWorksheet, ref: openxlsx.XLCellReference|string): openxlsx.XLCell
---
---Get the cell at the given coordinates.
---\param rowNumber The row number (index base 1).
---\param columnNumber The column number (index base 1).
---\return A reference to the XLCell object at the given coordinates.
---@overload fun(self: openxlsx.XLWorksheet, rowNumber: integer, columnNumber: integer): openxlsx.XLCell
function XLWorksheet:cell(ref) end

---Method for cloning the sheet.
---@param newName string # A std::string with the name of the clone
---\return A pointer to the cloned object.
---\note This is a pure abstract method. I.e. it is implemented in subclasses.
function XLWorksheet:clone(newName) end

---
---@return openxlsx.XLColor # 
---\todo To be implemented.
function XLWorksheet:color() end

---Get the column with the given column number.
---@param columnNumber integer # The number of the column to retrieve.
---@return openxlsx.XLColumn # A pointer to the XLColumn object.
function XLWorksheet:column(columnNumber) end

---Get the number of columns in the worksheet.
---@return integer # The number of columns.
function XLWorksheet:columnCount() end

---
---@return integer # 
function XLWorksheet:index() end

---
---@return boolean # 
function XLWorksheet:isActive() end

---
---@return boolean # 
function XLWorksheet:isSelected() end

---Get an XLCellReference to the last (bottom right) cell in the worksheet.
---@return openxlsx.XLCellReference # An XLCellReference for the last cell.
function XLWorksheet:lastCell() end

---Method to retrieve the name of the sheet.
---@return string # A std::string with the sheet name.
function XLWorksheet:name() end

---Default constructor
---@return openxlsx.XLWorksheet
---
---
---\param xmlData
---@overload fun(xmlData: openxlsx.XLXmlData): openxlsx.XLWorksheet
function XLWorksheet.new() end

---Get a range for the area currently in use (i.e. from cell A1 to the last cell being in use).
---@return openxlsx.XLCellRange # A const XLCellRange object with the entire range.
---
---Get a range with the given coordinates.
---\param topLeft An XLCellReference object with the coordinates to the top left cell.
---\param bottomRight An XLCellReference object with the coordinates to the bottom right cell.
---\return A const XLCellRange object with the requested range.
---@overload fun(self: openxlsx.XLWorksheet, topLeft: openxlsx.XLCellReference|string, bottomRight: openxlsx.XLCellReference|string): openxlsx.XLCellRange
function XLWorksheet:range() end

---Get the row with the given row number.
---@param rowNumber integer # The number of the row to retrieve.
---@return openxlsx.XLRow # A pointer to the XLRow object.
function XLWorksheet:row(rowNumber) end

---Get the number of rows in the worksheet.
---@return integer # The number of rows.
function XLWorksheet:rowCount() end

---
---@return openxlsx.XLRowRange # 
---
---
---\param rowCount
---\return
---@overload fun(self: openxlsx.XLWorksheet, rowCount: integer): openxlsx.XLRowRange
---
---
---\param firstRow
---\param lastRow
---\return
---@overload fun(self: openxlsx.XLWorksheet, firstRow: integer, lastRow: integer): openxlsx.XLRowRange
function XLWorksheet:rows() end

---@return boolean
function XLWorksheet:setActive() end

---
---@param color openxlsx.XLColor # 
function XLWorksheet:setColor(color) end

---
---@param index integer # 
function XLWorksheet:setIndex(index) end

---Method for renaming the sheet.
---@param sheetName string # A std::string with the new name.
function XLWorksheet:setName(sheetName) end

---
---@param selected boolean # 
function XLWorksheet:setSelected(selected) end

---
---@param state openxlsx.XLSheetState # 
function XLWorksheet:setVisibility(state) end

---
---@param oldName string # 
---@param newName string # 
function XLWorksheet:updateSheetName(oldName, newName) end

---
---@return openxlsx.XLSheetState # 
function XLWorksheet:visibility() end

return XLWorksheet