---AUTO GENERATED, DO NOT MODIFY!
---@meta openxlsx.XLCellFormat

---An encapsulation of a cell format item
---@class openxlsx.XLCellFormat 
local XLCellFormat = {}

---@return any
function XLCellFormat:__gc() end

---Return a reference to applicable alignment
---@param createIfMissing boolean # triggers creation of alignment node - should be used with setter functions of XLAlignment
---@return openxlsx.XLAlignment # An XLAlignment object reference
---@overload fun(self: openxlsx.XLCellFormat): openxlsx.XLAlignment
function XLCellFormat:alignment(createIfMissing) end

---Report whether alignment is applied
---@return boolean # true for a setting enabled, or false if disabled
function XLCellFormat:applyAlignment() end

---Report whether border is applied
---@return boolean # true for a setting enabled, or false if disabled
function XLCellFormat:applyBorder() end

---Report whether fill is applied
---@return boolean # true for a setting enabled, or false if disabled
function XLCellFormat:applyFill() end

---Report whether font is applied
---@return boolean # true for a setting enabled, or false if disabled
function XLCellFormat:applyFont() end

---Report whether number format is applied
---@return boolean # true for a setting enabled, or false if disabled
function XLCellFormat:applyNumberFormat() end

---Report whether protection is applied
---@return boolean # true for a setting enabled, or false if disabled
function XLCellFormat:applyProtection() end

---Get the border index
---@return integer # The index(!) of a border as defined in XLBorders
function XLCellFormat:borderIndex() end

---Unsupported getter
---@return openxlsx.XLUnsupportedElement
function XLCellFormat:extLst() end

---Get the fill index
---@return integer # The index(!) of a fill as defined in XLFills
function XLCellFormat:fillIndex() end

---Get the font index
---@return integer # The index(!) of a font as defined in XLFonts
function XLCellFormat:fontIndex() end

---Report whether protection hidden is applied
---@return boolean # true for a setting enabled, or false if disabled
function XLCellFormat:hidden() end

---Report whether protection locked is applied
---@return boolean # true for a setting enabled, or false if disabled
function XLCellFormat:locked() end

---@return openxlsx.XLCellFormat
function XLCellFormat.new() end

---Get the number format id
---@return integer # The identifier of a number format, built-in (predefined by office) or defind in XLNumberFormats
function XLCellFormat:numberFormatId() end

---Report whether pivot button is applied
---@return boolean # true for a setting enabled, or false if disabled
---\note from documentation: A boolean value indicating whether the cell rendering includes a pivot table dropdown button.
---\todo need to find a use case for this
function XLCellFormat:pivotButton() end

---Report whether quotePrefix is enabled
---@return boolean # true for a setting enabled, or false if disabled
---\note from documentation: A boolean value indicating whether the text string in a cell should be prefixed by a single quote mark
---(e.g., 'text). In these cases, the quote is not stored in the Shared Strings Part.
function XLCellFormat:quotePrefix() end

---@param set boolean
---@return boolean
---@overload fun(self: openxlsx.XLCellFormat): boolean
function XLCellFormat:setApplyAlignment(set) end

---@param set boolean
---@return boolean
---@overload fun(self: openxlsx.XLCellFormat): boolean
function XLCellFormat:setApplyBorder(set) end

---@param set boolean
---@return boolean
---@overload fun(self: openxlsx.XLCellFormat): boolean
function XLCellFormat:setApplyFill(set) end

---@param set boolean
---@return boolean
---@overload fun(self: openxlsx.XLCellFormat): boolean
function XLCellFormat:setApplyFont(set) end

---@param set boolean
---@return boolean
---@overload fun(self: openxlsx.XLCellFormat): boolean
function XLCellFormat:setApplyNumberFormat(set) end

---@param set boolean
---@return boolean
---@overload fun(self: openxlsx.XLCellFormat): boolean
function XLCellFormat:setApplyProtection(set) end

---@param newBorderIndex integer
---@return boolean
function XLCellFormat:setBorderIndex(newBorderIndex) end

---Unsupported setter
---@param newExtLst openxlsx.XLUnsupportedElement
---@return boolean
function XLCellFormat:setExtLst(newExtLst) end

---@param newFillIndex integer
---@return boolean
function XLCellFormat:setFillIndex(newFillIndex) end

---@param newFontIndex integer
---@return boolean
function XLCellFormat:setFontIndex(newFontIndex) end

---@param set boolean
---@return boolean
---@overload fun(self: openxlsx.XLCellFormat): boolean
function XLCellFormat:setHidden(set) end

---@param set boolean
---@return boolean
---@overload fun(self: openxlsx.XLCellFormat): boolean
function XLCellFormat:setLocked(set) end

---Setter functions for style parameters
---\param value that shall be set
---@return boolean # true for success, false for failure
---@param newNumFmtId integer
function XLCellFormat:setNumberFormatId(newNumFmtId) end

---@param set boolean
---@return boolean
---@overload fun(self: openxlsx.XLCellFormat): boolean
function XLCellFormat:setPivotButton(set) end

---@param set boolean
---@return boolean
---@overload fun(self: openxlsx.XLCellFormat): boolean
function XLCellFormat:setQuotePrefix(set) end

---@param newXfId integer
---@return boolean
function XLCellFormat:setXfId(newXfId) end

---Return a string summary of the cell format properties
---@return string # string with info about the cell format object
function XLCellFormat:summary() end

---Get the id of a referred <xf> entry
---@return integer # The id referring to an index in cell style formats (cellStyleXfs)
---\throw XLException when invoked from cellStyleFormats
---\note - only permitted for cellFormats
function XLCellFormat:xfId() end

return XLCellFormat