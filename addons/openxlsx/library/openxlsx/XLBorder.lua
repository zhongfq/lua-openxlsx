---AUTO GENERATED, DO NOT MODIFY!
---@meta openxlsx.XLBorder

---An encapsulation of a border item
---@class openxlsx.XLBorder 
local XLBorder = {}

---@return any
function XLBorder:__gc() end

---Get the bottom line property
---@return openxlsx.XLLine # An XLLine object
function XLBorder:bottom() end

---Get the diagonal line property
---@return openxlsx.XLLine # An XLLine object
function XLBorder:diagonal() end

---Get the diagonal down property
---@return boolean # true if set, otherwise false
function XLBorder:diagonalDown() end

---Get the diagonal up property
---@return boolean # true if set, otherwise false
function XLBorder:diagonalUp() end

---Get the horizontal line property
---@return openxlsx.XLLine # An XLLine object
function XLBorder:horizontal() end

---Get the left line property
---@return openxlsx.XLLine # An XLLine object
function XLBorder:left() end

---@return openxlsx.XLBorder
function XLBorder.new() end

---Get the outline property
---@return boolean # true if set, otherwise false
function XLBorder:outline() end

---Get the left line property
---@return openxlsx.XLLine # An XLLine object
function XLBorder:right() end

---@param lineStyle openxlsx.XLLineStyle
---@param lineColor openxlsx.XLColor
---@param lineTint number
---@return boolean
---@overload fun(self: openxlsx.XLBorder, lineStyle: openxlsx.XLLineStyle, lineColor: openxlsx.XLColor): boolean
function XLBorder:setBottom(lineStyle, lineColor, lineTint) end

---@param lineStyle openxlsx.XLLineStyle
---@param lineColor openxlsx.XLColor
---@param lineTint number
---@return boolean
---@overload fun(self: openxlsx.XLBorder, lineStyle: openxlsx.XLLineStyle, lineColor: openxlsx.XLColor): boolean
function XLBorder:setDiagonal(lineStyle, lineColor, lineTint) end

---@param set boolean
---@return boolean
---@overload fun(self: openxlsx.XLBorder): boolean
function XLBorder:setDiagonalDown(set) end

---Setter functions for style parameters
---\param value that shall be set
---\param value2 (optional) that shall be set
---@return boolean # true for success, false for failure
---@param set boolean
---@overload fun(self: openxlsx.XLBorder): boolean
function XLBorder:setDiagonalUp(set) end

---@param lineStyle openxlsx.XLLineStyle
---@param lineColor openxlsx.XLColor
---@param lineTint number
---@return boolean
---@overload fun(self: openxlsx.XLBorder, lineStyle: openxlsx.XLLineStyle, lineColor: openxlsx.XLColor): boolean
function XLBorder:setHorizontal(lineStyle, lineColor, lineTint) end

---@param lineStyle openxlsx.XLLineStyle
---@param lineColor openxlsx.XLColor
---@param lineTint number
---@return boolean
---@overload fun(self: openxlsx.XLBorder, lineStyle: openxlsx.XLLineStyle, lineColor: openxlsx.XLColor): boolean
function XLBorder:setLeft(lineStyle, lineColor, lineTint) end

---@param lineType openxlsx.XLLineType
---@param lineStyle openxlsx.XLLineStyle
---@param lineColor openxlsx.XLColor
---@param lineTint number
---@return boolean
---@overload fun(self: openxlsx.XLBorder, lineType: openxlsx.XLLineType, lineStyle: openxlsx.XLLineStyle, lineColor: openxlsx.XLColor): boolean
function XLBorder:setLine(lineType, lineStyle, lineColor, lineTint) end

---@param set boolean
---@return boolean
---@overload fun(self: openxlsx.XLBorder): boolean
function XLBorder:setOutline(set) end

---@param lineStyle openxlsx.XLLineStyle
---@param lineColor openxlsx.XLColor
---@param lineTint number
---@return boolean
---@overload fun(self: openxlsx.XLBorder, lineStyle: openxlsx.XLLineStyle, lineColor: openxlsx.XLColor): boolean
function XLBorder:setRight(lineStyle, lineColor, lineTint) end

---@param lineStyle openxlsx.XLLineStyle
---@param lineColor openxlsx.XLColor
---@param lineTint number
---@return boolean
---@overload fun(self: openxlsx.XLBorder, lineStyle: openxlsx.XLLineStyle, lineColor: openxlsx.XLColor): boolean
function XLBorder:setTop(lineStyle, lineColor, lineTint) end

---@param lineStyle openxlsx.XLLineStyle
---@param lineColor openxlsx.XLColor
---@param lineTint number
---@return boolean
---@overload fun(self: openxlsx.XLBorder, lineStyle: openxlsx.XLLineStyle, lineColor: openxlsx.XLColor): boolean
function XLBorder:setVertical(lineStyle, lineColor, lineTint) end

---Return a string summary of the font properties
---@return string # string with info about the font object
function XLBorder:summary() end

---Get the left line property
---@return openxlsx.XLLine # An XLLine object
function XLBorder:top() end

---Get the vertical line property
---@return openxlsx.XLLine # An XLLine object
function XLBorder:vertical() end

return XLBorder