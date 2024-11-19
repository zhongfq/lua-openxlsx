---AUTO GENERATED, DO NOT MODIFY!
---@meta openxlsx.XLAlignment

---An encapsulation of an alignment item
---@class openxlsx.XLAlignment 
local XLAlignment = {}

---@return any
function XLAlignment:__gc() end

---Get the horizontal alignment
---@return openxlsx.XLAlignmentStyle # An XLAlignmentStyle
function XLAlignment:horizontal() end

---Get the indent setting
---@return integer # An integer value, where an increment of 1 represents 3 spaces.
function XLAlignment:indent() end

---Check whether justification of last line is enabled
---@return boolean # true if enabled, false otherwise
function XLAlignment:justifyLastLine() end

---@return openxlsx.XLAlignment
function XLAlignment.new() end

---Get the reading order setting
---@return integer # An integer value: 0 - Context Dependent, 1 - Left-to-Right, 2 - Right-to-Left (any other value should be invalid)
function XLAlignment:readingOrder() end

---Get the relative indent setting
---@return integer # An integer value, where an increment of 1 represents 1 space, in addition to indent()*3 spaces
---\note can be negative
function XLAlignment:relativeIndent() end

---Setter functions for style parameters
---\param value that shall be set
---@return boolean # true for success, false for failure
---@param newStyle openxlsx.XLAlignmentStyle
function XLAlignment:setHorizontal(newStyle) end

---@param newIndent integer
---@return boolean
function XLAlignment:setIndent(newIndent) end

---@param set boolean
---@return boolean
---@overload fun(self: openxlsx.XLAlignment): boolean
function XLAlignment:setJustifyLastLine(set) end

---@param newReadingOrder integer
---@return boolean
function XLAlignment:setReadingOrder(newReadingOrder) end

---@param newIndent integer
---@return boolean
function XLAlignment:setRelativeIndent(newIndent) end

---@param set boolean
---@return boolean
---@overload fun(self: openxlsx.XLAlignment): boolean
function XLAlignment:setShrinkToFit(set) end

---\details on setTextRotation from XLSX specification:
---Text rotation in cells. Expressed in degrees. Values range from 0 to 180. The first letter of the text 
---is considered the center-point of the arc.
---For 0 - 90, the value represents degrees above horizon. For 91-180 the degrees below the horizon is calculated as:
---[degrees below horizon] = 90 - [newRotation].
---Examples: setTextRotation( 45): / (text is formatted along a line from lower left to upper right)
---setTextRotation(135): \ (text is formatted along a line from upper left to lower right)
---@param newRotation integer
---@return boolean
function XLAlignment:setTextRotation(newRotation) end

---@param newStyle openxlsx.XLAlignmentStyle
---@return boolean
function XLAlignment:setVertical(newStyle) end

---@param set boolean
---@return boolean
---@overload fun(self: openxlsx.XLAlignment): boolean
function XLAlignment:setWrapText(set) end

---Check whether shrink to fit is enabled
---@return boolean # true if enabled, false otherwise
function XLAlignment:shrinkToFit() end

---Return a string summary of the alignment properties
---@return string # string with info about the alignment object
function XLAlignment:summary() end

---Get the text rotation
---@return integer # A value in degrees (TBD: clockwise? counter-clockwise?)
function XLAlignment:textRotation() end

---Get the vertical alignment
---@return openxlsx.XLAlignmentStyle # An XLAlignmentStyle
function XLAlignment:vertical() end

---Check whether text wrapping is enabled
---@return boolean # true if enabled, false otherwise
function XLAlignment:wrapText() end

return XLAlignment