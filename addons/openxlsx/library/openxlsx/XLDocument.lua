---AUTO GENERATED, DO NOT MODIFY!
---@meta openxlsx.XLDocument

---This class encapsulates the concept of an excel file. It is different from the XLWorkbook, in that an
---XLDocument holds an XLWorkbook together with its metadata, as well as methods for opening,
---closing and saving the document.\n<b><em>The XLDocument is the entrypoint for clients
---using the RapidXLSX library.</em></b>
---@class openxlsx.XLDocument 
local XLDocument = {}

---@return any
function XLDocument:__gc() end

---Close the current document
function XLDocument:close() end

---Create a new .xlsx file with the given name.
---@param fileName string # The path of the new .xlsx file.
function XLDocument:create(fileName) end

---Delete the property from the document
---@param theProperty openxlsx.XLProperty # The property to delete from the document
function XLDocument:deleteProperty(theProperty) end

---
---@param command openxlsx.XLCommand # 
---@return boolean # for XLCommandType::SetSheetActive: execution success, otherwise always true
function XLDocument:execCommand(command) end

---
---@param query openxlsx.XLQuery # 
---@return openxlsx.XLQuery # 
function XLDocument:execQuery(query) end

---
---@return boolean # 
function XLDocument:isOpen() end

---Get the filename of the current document, e.g. "spreadsheet.xlsx".
---@return string # A std::string with the filename.
---\note 2024-06-03: function can't return as reference to const because filename as a substr of m_filePath can be a temporary
---\note 2024-07-28: Removed const from return type
function XLDocument:name() end

---Constructor. The default constructor with no arguments.
---@param zipArchive openxlsx.IZipArchive
---@return openxlsx.XLDocument
---@overload fun(): openxlsx.XLDocument
---
---Constructor. An alternative constructor, taking the path to the .xlsx file as an argument.
---\param docPath A std::string with the path to the .xlsx file.
---\param zipArchive
---@overload fun(docPath: string, zipArchive: openxlsx.IZipArchive): openxlsx.XLDocument
---
---Constructor. An alternative constructor, taking the path to the .xlsx file as an argument.
---\param docPath A std::string with the path to the .xlsx file.
---\param zipArchive
---@overload fun(docPath: string): openxlsx.XLDocument
function XLDocument.new(zipArchive) end

---Open the .xlsx file with the given path
---@param fileName string # The path of the .xlsx file to open
function XLDocument:open(fileName) end

---Get the full path of the current document, e.g. "drive/blah/spreadsheet.xlsx"
---@return string # A std::string with the path.
function XLDocument:path() end

---Get the requested document property.
---@param prop openxlsx.XLProperty # The name of the property to get.
---@return string # The property as a string
function XLDocument:property(prop) end

---Save the current document using the current filename, overwriting the existing file.
---\throw ZipRuntimeError (zippy failed archive / file access)
function XLDocument:save() end

---Save the document with a new name. If a file exists with that name, it will be overwritten.
---@param fileName string # The path of the file
---\throw ZipRuntimeError (zippy failed archive / file access)
function XLDocument:saveAs(fileName) end

---Set a property
---@param prop openxlsx.XLProperty # The property to set.
---@param value string # The getValue of the property, as a string
function XLDocument:setProperty(prop, value) end

---Get the underlying workbook object, as a const object.
---@return openxlsx.XLWorkbook # A const pointer to the XLWorkbook object.
function XLDocument:workbook() end

return XLDocument