---AUTO GENERATED, DO NOT MODIFY!
---@meta openxlsx.XLFormulaProxy

---The XLFormulaProxy serves as a placeholder for XLFormula objects. This enable
---getting and setting formulas through the same interface.
---@class openxlsx.XLFormulaProxy 
local XLFormulaProxy = {}

---@return any
function XLFormulaProxy:__gc() end

---Clear the formula.
---@return openxlsx.XLFormulaProxy # Return a reference to the cleared object.
function XLFormulaProxy:clear() end

---Get the formula as a std::string.
---@return string # A std::string with the formula.
function XLFormulaProxy:get() end

---Templated setter, taking a string-type argument.
---\tparam T Type of argument.
---@param formula string # The formula string to be assigned.
function XLFormulaProxy:setString(formula) end

return XLFormulaProxy