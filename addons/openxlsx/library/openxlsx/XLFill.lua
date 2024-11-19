---AUTO GENERATED, DO NOT MODIFY!
---@meta openxlsx.XLFill

---An encapsulation of a fill item
---@class openxlsx.XLFill 
local XLFill = {}

---@return any
function XLFill:__gc() end

---@return openxlsx.XLColor
function XLFill:backgroundColor() end

---@return number
function XLFill:bottom() end

---@return openxlsx.XLColor
function XLFill:color() end

---@return number
function XLFill:degree() end

---Get the name of the element describing a fill
---@return openxlsx.XLFillType # The XLFillType derived from the name of the first child element of the fill node
function XLFill:fillType() end

---Getter functions for gradientFill - will throwOnFillType(XLPatternFill, __func__)
---@return openxlsx.XLGradientType # The requested gradientFill property
function XLFill:gradientType() end

---@return number
function XLFill:left() end

---@return openxlsx.XLFill
function XLFill.new() end

---Getter functions for patternFill - will throwOnFillType(XLGradientFill, __func__)
---@return openxlsx.XLPatternType # The requested patternFill property
function XLFill:patternType() end

---@return number
function XLFill:right() end

---@param newBgColor openxlsx.XLColor
---@return boolean
function XLFill:setBackgroundColor(newBgColor) end

---@param newBottom number
---@return boolean
function XLFill:setBottom(newBottom) end

---@param newColor openxlsx.XLColor
---@return boolean
function XLFill:setColor(newColor) end

---@param newDegree number
---@return boolean
function XLFill:setDegree(newDegree) end

---Create & set the base XML element describing the fill
---@param newFillType openxlsx.XLFillType # that shall be set
---@param force boolean # erase an existing fillType() if not equal newFillType
---@return boolean # true for success, false for failure
---@overload fun(self: openxlsx.XLFill, newFillType: openxlsx.XLFillType): boolean
function XLFill:setFillType(newFillType, force) end

---Setter functions for gradientFill - will throwOnFillType(XLPatternFill, __func__)
---\param value that shall be set
---@return boolean # true for success, false for failure
---\note for gradient stops, use the stops() getter with the XLGradientStops access functions (create, stopByIndex, [])
---and the XLGradientStop setter functions
---@param newType openxlsx.XLGradientType
function XLFill:setGradientType(newType) end

---@param newLeft number
---@return boolean
function XLFill:setLeft(newLeft) end

---Setter functions for patternFill - will throwOnFillType(XLGradientFill, __func__)
---\param value that shall be set
---@return boolean # true for success, false for failure
---@param newPatternType openxlsx.XLPatternType
function XLFill:setPatternType(newPatternType) end

---@param newRight number
---@return boolean
function XLFill:setRight(newRight) end

---@param newTop number
---@return boolean
function XLFill:setTop(newTop) end

---@return openxlsx.XLGradientStops
function XLFill:stops() end

---Return a string summary of the fill properties
---@return string # string with info about the fill object
function XLFill:summary() end

---@return number
function XLFill:top() end

return XLFill