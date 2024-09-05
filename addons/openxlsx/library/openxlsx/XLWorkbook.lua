---AUTO GENERATED, DO NOT MODIFY!
---@meta openxlsx.XLWorkbook

---This class encapsulates the concept of a Workbook. It provides access to the individual sheets
---(worksheets or chartsheets), as well as functionality for adding, deleting, moving and renaming sheets.
---@class openxlsx.XLWorkbook : openxlsx.XLXmlFile
local XLWorkbook = {}

---
---@param sheetName string # 
function XLWorkbook:addWorksheet(sheetName) end

---Get the chartsheet with the given name.
---@param sheetName string # The name of the desired chartsheet.
---@return openxlsx.XLChartsheet # 
---
---Get the chartsheet at the given index.
---\param index The index at which the desired sheet is located.
---\return
---@overload fun(self: openxlsx.XLWorkbook, index: integer): openxlsx.XLChartsheet
function XLWorkbook:chartsheet(sheetName) end

---
---@return integer # 
function XLWorkbook:chartsheetCount() end

---
---@param sheetName string # 
---@return boolean # 
function XLWorkbook:chartsheetExists(sheetName) end

---
---@return string[] # 
function XLWorkbook:chartsheetNames() end

---
---@param existingName string # 
---@param newName string # 
function XLWorkbook:cloneSheet(existingName, newName) end

function XLWorkbook:deleteNamedRanges() end

---Delete sheet (worksheet or chartsheet) from the workbook.
---@param sheetName string # Name of the sheet to delete.
---\throws XLException An exception will be thrown if trying to delete the last worksheet in the workbook
---\warning A workbook must contain at least one worksheet. Trying to delete the last worksheet from the
---workbook will trow an exception.
function XLWorkbook:deleteSheet(sheetName) end

---
---@return boolean # 
function XLWorkbook:hasSharedStrings() end

---
---@param sheetName string # 
---@return integer # 
function XLWorkbook:indexOfSheet(sheetName) end

---Default constructor. Creates an empty ('null') XLWorkbook object.
---@return openxlsx.XLWorkbook
---
---Constructor. Takes a pointer to an XLXmlData object (stored in the parent XLDocument object).
---\param xmlData A pointer to the underlying XLXmlData object, which holds the XML data.
---\note Do not create an XLWorkbook object directly. Get access through the an XLDocument object.
---@overload fun(xmlData: openxlsx.XLXmlData): openxlsx.XLWorkbook
function XLWorkbook.new() end

---set a flag to force full calculation upon loading the file in Excel
function XLWorkbook:setFullCalculationOnLoad() end

---
---@param sheetName string # 
---@param index integer # 
function XLWorkbook:setSheetIndex(sheetName, index) end

---
---@return openxlsx.XLSharedStrings # 
function XLWorkbook:sharedStrings() end

---Get the sheet (worksheet or chartsheet) at the given index.
---@param index integer # The index at which the desired sheet is located.
---@return openxlsx.XLSheet # A pointer to an XLAbstractSheet with the sheet at the index.
---\note The index must be 1-based (rather than 0-based) as this is the default for Excel spreadsheets.
---
---Get the sheet (worksheet or chartsheet) with the given name.
---\param sheetName The name of the desired sheet.
---\return A pointer to an XLAbstractSheet with the sheet at the index.
---@overload fun(self: openxlsx.XLWorkbook, sheetName: string): openxlsx.XLSheet
function XLWorkbook:sheet(index) end

---
---@return integer # 
function XLWorkbook:sheetCount() end

---
---@param sheetName string # 
---@return boolean # 
function XLWorkbook:sheetExists(sheetName) end

---
---@return string[] # 
function XLWorkbook:sheetNames() end

---
---@param sheetName string # 
---@return openxlsx.XLSheetType # 
---
---
---\param index
---\return
---@overload fun(self: openxlsx.XLWorkbook, index: integer): openxlsx.XLSheetType
function XLWorkbook:typeOfSheet(sheetName) end

---
---@param oldName string # 
---@param newName string # 
function XLWorkbook:updateSheetReferences(oldName, newName) end

---Get the worksheet with the given name.
---@param sheetName string # The name of the desired worksheet.
---@return openxlsx.XLWorksheet # 
---
---Get the worksheet at the given index.
---\param index The index at which the desired sheet is located.
---\return
---@overload fun(self: openxlsx.XLWorkbook, index: integer): openxlsx.XLWorksheet
function XLWorkbook:worksheet(sheetName) end

---
---@return integer # 
function XLWorkbook:worksheetCount() end

---
---@param sheetName string # 
---@return boolean # 
function XLWorkbook:worksheetExists(sheetName) end

---
---@return string[] # 
function XLWorkbook:worksheetNames() end

return XLWorkbook