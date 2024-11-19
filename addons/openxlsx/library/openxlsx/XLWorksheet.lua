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
---Get an XLCell object for the given cell reference.
---\param ref An XLCellReference object with the address of the cell to get.
---\return A reference to the requested XLCell object.
---@overload fun(self: openxlsx.XLWorksheet, ref: openxlsx.XLCellReference|string): openxlsx.XLCellAssignable
---
---Get the cell at the given coordinates.
---\param rowNumber The row number (index base 1).
---\param columnNumber The column number (index base 1).
---\return A reference to the XLCell object at the given coordinates.
---@overload fun(self: openxlsx.XLWorksheet, rowNumber: integer, columnNumber: integer): openxlsx.XLCellAssignable
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
---@return openxlsx.XLColumn # A reference to the XLColumn object.
---
---Get the column with the given column reference
---\param columnRef The letters referencing the given column
---\return A reference to the XLColumn object.
---@overload fun(self: openxlsx.XLWorksheet, columnRef: string): openxlsx.XLColumn
function XLWorksheet:column(columnNumber) end

---Get the number of columns in the worksheet.
---@return integer # The number of columns.
function XLWorksheet:columnCount() end

---Get the array index of xl/styles.xml:<styleSheet>:<cellXfs> for the style assigned to a column.
---This value is stored in the col attributes like so: style="2"
---@param column integer # The column letter(s) or index (1-based)
---@return integer # s The index of the applicable format style
---@overload fun(self: openxlsx.XLWorksheet, column: string): integer
function XLWorksheet:getColumnFormat(column) end

---get the array index of xl/styles.xml:<styleSheet>:<cellXfs> for the style assigned to a row
---this value is stored in the row attributes like so: s="2"
---@param row integer # the row index (1-based)
---@return integer # s the index of the applicable format style
function XLWorksheet:getRowFormat(row) end

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

---merge the cells indicated by range
---@param rangeToMerge openxlsx.XLCellRange # the XLCellRange to merge, can be obtained from XLWorksheet::range functions
---@param emptyHiddenCells boolean # if true (XLEmptyHiddenCells), the values of hidden cells will be deleted
---(only from the cells, not from the shared strings table, if used)
---\throws XLInputException if range comprises < 2 cells or any cell within rangeToMerge is already part of an existing range
---@overload fun(self: openxlsx.XLWorksheet, rangeToMerge: openxlsx.XLCellRange)
---
---Convenience wrapper for mergeCells with a std::string range reference
---\param rangeReference A range reference string for the cells to merge
---\param emptyHiddenCells as above
---@overload fun(self: openxlsx.XLWorksheet, rangeReference: string, emptyHiddenCells: boolean)
---
---Convenience wrapper for mergeCells with a std::string range reference
---\param rangeReference A range reference string for the cells to merge
---\param emptyHiddenCells as above
---@overload fun(self: openxlsx.XLWorksheet, rangeReference: string)
function XLWorksheet:mergeCells(rangeToMerge, emptyHiddenCells) end

---get an XLMergeCells object to directly access the member functions
---@return openxlsx.XLMergeCells # s an XLMergeCells object for this worksheet
function XLWorksheet:merges() end

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
---@return openxlsx.XLCellRange # An XLCellRange object with the entire range.
---
---Get a range with the given coordinates.
---\param topLeft An XLCellReference object with the coordinates to the top left cell.
---\param bottomRight An XLCellReference object with the coordinates to the bottom right cell.
---\return An XLCellRange object with the requested range.
---@overload fun(self: openxlsx.XLWorksheet, topLeft: openxlsx.XLCellReference|string, bottomRight: openxlsx.XLCellReference|string): openxlsx.XLCellRange
---
---Get a range with the given coordinates.
---\param topLeft A std::string that is convertible to an XLCellReference to the top left cell
---\param bottomRight A std::string that is convertible to an XLCellReference to the bottom right cell.
---\return An XLCellRange object with the requested range.
---@overload fun(self: openxlsx.XLWorksheet, topLeft: string, bottomRight: string): openxlsx.XLCellRange
---
---Get a range with the given coordinates.
---\param rangeReference A std::string that contains two XLCellReferences separated by a delimiter ':'
---Example "A2:B5"
---\return An XLCellRange object with the requested range.
---@overload fun(self: openxlsx.XLWorksheet, rangeReference: string): openxlsx.XLCellRange
function XLWorksheet:range() end

---Get the row with the given row number.
---@param rowNumber integer # The number of the row to retrieve.
---@return openxlsx.XLRow # A reference to the XLRow object.
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

---set the column style as a reference to the array index of xl/styles.xml:<styleSheet>:<cellXfs>
---Subsequently, set the same style for all existing(!) cells in that column
---@param column integer # the column letter(s) or index (1-based)
---@param cellFormatIndex integer # the style to set, corresponding to the index of XLStyles::cellStyles()
---@return boolean # s true on success, false on failure
---@overload fun(self: openxlsx.XLWorksheet, column: string, cellFormatIndex: integer): boolean
function XLWorksheet:setColumnFormat(column, cellFormatIndex) end

---
---@param index integer # 
function XLWorksheet:setIndex(index) end

---Method for renaming the sheet.
---@param sheetName string # A std::string with the new name.
function XLWorksheet:setName(sheetName) end

---set the row style as a reference to the array index of xl/styles.xml:<styleSheet>:<cellXfs>
---Subsequently, set the same style for all existing(!) cells in that row
---@param row integer # the row index (1-based)
---@param cellFormatIndex integer # the style to set, corresponding to the index of XLStyles::cellStyles()
---@return boolean # s true on success, false on failure
function XLWorksheet:setRowFormat(row, cellFormatIndex) end

---
---@param selected boolean # 
function XLWorksheet:setSelected(selected) end

---
---@param state openxlsx.XLSheetState # 
function XLWorksheet:setVisibility(state) end

---remove the merge setting for the indicated range
---@param rangeToUnmerge openxlsx.XLCellRange # the XLCellRange to unmerge, can be obtained from XLWorksheet::range functions
---\throws XLInputException if no merged range exists that matches rangeToMerge precisely
---
---Convenience wrapper for unmergeCells with a std::string range reference
---\param rangeReference A range reference string for the cells to unmerge
---@overload fun(self: openxlsx.XLWorksheet, rangeReference: string)
function XLWorksheet:unmergeCells(rangeToUnmerge) end

---
---@param oldName string # 
---@param newName string # 
function XLWorksheet:updateSheetName(oldName, newName) end

---
---@return openxlsx.XLSheetState # 
function XLWorksheet:visibility() end

return XLWorksheet