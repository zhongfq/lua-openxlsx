---AUTO GENERATED, DO NOT MODIFY!
---@meta openxlsx.XLGradientStop

---An encapsulation of an fill::gradientFill::stop item
---@class openxlsx.XLGradientStop 
local XLGradientStop = {}

---@return any
function XLGradientStop:__gc() end

---Getter functions
---@return openxlsx.XLDataBarColor # The requested gradient stop property
function XLGradientStop:color() end

---@return openxlsx.XLGradientStop
function XLGradientStop.new() end

---@return number
function XLGradientStop:position() end

---Setter functions
---\param value that shall be set
---@return boolean # true for success, false for failure
---\note for color setters, use the color() getter with the XLDataBarColor setter functions
---@param newPosition number
function XLGradientStop:setPosition(newPosition) end

---Return a string summary of the stop properties
---@return string # string with info about the stop object
function XLGradientStop:summary() end

return XLGradientStop